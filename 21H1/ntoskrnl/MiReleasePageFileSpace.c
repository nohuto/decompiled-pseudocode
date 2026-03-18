/*
 * XREFs of MiReleasePageFileSpace @ 0x1402AB620
 * Callers:
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiWsleFlush @ 0x140220450 (MiWsleFlush.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiDeleteClusterSection @ 0x140280410 (MiDeleteClusterSection.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiDeletePerSessionProtos @ 0x14031F1CC (MiDeletePerSessionProtos.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteMergedPte @ 0x1403641F8 (MiDeleteMergedPte.c)
 *     MiPurgeImageSection @ 0x1403A1EA4 (MiPurgeImageSection.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
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
