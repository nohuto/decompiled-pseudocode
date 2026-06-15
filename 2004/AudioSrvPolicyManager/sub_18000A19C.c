/*
 * XREFs of sub_18000A19C @ 0x18000A19C
 * Callers:
 *     sub_180001DD0 @ 0x180001DD0 (sub_180001DD0.c)
 *     sub_180001E00 @ 0x180001E00 (sub_180001E00.c)
 *     sub_1800089D0 @ 0x1800089D0 (sub_1800089D0.c)
 *     sub_18000FEA0 @ 0x18000FEA0 (sub_18000FEA0.c)
 *     sub_180013B34 @ 0x180013B34 (sub_180013B34.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall sub_18000A19C(struct _RTL_CRITICAL_SECTION *a1)
{
  InitializeCriticalSection(a1);
  return a1;
}
