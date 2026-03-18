/*
 * XREFs of MiReleasePageFileSpace @ 0x14034D3F4
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiDeletePerSessionProtos @ 0x14032D664 (MiDeletePerSessionProtos.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 *     MiDeleteMergedPte @ 0x140366B98 (MiDeleteMergedPte.c)
 *     MiPurgeImageSection @ 0x1403A4B04 (MiPurgeImageSection.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 */

__int64 __fastcall MiReleasePageFileSpace(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v4 = MiCapturePageFileInfoInline(&v6, 0, a3);
  if ( !v4 )
    return 0LL;
  MiReleasePageFileInfo(a1, v4, 0);
  return 1LL;
}
