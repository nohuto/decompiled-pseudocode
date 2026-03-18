/*
 * XREFs of TR_FSEReceived @ 0x1C000F514
 * Callers:
 *     ESM_NotifyingTransferRingsFSEReceived @ 0x1C000EEF0 (ESM_NotifyingTransferRingsFSEReceived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_FSEReceived(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 144LL))();
}
