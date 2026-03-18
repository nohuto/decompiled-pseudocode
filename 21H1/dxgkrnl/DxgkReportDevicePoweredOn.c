/*
 * XREFs of DxgkReportDevicePoweredOn @ 0x1C003A46C
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C004F994 (DpiRequestDevicePowerState.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C004FE3C (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDevicePoweredOn(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 2784);
    if ( v1 )
      return PoFxReportDevicePoweredOn(v1);
  }
  return result;
}
