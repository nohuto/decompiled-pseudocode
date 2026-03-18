/*
 * XREFs of ?StartTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0034CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::StartTransfer(FxDmaScatterGatherTransaction *this)
{
  return ((__int64 (__fastcall *)(FxDmaScatterGatherTransaction *))this->StageTransfer)(this);
}
