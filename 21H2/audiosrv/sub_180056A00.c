/*
 * XREFs of sub_180056A00 @ 0x180056A00
 * Callers:
 *     sub_1800564F8 @ 0x1800564F8 (sub_1800564F8.c)
 *     sub_180056734 @ 0x180056734 (sub_180056734.c)
 *     sub_180056854 @ 0x180056854 (sub_180056854.c)
 *     sub_180056938 @ 0x180056938 (sub_180056938.c)
 *     sub_180057B1C @ 0x180057B1C (sub_180057B1C.c)
 * Callees:
 *     sub_180010FD8 @ 0x180010FD8 (sub_180010FD8.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180056A00(__int64 a1)
{
  int v2; // eax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = sub_180010FD8((struct _RTL_CRITICAL_SECTION *)a1);
  if ( v2 < 0 )
    sub_1800B8610((unsigned int)v2);
  return a1;
}
