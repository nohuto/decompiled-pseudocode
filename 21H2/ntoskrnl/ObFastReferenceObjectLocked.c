/*
 * XREFs of ObFastReferenceObjectLocked @ 0x1402AAC68
 * Callers:
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140300550 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     MiFlushControlArea @ 0x1405299D4 (MiFlushControlArea.c)
 *     MiPreventControlAreaDelete @ 0x14052A19C (MiPreventControlAreaDelete.c)
 *     MiNoPagesLastChance @ 0x140550A08 (MiNoPagesLastChance.c)
 *     PfQuerySuperfetchInformation @ 0x140649630 (PfQuerySuperfetchInformation.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     SeCaptureSubjectContextEx @ 0x14064CA80 (SeCaptureSubjectContextEx.c)
 *     PsImpersonateClient @ 0x14064FCC0 (PsImpersonateClient.c)
 *     PsReferenceEffectiveToken @ 0x140651B70 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x140652B90 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x140652D80 (SeCreateClientSecurityEx.c)
 *     PspReferenceSystemDll @ 0x1406C1094 (PspReferenceSystemDll.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     NtOpenProcessTokenEx @ 0x14071DAA0 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), 0x746C6644u);
  return v1;
}
