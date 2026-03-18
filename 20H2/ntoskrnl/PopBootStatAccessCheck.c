/*
 * XREFs of PopBootStatAccessCheck @ 0x1407BD01C
 * Callers:
 *     PopBootStatSet @ 0x14077B488 (PopBootStatSet.c)
 *     PopBootStatGet @ 0x1407BCD30 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x1408F4B18 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408F4D5C (PopBootStatRestoreDefaults.c)
 * Callees:
 *     SeAccessCheck @ 0x140209C20 (SeAccessCheck.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReleaseObjectSecurity @ 0x1405F5670 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405F5A60 (ObpGetObjectSecurity.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

int __fastcall PopBootStatAccessCheck(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3)
{
  int result; // eax
  PSECURITY_DESCRIPTOR v6; // rsi
  BOOLEAN v7; // bl
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-1h]
  NTSTATUS AccessStatus; // [rsp+58h] [rbp+17h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp+1Bh] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp+1Fh] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp+27h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+2Fh] BYREF
  BOOLEAN MemoryAllocated; // [rsp+C0h] [rbp+7Fh] BYREF

  GrantedAccess = 0;
  MemoryAllocated = 0;
  SecurityDescriptor = 0LL;
  DmaAdapter = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  result = ObReferenceObjectByHandle(a1, 0, 0LL, 0, (PVOID *)&DmaAdapter, 0LL);
  AccessStatus = result;
  if ( result >= 0 )
  {
    result = ObpGetObjectSecurity((__int64)DmaAdapter, &SecurityDescriptor, &MemoryAllocated, 0);
    AccessStatus = result;
    if ( result >= 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      AccessMode = a2;
      v6 = SecurityDescriptor;
      v7 = SeAccessCheck(
             SecurityDescriptor,
             &SubjectContext,
             0,
             a3,
             0,
             0LL,
             (PGENERIC_MAPPING)&IopFileMapping,
             AccessMode,
             &GrantedAccess,
             &AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      result = AccessStatus;
      if ( v7 )
        result = 0;
      AccessStatus = result;
      if ( v6 )
      {
        ObReleaseObjectSecurity(v6, MemoryAllocated);
        result = AccessStatus;
      }
    }
    if ( DmaAdapter )
    {
      HalPutDmaAdapter(DmaAdapter);
      return AccessStatus;
    }
  }
  return result;
}
