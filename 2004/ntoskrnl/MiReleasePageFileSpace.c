/*
 * XREFs of MiReleasePageFileSpace @ 0x1402525F0
 * Callers:
 *     MiDeleteClusterSection @ 0x1402273C0 (MiDeleteClusterSection.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeletePerSessionProtos @ 0x14035CCDC (MiDeletePerSessionProtos.c)
 *     MiDeleteMergedPte @ 0x140364BB8 (MiDeleteMergedPte.c)
 *     MiPurgeImageSection @ 0x1403A2634 (MiPurgeImageSection.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleasePageFileSpace(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v3 = MiCapturePageFileInfoInline(&v5, 0LL);
  if ( !v3 )
    return 0LL;
  MiReleasePageFileInfo(a1, v3, 0LL);
  return 1LL;
}
