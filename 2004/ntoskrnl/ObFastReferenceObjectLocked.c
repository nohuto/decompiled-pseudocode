/*
 * XREFs of ObFastReferenceObjectLocked @ 0x1402978D8
 * Callers:
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1402C54B4 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiFlushControlArea @ 0x1405242E4 (MiFlushControlArea.c)
 *     MiPreventControlAreaDelete @ 0x140524AAC (MiPreventControlAreaDelete.c)
 *     MiNoPagesLastChance @ 0x14054B328 (MiNoPagesLastChance.c)
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     NtOpenProcessTokenEx @ 0x140667060 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContextEx @ 0x14067AEC0 (SeCaptureSubjectContextEx.c)
 *     PsImpersonateClient @ 0x140681160 (PsImpersonateClient.c)
 *     PsReferenceEffectiveToken @ 0x140681A50 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x1406821A0 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x140682390 (SeCreateClientSecurityEx.c)
 *     PfQuerySuperfetchInformation @ 0x140692A30 (PfQuerySuperfetchInformation.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 *     PspReferenceSystemDll @ 0x1406B7720 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), 0x746C6644u);
  return v1;
}
