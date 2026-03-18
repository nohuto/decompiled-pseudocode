/*
 * XREFs of MiReleasePageFileSpace @ 0x140274E48
 * Callers:
 *     MiDeleteMergedPte @ 0x140239C2C (MiDeleteMergedPte.c)
 *     MiDeletePerSessionProtos @ 0x14025592C (MiDeletePerSessionProtos.c)
 *     MiPurgeImageSection @ 0x14025AD28 (MiPurgeImageSection.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiActOnPte @ 0x14033E970 (MiActOnPte.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 */

__int64 __fastcall MiReleasePageFileSpace(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v4 = MiCapturePageFileInfoInline(&v6, 0, a3);
  if ( !v4 )
    return 0LL;
  MiReleasePageFileInfo(a1, v4, 0LL);
  return 1LL;
}
