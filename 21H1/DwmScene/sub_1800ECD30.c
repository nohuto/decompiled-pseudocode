/*
 * XREFs of sub_1800ECD30 @ 0x1800ECD30
 * Callers:
 *     sub_1800EC274 @ 0x1800EC274 (sub_1800EC274.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     sub_1800ECEEC @ 0x1800ECEEC (sub_1800ECEEC.c)
 * Callees:
 *     sub_1800EBAA4 @ 0x1800EBAA4 (sub_1800EBAA4.c)
 */

unsigned __int64 __fastcall sub_1800ECD30(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
  if ( *(_DWORD *)(a1 + 1172) )
    v1 = ~(*(unsigned int *)(a1 + 1172) - 1LL) & (v1 + *(unsigned int *)(a1 + 1172) - 1LL);
  return sub_1800EBAA4((__int64 *)(a1 + 80), v1);
}
