/*
 * XREFs of sub_180005BB4 @ 0x180005BB4
 * Callers:
 *     sub_180005AF0 @ 0x180005AF0 (sub_180005AF0.c)
 *     sub_18000B9A8 @ 0x18000B9A8 (sub_18000B9A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180005BB4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 1384) )
    result = TpReleaseWork();
  if ( *(_QWORD *)(a1 + 1296) )
  {
    result = TpReleaseWork();
    *(_QWORD *)(a1 + 1296) = 0LL;
  }
  return result;
}
