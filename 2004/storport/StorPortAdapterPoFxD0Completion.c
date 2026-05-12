/*
 * XREFs of StorPortAdapterPoFxD0Completion @ 0x1C003FAA0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C002C628 (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C00361A0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaidAdapterCancelWaitWakeIrp @ 0x1C003D858 (RaidAdapterCancelWaitWakeIrp.c)
 */

void __fastcall StorPortAdapterPoFxD0Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context)
{
  __int64 v4; // rdx
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+28h] [rbp-10h]

  v4 = Context[636];
  *((_BYTE *)Context + 108) &= ~1u;
  v6 = (_QWORD *)v4;
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    RaidAdapterCancelWaitWakeIrp((__int64)Context);
    v6 = (_QWORD *)Context[636];
  }
  PoFxReportDevicePoweredOn(*v6);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0068841 & 1) != 0 )
    {
      v10 = 1;
      v9 = *((_DWORD *)Context + 14);
      McTemplateK0pqq_EtwWriteTransfer(v7, &EventAdapterPowerRequiredStop, v8, *(_QWORD *)Context[636], v9, v10);
    }
  }
}
