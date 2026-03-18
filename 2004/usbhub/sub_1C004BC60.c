/*
 * XREFs of sub_1C004BC60 @ 0x1C004BC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C004B580 @ 0x1C004B580 (sub_1C004B580.c)
 */

__int64 __fastcall sub_1C004BC60(__int64 a1, _QWORD *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x42554855u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_OWORD *)PoolWithTag = 0LL;
  PoolWithTag[4] = 0;
  sub_1C004B580(PoolWithTag, 0xAuLL, 0LL, &v6, 512, L"USB(%d)");
  result = 0LL;
  *a2 = v4;
  return result;
}
