/*
 * XREFs of DxgkReportDeviceDirectedPowerDown @ 0x1C003A43C
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0162F00 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDeviceDirectedPowerDown(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 2784) )
      return PoFxCompleteDirectedPowerDown();
  }
  return result;
}
