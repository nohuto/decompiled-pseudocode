/*
 * XREFs of ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C0121920
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C0105344 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void __fastcall ndisVBusDetachComplete(void *a1)
{
  LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  ndisBindEnumerateProtocolDrivers(
    (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_9f85fcd2040f04b850747010404e3e47_::_lambda_invoker_cdecl_,
    0LL);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32);
  NmrClientDetachProviderComplete(*(HANDLE *)&WPP_MAIN_CB.DeviceQueue.Type);
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = 0LL;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL;
}
