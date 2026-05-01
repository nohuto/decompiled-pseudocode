/*
 * XREFs of sub_180043288 @ 0x180043288
 * Callers:
 *     sub_180043230 @ 0x180043230 (sub_180043230.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180043288(__int64 a1, HANDLE *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h]
  HANDLE v7; // [rsp+50h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 32);
  v7 = 0LL;
  v5 = 0LL;
  LODWORD(v5) = 1;
  DWORD2(v5) = 1048577;
  *(_OWORD *)Handle = 0LL;
  result = NtManagePartition(v2, 0LL, 5LL, &v5, 40);
  if ( (int)result >= 0 )
  {
    NtClose(Handle[0]);
    NtClose(v7);
    *a2 = Handle[1];
    return 0LL;
  }
  return result;
}
