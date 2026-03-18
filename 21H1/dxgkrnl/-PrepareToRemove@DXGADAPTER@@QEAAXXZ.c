/*
 * XREFs of ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C020A2EC
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0186430 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C003AD74 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGADAPTER::PrepareToRemove(struct _KTIMER *this)
{
  bool v1; // zf
  struct _KTIMER *v3; // rdi
  __int64 v4; // rcx

  v1 = this[43].TimerListEntry.Flink == 0LL;
  LODWORD(this[3].Header.WaitListHead.Flink) = 5;
  if ( !v1 )
  {
    v3 = this + 52;
    BYTE6(this[50].Header.WaitListHead.Flink) = 1;
    if ( !KeCancelTimer(this + 52) )
    {
      KeFlushQueuedDpcs();
      if ( !KeCancelTimer(v3) )
        KeFlushQueuedDpcs();
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(this[3].DueTime.QuadPart + 64) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(
        (DXGADAPTER *)this,
        &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      BYTE1(this[50].Header.WaitListHead.Blink) = 0;
    }
    this[54].Header.LockNV = 0;
  }
  v4 = *(_QWORD *)&this[41].Processor;
  if ( v4 )
    ADAPTER_RENDER::FlushScheduler(v4, 5, 0xFFFFFFFF, 0);
}
