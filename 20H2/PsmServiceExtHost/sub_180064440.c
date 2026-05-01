/*
 * XREFs of sub_180064440 @ 0x180064440
 * Callers:
 *     sub_180044860 @ 0x180044860 (sub_180044860.c)
 * Callees:
 *     sub_1800375E8 @ 0x1800375E8 (sub_1800375E8.c)
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 *     sub_18003A040 @ 0x18003A040 (sub_18003A040.c)
 *     sub_180064974 @ 0x180064974 (sub_180064974.c)
 *     sub_180066658 @ 0x180066658 (sub_180066658.c)
 */

__int64 __fastcall sub_180064440(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _TP_TIMER *v4; // rcx

  *(_BYTE *)a1 = 0;
  sub_1800375E8((struct _TP_TIMER **)(a1 + 16), 0LL);
  *(_BYTE *)a1 = 0;
  sub_18003A040(a1);
  v2 = *(void **)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( v2 )
    sub_18003850C(v2);
  v3 = *(void **)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( v3 )
    sub_18003850C(v3);
  if ( *(_QWORD *)(a1 + 40) )
    sub_180066658();
  if ( *(_QWORD *)(a1 + 32) )
    sub_180066658();
  v4 = *(struct _TP_TIMER **)(a1 + 16);
  if ( v4 )
    sub_180064974(v4);
  return a1;
}
