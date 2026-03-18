/*
 * XREFs of ObFastReferenceObjectLocked @ 0x14025B058
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140232684 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     MiFlushControlArea @ 0x140523C94 (MiFlushControlArea.c)
 *     MiPreventControlAreaDelete @ 0x14052445C (MiPreventControlAreaDelete.c)
 *     MiNoPagesLastChance @ 0x14054ACD8 (MiNoPagesLastChance.c)
 *     NtOpenProcessTokenEx @ 0x1405E0D60 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     PfQuerySuperfetchInformation @ 0x1405E94F0 (PfQuerySuperfetchInformation.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     SeCaptureSubjectContextEx @ 0x140602DE0 (SeCaptureSubjectContextEx.c)
 *     PsImpersonateClient @ 0x140609080 (PsImpersonateClient.c)
 *     PsReferenceEffectiveToken @ 0x140609900 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x14060A050 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14060A240 (SeCreateClientSecurityEx.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     PspReferenceSystemDll @ 0x14064E740 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), 0x746C6644u);
  return v1;
}
