/*
 * XREFs of NtUserGetUpdateRect @ 0x1C010F600
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxGetUpdateRect @ 0x1C010F7E0 (xxxGetUpdateRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  unsigned int UpdateRect; // r14d
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h]
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v8;
    HMLockObject(v8);
    UpdateRect = xxxGetUpdateRect(
                   v8,
                   (unsigned __int64)&v21 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
        {
          v14 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
          if ( (((unsigned __int16)(v14 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v13) >> 8)) & 0x1FF) != 0 )
            goto LABEL_20;
          v15 = *(unsigned int *)(*(_QWORD *)(v8 + 40) + 288LL);
          v16 = (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL) & 0xF) == 2 && (v15 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v15) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v17) & 0x20000000) == 0 )
          {
            v6 = 0;
          }
          if ( v16 != v6 )
LABEL_20:
            TransformRectBetweenCoordinateSpaces(&v21, &v21, 0LL, v8);
        }
      }
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v21;
    }
    ThreadUnlock1(v10, v9, v11);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v7);
  return UpdateRect;
}
