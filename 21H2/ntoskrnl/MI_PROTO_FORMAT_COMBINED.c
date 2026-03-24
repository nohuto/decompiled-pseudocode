/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x14028D248
 * Callers:
 *     MiWalkVaRange @ 0x14023C0F0 (MiWalkVaRange.c)
 *     MiSharedVaToPartition @ 0x14024144C (MiSharedVaToPartition.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiComputePageCommitment @ 0x14030CB60 (MiComputePageCommitment.c)
 *     MiGetPageProtection @ 0x140330DA0 (MiGetPageProtection.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiCountSystemImageCommitment @ 0x14039EC94 (MiCountSystemImageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B10C (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(__int64 a1)
{
  __int16 v1; // dx

  return !(unsigned int)MiIsPrototypePteVadLookup(a1) && (v1 & 0x800) != 0LL;
}
