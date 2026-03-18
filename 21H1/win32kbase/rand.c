/*
 * XREFs of rand @ 0x1C00CC7F8
 * Callers:
 *     ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1C00696C8 (-SampleRandomPickStart@MousePerfSummary@@AEAAXXZ.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00A5E98 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1C024CCC0 = 214013 * dword_1C024CCC0 + 2531011;
  return (dword_1C024CCC0 >> 16) & 0x7FFF;
}
