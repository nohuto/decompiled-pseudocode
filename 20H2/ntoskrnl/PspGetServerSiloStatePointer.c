/*
 * XREFs of PspGetServerSiloStatePointer @ 0x14057F598
 * Callers:
 *     PsStartSiloMonitor @ 0x1407BF870 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x14090DD30 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x14090DF80 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x14090E02C (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x14090E134 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1272) + 1112LL;
}
