/*
 * XREFs of PspGetServerSiloStatePointer @ 0x14057B528
 * Callers:
 *     PsStartSiloMonitor @ 0x1407AE7D0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x140906E60 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x1409070B0 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x14090715C (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x140907264 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1272) + 1096LL;
}
