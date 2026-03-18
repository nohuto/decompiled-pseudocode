/*
 * XREFs of _NtUserGetScrollBarInfo@12 @ 0x6C254
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _xxxGetScrollBarInfo@12 @ 0x6D508 (_xxxGetScrollBarInfo@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserGetScrollBarInfo(int a1, int a2, int *a3)
{
  ULONG_PTR v3; // edi
  int ScrollBarInfo; // ebx
  int v5; // esi
  int *ThreadWin32Thread; // eax
  int v7; // esi
  int *v8; // eax
  unsigned int v9; // esi
  int v10; // esi
  int v11; // eax
  int v13; // [esp+18h] [ebp-74h] BYREF
  ULONG_PTR v14; // [esp+1Ch] [ebp-70h]
  int v15; // [esp+20h] [ebp-6Ch]
  int *v16; // [esp+2Ch] [ebp-60h]
  PKTHREAD CurrentThread; // [esp+30h] [ebp-5Ch]
  int v18[16]; // [esp+34h] [ebp-58h] BYREF
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v16 = a3;
  memset(v18, 0, 0x3Cu);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    v13 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v13;
    v14 = v3;
    HMLockObject(v3);
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a3 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_BYTE *)a3 = *(_BYTE *)a3;
    *((_BYTE *)a3 + 59) = *((_BYTE *)a3 + 59);
    v18[0] = *a3;
    ms_exc.registration.TryLevel = -2;
    ScrollBarInfo = xxxGetScrollBarInfo(v3, (int)v18);
    CurrentThread = KeGetCurrentThread();
    v5 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v5 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(v5 + 260) + 148) & 1) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v7 = 0;
      if ( !IsThreadCrossSessionAttached() )
      {
        v8 = (int *)PsGetThreadWin32Thread(CurrentThread);
        if ( v8 )
          v7 = *v8;
      }
      if ( (*(_BYTE *)(*(_DWORD *)(v7 + 260) + 148) & 0x20) == 0 )
      {
        v9 = *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184);
        if ( (((v9 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
          || ((*(_DWORD *)(*(_DWORD *)(v3 + 20) + 184) & 0xF) != 2
           || (*(_DWORD *)(*(_DWORD *)(v3 + 20) + 184) & 0x20000000) == 0
            ? (v10 = 0)
            : (v10 = 1),
              (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
           || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0
            ? (v11 = 0)
            : (v11 = 1),
              v10 != v11) )
        {
          TransformRectBetweenCoordinateSpaces(&v18[1], &v18[1], 0, v3);
        }
      }
    }
    if ( ScrollBarInfo )
    {
      qmemcpy(v16, v18, 0x3Cu);
      ms_exc.registration.TryLevel = -2;
    }
    ThreadUnlock1();
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit();
  return ScrollBarInfo;
}
