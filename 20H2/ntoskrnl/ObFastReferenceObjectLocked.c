/*
 * XREFs of ObFastReferenceObjectLocked @ 0x140209828
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140248024 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     MiFlushControlArea @ 0x140527CB4 (MiFlushControlArea.c)
 *     MiPreventControlAreaDelete @ 0x14052847C (MiPreventControlAreaDelete.c)
 *     MiNoPagesLastChance @ 0x14054ECF8 (MiNoPagesLastChance.c)
 *     SeCaptureSubjectContextEx @ 0x140602A50 (SeCaptureSubjectContextEx.c)
 *     PsImpersonateClient @ 0x140607260 (PsImpersonateClient.c)
 *     PfQuerySuperfetchInformation @ 0x14060B800 (PfQuerySuperfetchInformation.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     PsReferenceEffectiveToken @ 0x14061FA40 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x140620190 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x140620380 (SeCreateClientSecurityEx.c)
 *     NtOpenProcessTokenEx @ 0x14067E870 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     PspReferenceSystemDll @ 0x1406F0024 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), 0x746C6644u);
  return v1;
}
