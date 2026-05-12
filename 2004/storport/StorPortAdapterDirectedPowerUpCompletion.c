/*
 * XREFs of StorPortAdapterDirectedPowerUpCompletion @ 0x1C003F660
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C002C628 (RaidAdapterPoFxIdleComponent.c)
 *     RaFlushDFxQueue @ 0x1C0033424 (RaFlushDFxQueue.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C00361A0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaidAdapterCancelWaitWakeIrp @ 0x1C003D858 (RaidAdapterCancelWaitWakeIrp.c)
 */

void __fastcall StorPortAdapterDirectedPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context)
{
  __int64 v4; // rdx
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+28h] [rbp-10h]

  v4 = *((_QWORD *)Context + 636);
  Context[108] &= ~1u;
  v6 = (_QWORD *)v4;
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    RaidAdapterCancelWaitWakeIrp((__int64)Context);
    v6 = (_QWORD *)*((_QWORD *)Context + 636);
  }
  PoFxReportDevicePoweredOn(*v6);
  if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
  {
    v10 = 1;
    v9 = *((_DWORD *)Context + 14);
    McTemplateK0pqq_EtwWriteTransfer(v7, &EventAdapterDirectedPowerUpStop, v8, **((_QWORD **)Context + 636), v9, v10);
  }
  if ( *((char **)Context + 734) != Context + 5872 )
    RaFlushDFxQueue(*((struct _DEVICE_OBJECT **)Context + 1));
}
