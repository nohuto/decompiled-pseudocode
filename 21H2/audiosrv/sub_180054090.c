/*
 * XREFs of sub_180054090 @ 0x180054090
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 * Callees:
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 */

BOOL __fastcall sub_180054090(LPINIT_ONCE *a1)
{
  DWORD v1; // edx

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
  {
    sub_180053914((__int64 *)&(*a1)[1], (__int64)(*a1)[4].Ptr, (__int64)sub_1800DAE90);
    v1 = *((_DWORD *)a1 + 2);
  }
  return InitOnceComplete(*a1, v1, &(*a1)[1]);
}
