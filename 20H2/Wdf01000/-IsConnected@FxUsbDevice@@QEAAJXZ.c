/*
 * XREFs of ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x1C0070010
 * Callers:
 *     imp_WdfUsbTargetDeviceIsConnectedSynchronous @ 0x1C0069320 (imp_WdfUsbTargetDeviceIsConnectedSynchronous.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006C8B8 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C006FE9C (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 */

__int64 __fastcall FxUsbDevice::IsConnected(FxUsbDevice *this)
{
  __int64 result; // rax
  unsigned int portStatus; // [rsp+38h] [rbp+10h] BYREF

  portStatus = 0;
  result = FxUsbDevice::GetPortStatus(this, (IFxMemory *)&portStatus);
  if ( (int)result >= 0 && (portStatus & 2) == 0 )
    return 3221225664LL;
  return result;
}
