/*
 * XREFs of NtUserGetUpdateRect @ 0x1C005D940
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetUpdateRect @ 0x1C005E00C (xxxGetUpdateRect.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r15
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  unsigned int UpdateRect; // r14d
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h]
  __int128 v23; // [rsp+50h] [rbp-38h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v21;
    *((_QWORD *)&v21 + 1) = v10;
    HMLockObject(v10);
    UpdateRect = xxxGetUpdateRect(
                   v10,
                   (unsigned __int64)&v23 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 1) == 0 )
      {
        v15 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472);
        if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
          if ( (((unsigned __int16)(v16 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v15) >> 8)) & 0x1FF) != 0 )
            goto LABEL_20;
          v17 = *(unsigned int *)(*(_QWORD *)(v10 + 40) + 288LL);
          v18 = (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL) & 0xF) == 2 && (v17 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v19) & 0x20000000) == 0 )
          {
            v6 = 0;
          }
          if ( v18 != v6 )
LABEL_20:
            TransformRectBetweenCoordinateSpaces(&v23, &v23, 0LL, v10);
        }
      }
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v23;
    }
    ThreadUnlock1(v12, v11, v13);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return UpdateRect;
}
