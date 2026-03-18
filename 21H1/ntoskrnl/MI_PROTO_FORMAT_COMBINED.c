/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x140344F70
 * Callers:
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiGetPageProtection @ 0x14021F920 (MiGetPageProtection.c)
 *     MiSharedVaToPartition @ 0x140226348 (MiSharedVaToPartition.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiComputePageCommitment @ 0x1402AD4B0 (MiComputePageCommitment.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiCountSystemImageCommitment @ 0x14039B774 (MiCountSystemImageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x1405255EC (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(__int64 a1)
{
  __int16 v1; // dx

  return !(unsigned int)MiIsPrototypePteVadLookup(a1) && (v1 & 0x800) != 0LL;
}
