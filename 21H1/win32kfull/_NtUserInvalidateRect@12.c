/*
 * XREFs of _NtUserInvalidateRect@12 @ 0x330E8
 * Callers:
 *     <none>
 * Callees:
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserInvalidateRect(struct _KTHREAD *a1, ULONG a2, int a3)
{
  int v3; // ebx
  int CurrentProcess; // eax
  PKTHREAD v5; // edi
  int *v6; // eax
  int *ThreadWin32Thread; // eax
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // esi
  int v13; // eax
  int *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v18; // [esp+14h] [ebp-48h] BYREF
  PKTHREAD v19; // [esp+18h] [ebp-44h]
  int v20; // [esp+1Ch] [ebp-40h]
  int *v21; // [esp+24h] [ebp-38h]
  PKTHREAD v22; // [esp+28h] [ebp-34h]
  PKTHREAD CurrentThread; // [esp+2Ch] [ebp-30h]
  int v24; // [esp+30h] [ebp-2Ch] BYREF
  int v25; // [esp+34h] [ebp-28h]
  int v26; // [esp+38h] [ebp-24h]
  int v27; // [esp+3Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v22 = a1;
  v21 = (int *)a2;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v3 = 0;
  EnterCrit(0, 1);
  CurrentProcess = PsGetCurrentProcess();
  if ( IsProcessDwm(CurrentProcess) )
    _gbValidateHandleForIL = 0;
  if ( v22 )
  {
    v5 = (PKTHREAD)ValidateHwnd(v22);
    CurrentThread = v5;
    if ( !v5 )
      goto LABEL_40;
  }
  else
  {
    v5 = 0;
    CurrentThread = 0;
  }
  if ( a2 )
  {
    ms_exc.registration.TryLevel = 0;
    v6 = (int *)_MmUserProbeAddress;
    if ( a2 < _MmUserProbeAddress )
      v6 = (int *)a2;
    v24 = *v6;
    v25 = v6[1];
    v26 = v6[2];
    v27 = v6[3];
    v22 = (PKTHREAD)&v24;
    v21 = &v24;
    ms_exc.registration.TryLevel = -2;
    v5 = CurrentThread;
    if ( CurrentThread )
    {
      CurrentThread = KeGetCurrentThread();
      if ( IsThreadCrossSessionAttached() || (ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread)) == 0 )
        v8 = 0;
      else
        v8 = *ThreadWin32Thread;
      if ( (*(_BYTE *)(*(_DWORD *)(v8 + 260) + 148) & 1) == 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( IsThreadCrossSessionAttached() || (v9 = (int *)PsGetThreadWin32Thread(CurrentThread)) == 0 )
          v10 = 0;
        else
          v10 = *v9;
        if ( (*(_BYTE *)(*(_DWORD *)(v10 + 260) + 148) & 0x20) == 0 )
        {
          v11 = *(_DWORD *)(*((_DWORD *)v5 + 5) + 184);
          if ( (((v11 >> 8) ^ (W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
            || ((*(_DWORD *)(*((_DWORD *)v5 + 5) + 184) & 0xF) != 2
             || (*(_DWORD *)(*((_DWORD *)v5 + 5) + 184) & 0x20000000) == 0
              ? (v12 = 0)
              : (v12 = 1),
                (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
             || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0
              ? (v13 = 0)
              : (v13 = 1),
                v12 != v13) )
          {
            TransformRectBetweenCoordinateSpaces(&v24, &v24, 0, v5);
          }
        }
      }
    }
  }
  v22 = KeGetCurrentThread();
  if ( IsThreadCrossSessionAttached() || (v14 = (int *)PsGetThreadWin32Thread(v22)) == 0 )
    v15 = 0;
  else
    v15 = *v14;
  v18 = *(_DWORD *)(v15 + 228);
  *(_DWORD *)(v15 + 228) = &v18;
  v19 = v5;
  if ( v5 )
  {
    HMLockObject(v5);
    v16 = 4 * (a3 != 0) + 1;
  }
  else
  {
    v16 = 66181;
  }
  v3 = xxxRedrawWindow(0, v16);
  ThreadUnlock1();
LABEL_40:
  UserSessionSwitchLeaveCrit();
  return v3;
}
