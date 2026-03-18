/*
 * XREFs of NtUserTranslateMessage @ 0x1C0107AC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxTranslateMessage @ 0x1C0107B70 (xxxTranslateMessage.c)
 */

__int64 __fastcall NtUserTranslateMessage(__int128 *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int128 v9; // [rsp+38h] [rbp-40h] BYREF
  __int128 v10; // [rsp+48h] [rbp-30h]
  __int128 v11; // [rsp+58h] [rbp-20h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  v7 = 0;
  if ( ValidateHwnd(v9) )
    v7 = xxxTranslateMessage(&v9, a2);
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v7;
}
