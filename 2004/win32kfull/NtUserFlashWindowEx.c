/*
 * XREFs of NtUserFlashWindowEx @ 0x1C01F94C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0064D28 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxFlashWindow @ 0x1C0113948 (xxxFlashWindow.c)
 */

__int64 __fastcall NtUserFlashWindowEx(__int128 *a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+40h] [rbp-58h]
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]
  __int128 v16; // [rsp+70h] [rbp-28h]
  __int128 v17; // [rsp+80h] [rbp-18h]
  struct tagWND *v18; // [rsp+A8h] [rbp+10h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v2 = 0;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v13 = a1[1];
  v16 = *a1;
  v17 = v13;
  if ( ValidateHWNDND(*((HWND *)&v16 + 1), &v18) && (_DWORD)v16 == 32 && (v13 & 0xFFFFFFF0) == 0 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v14;
    v5 = (unsigned __int64 *)v18;
    *((_QWORD *)&v14 + 1) = v18;
    HMLockObject(v18);
    v2 = xxxFlashWindow(v5, (unsigned __int16)v13 | (WORD2(v13) << 16), SDWORD2(v13));
    ThreadUnlock1(v7, v6, v8);
  }
  else
  {
    UserSetLastError(87LL, v3, v4);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v2;
}
