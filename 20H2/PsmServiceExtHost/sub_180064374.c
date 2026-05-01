/*
 * XREFs of sub_180064374 @ 0x180064374
 * Callers:
 *     sub_180065C70 @ 0x180065C70 (sub_180065C70.c)
 * Callees:
 *     sub_1800383E4 @ 0x1800383E4 (sub_1800383E4.c)
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 *     sub_180039C4C @ 0x180039C4C (sub_180039C4C.c)
 *     sub_1800659C8 @ 0x1800659C8 (sub_1800659C8.c)
 */

__int64 __fastcall sub_180064374(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  sub_1800659C8(a1 + 32);
  v2 = *(void **)(a1 + 296);
  *(_QWORD *)(a1 + 296) = 0LL;
  if ( v2 )
    sub_18003850C(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  sub_180039C4C((_QWORD *)(a1 + 40));
  v3 = *(void **)(a1 + 24);
  if ( v3 )
    sub_1800383E4(v3);
  v4 = *(void **)(a1 + 16);
  if ( v4 )
    sub_1800383E4(v4);
  v5 = *(void **)(a1 + 8);
  if ( v5 )
    sub_1800383E4(v5);
  return a1;
}
