/*
 * XREFs of ObFastReferenceObjectLocked @ 0x140206338
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     MiEmptyPageAccessLog @ 0x14025BC70 (MiEmptyPageAccessLog.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1402F5800 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 *     MiFlushControlArea @ 0x140529794 (MiFlushControlArea.c)
 *     MiPreventControlAreaDelete @ 0x140529F5C (MiPreventControlAreaDelete.c)
 *     MiNoPagesLastChance @ 0x1405507C8 (MiNoPagesLastChance.c)
 *     PfQuerySuperfetchInformation @ 0x140654810 (PfQuerySuperfetchInformation.c)
 *     SeCaptureSubjectContext @ 0x140655B30 (SeCaptureSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x140655CD0 (ObOpenObjectByNameEx.c)
 *     SeCaptureSubjectContextEx @ 0x140657C60 (SeCaptureSubjectContextEx.c)
 *     PsImpersonateClient @ 0x14065AEA0 (PsImpersonateClient.c)
 *     PsReferenceEffectiveToken @ 0x14065CD50 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x14065DD70 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14065DF60 (SeCreateClientSecurityEx.c)
 *     ExpGetProcessInformation @ 0x1406F1260 (ExpGetProcessInformation.c)
 *     NtOpenProcessTokenEx @ 0x1407066C0 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x140706880 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x140706D00 (PsReferencePrimaryToken.c)
 *     PspReferenceSystemDll @ 0x140712A44 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), 0x746C6644u);
  return v1;
}
