/*
 * XREFs of MiBadShareCount @ 0x1405AD6C8
 * Callers:
 *     MiReduceShareCount @ 0x14022876C (MiReduceShareCount.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiDeleteTransitionPte @ 0x1402C3100 (MiDeleteTransitionPte.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1402C9E70 (MiDeleteBatch.c)
 *     MiDeleteClusterPage @ 0x1402CC0F0 (MiDeleteClusterPage.c)
 *     MiDeleteValidSystemPage @ 0x14033BEC0 (MiDeleteValidSystemPage.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadShareCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x99uLL,
    0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
    *(_BYTE *)(a1 + 34) & 7,
    *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
}
