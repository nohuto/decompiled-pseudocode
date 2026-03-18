/*
 * XREFs of NtUserGetListBoxInfo @ 0x1C01FB270
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetListBoxInfo @ 0x1C024A580 (xxxGetListBoxInfo.c)
 */

__int64 __fastcall NtUserGetListBoxInfo(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int ListBoxInfo; // ebx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  ListBoxInfo = 0;
  v7 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v12;
    *((_QWORD *)&v12 + 1) = v2;
    HMLockObject(v2);
    ListBoxInfo = xxxGetListBoxInfo(v7);
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return ListBoxInfo;
}
