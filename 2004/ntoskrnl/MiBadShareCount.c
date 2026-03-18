/*
 * XREFs of MiBadShareCount @ 0x1403EEC84
 * Callers:
 *     MiDeleteClusterSection @ 0x1402273C0 (MiDeleteClusterSection.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiDeleteClusterPage @ 0x140234D60 (MiDeleteClusterPage.c)
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1402415C0 (MiDeleteBatch.c)
 *     MiWsleFree @ 0x1402B3AB0 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402B6220 (MiDeleteValidSystemPage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
