/*
 * XREFs of NtUserFlashWindowEx @ 0x1C01F8650
 * Callers:
 *     <none>
 * Callees:
 *     xxxFlashWindow @ 0x1C0019218 (xxxFlashWindow.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0093258 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserFlashWindowEx(__int128 *a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct tagWND *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int128 v11; // [rsp+40h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h]
  __int128 v14; // [rsp+70h] [rbp-28h]
  __int128 v15; // [rsp+80h] [rbp-18h]
  struct tagWND *v16; // [rsp+A8h] [rbp+10h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v2 = 0;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v11 = a1[1];
  v14 = *a1;
  v15 = v11;
  if ( ValidateHWNDND(*((HWND *)&v14 + 1), &v16) && (_DWORD)v14 == 32 && (v11 & 0xFFFFFFF0) == 0 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    v5 = v16;
    *((_QWORD *)&v12 + 1) = v16;
    HMLockObject(v16);
    v2 = xxxFlashWindow((__int64)v5, (unsigned __int16)v11 | (WORD2(v11) << 16), SDWORD2(v11));
    ThreadUnlock1(v7, v6, v8);
  }
  else
  {
    UserSetLastError(87LL, v3, v4);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v2;
}
