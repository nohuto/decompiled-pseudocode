/*
 * XREFs of sub_18008C920 @ 0x18008C920
 * Callers:
 *     sub_1800A441C @ 0x1800A441C (sub_1800A441C.c)
 * Callees:
 *     sub_1800EF770 @ 0x1800EF770 (sub_1800EF770.c)
 */

__int64 __fastcall sub_18008C920(__int64 a1, int a2)
{
  if ( *(_QWORD *)(a1 + 120) )
    sub_1800EF770();
  return sub_180062590(a1, a2);
}
