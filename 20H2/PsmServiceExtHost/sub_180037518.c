/*
 * XREFs of sub_180037518 @ 0x180037518
 * Callers:
 *     sub_180003578 @ 0x180003578 (sub_180003578.c)
 *     sub_1800202A0 @ 0x1800202A0 (sub_1800202A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180037518(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > v2;
}
