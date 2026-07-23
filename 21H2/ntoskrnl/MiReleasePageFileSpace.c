/*
 * XREFs of MiReleasePageFileSpace @ 0x14030DEA4
 * Callers:
 *     MiDeletePerSessionProtos @ 0x14024D674 (MiDeletePerSessionProtos.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiWsleFlush @ 0x140332240 (MiWsleFlush.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiDeleteMergedPte @ 0x140366FF8 (MiDeleteMergedPte.c)
 *     MiPurgeImageSection @ 0x1403A5514 (MiPurgeImageSection.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
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
