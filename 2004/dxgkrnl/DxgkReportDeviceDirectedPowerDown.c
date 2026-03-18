/*
 * XREFs of DxgkReportDeviceDirectedPowerDown @ 0x1C003B3AC
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0172950 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDeviceDirectedPowerDown(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 2808) )
      return PoFxCompleteDirectedPowerDown();
  }
  return result;
}
