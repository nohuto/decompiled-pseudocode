/*
 * XREFs of ?GetMonitorTransform@IMonitorTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x1800E2050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall IMonitorTarget::GetMonitorTransform(IMonitorTarget *this)
{
  return (const struct CMILMatrix *)&CMILMatrix::Identity;
}
