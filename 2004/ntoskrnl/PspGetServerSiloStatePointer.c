/*
 * XREFs of PspGetServerSiloStatePointer @ 0x14057BB68
 * Callers:
 *     PsStartSiloMonitor @ 0x1407B1930 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x140908110 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x140908360 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x14090840C (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x140908514 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1272) + 1104LL;
}
