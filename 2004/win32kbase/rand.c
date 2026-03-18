/*
 * XREFs of rand @ 0x1C00CD0A8
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00103B8 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1C0070824 (-SampleRandomPickStart@MousePerfSummary@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1C0246CC0 = 214013 * dword_1C0246CC0 + 2531011;
  return (dword_1C0246CC0 >> 16) & 0x7FFF;
}
