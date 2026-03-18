/*
 * XREFs of MiBadShareCount @ 0x1403F30EC
 * Callers:
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiWsleFree @ 0x1402AB620 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402AC570 (MiDeleteValidSystemPage.c)
 *     MiDeleteClusterPage @ 0x1402AEC40 (MiDeleteClusterPage.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1402C6C70 (MiDeleteBatch.c)
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadShareCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x99uLL,
    (a1 + 0x58000000000LL) / 48,
    *(_BYTE *)(a1 + 34) & 7,
    *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
}
