/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x14020A3E8
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiSharedVaToPartition @ 0x1402E5C9C (MiSharedVaToPartition.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiComputePageCommitment @ 0x1403178B0 (MiComputePageCommitment.c)
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiCountSystemImageCommitment @ 0x14039EDE4 (MiCountSystemImageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B34C (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(__int64 a1)
{
  __int16 v1; // dx

  return !(unsigned int)MiIsPrototypePteVadLookup(a1, a1) && (v1 & 0x800) != 0LL;
}
