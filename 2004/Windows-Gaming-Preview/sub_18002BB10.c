/*
 * XREFs of sub_18002BB10 @ 0x18002BB10
 * Callers:
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_1 @ 0x180046C0F (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_1.c)
 * Callees:
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 */

volatile signed __int64 *__fastcall sub_18002BB10(__int64 a1)
{
  volatile signed __int64 *result; // rax

  result = *(volatile signed __int64 **)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (volatile signed __int64 *)sub_1800120A0(result);
  }
  return result;
}
