/*
 * XREFs of MiReleasePageFileSpace @ 0x140303154
 * Callers:
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeletePerSessionProtos @ 0x1402CF174 (MiDeletePerSessionProtos.c)
 *     MiDeleteClusterSection @ 0x1403003E0 (MiDeleteClusterSection.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     MiPfnReferenceCountIsZero @ 0x140325DF0 (MiPfnReferenceCountIsZero.c)
 *     MiWsleFlush @ 0x1403274F0 (MiWsleFlush.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiDeleteMergedPte @ 0x140366E48 (MiDeleteMergedPte.c)
 *     MiPurgeImageSection @ 0x1403A53C4 (MiPurgeImageSection.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
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
