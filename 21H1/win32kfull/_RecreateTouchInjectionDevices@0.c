/*
 * XREFs of _RecreateTouchInjectionDevices@0 @ 0xAEEDC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RecreateTouchInjectionDevices()
{
  int result; // eax

  result = 1;
  gbPendRecreateTouchInjectionDevices = 1;
  return result;
}
