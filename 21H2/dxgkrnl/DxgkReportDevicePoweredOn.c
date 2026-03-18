/*
 * XREFs of DxgkReportDevicePoweredOn @ 0x1C0024444
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0023FC0 (DpiRequestDevicePowerState.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0024370 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDevicePoweredOn(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 2904);
    if ( v1 )
      return PoFxReportDevicePoweredOn(v1);
  }
  return result;
}
