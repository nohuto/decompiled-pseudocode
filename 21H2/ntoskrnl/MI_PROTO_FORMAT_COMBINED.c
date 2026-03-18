/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x1402802DC
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiComputePageCommitment @ 0x14028EDD0 (MiComputePageCommitment.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiCountSystemImageCommitment @ 0x1402DBA28 (MiCountSystemImageCommitment.c)
 *     MiGetPageProtection @ 0x140319160 (MiGetPageProtection.c)
 *     MiSharedVaToPartition @ 0x14033D80C (MiSharedVaToPartition.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiCheckCommitReleaseFromVad @ 0x14057FA8C (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(__int64 a1)
{
  __int16 v1; // dx

  return !(unsigned int)MiIsPrototypePteVadLookup(a1) && (v1 & 0x800) != 0LL;
}
