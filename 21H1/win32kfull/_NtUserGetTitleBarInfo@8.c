/*
 * XREFs of _NtUserGetTitleBarInfo@8 @ 0x67B20
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z @ 0x31656 (-xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserGetTitleBarInfo(int a1, _BYTE *a2)
{
  PKTHREAD v2; // edi
  int v3; // ebx
  int v4; // esi
  int *ThreadWin32Thread; // eax
  int v6; // esi
  int *v7; // eax
  unsigned int v8; // esi
  int v9; // esi
  int v10; // eax
  int v12; // [esp+18h] [ebp-64h] BYREF
  PKTHREAD v13; // [esp+1Ch] [ebp-60h]
  int v14; // [esp+20h] [ebp-5Ch]
  void *v15; // [esp+2Ch] [ebp-50h]
  PKTHREAD CurrentThread; // [esp+30h] [ebp-4Ch]
  _DWORD v17[12]; // [esp+34h] [ebp-48h] BYREF
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v15 = a2;
  memset(v17, 0, 0x2Cu);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v2 = (PKTHREAD)ValidateHwnd(a1);
  CurrentThread = v2;
  if ( v2 )
  {
    v12 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v12;
    v13 = v2;
    HMLockObject(v2);
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a2 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *a2 = *a2;
    a2[43] = a2[43];
    v17[0] = *(_DWORD *)a2;
    ms_exc.registration.TryLevel = -2;
    if ( v17[0] == 44 )
    {
      memset(&v17[5], 0, 0x18u);
      v2 = CurrentThread;
      xxxCommonGetTitleBarInfo((int)CurrentThread, v17);
      v3 = 1;
    }
    else
    {
      UserSetLastError(87);
      v3 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    v4 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(v4 + 260) + 148) & 1) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = 0;
      if ( !IsThreadCrossSessionAttached() )
      {
        v7 = (int *)PsGetThreadWin32Thread(CurrentThread);
        if ( v7 )
          v6 = *v7;
      }
      if ( (*(_BYTE *)(*(_DWORD *)(v6 + 260) + 148) & 0x20) == 0 )
      {
        v8 = *(_DWORD *)(*((_DWORD *)v2 + 5) + 184);
        if ( (((v8 >> 8) ^ (W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
          || ((*(_DWORD *)(*((_DWORD *)v2 + 5) + 184) & 0xF) != 2
           || (*(_DWORD *)(*((_DWORD *)v2 + 5) + 184) & 0x20000000) == 0
            ? (v9 = 0)
            : (v9 = 1),
              (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
           || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0
            ? (v10 = 0)
            : (v10 = 1),
              v9 != v10) )
        {
          TransformRectBetweenCoordinateSpaces(&v17[1], &v17[1], 0, v2);
        }
      }
    }
    if ( v3 )
    {
      qmemcpy(v15, v17, 0x2Cu);
      ms_exc.registration.TryLevel = -2;
    }
    ThreadUnlock1();
  }
  else
  {
    v3 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
