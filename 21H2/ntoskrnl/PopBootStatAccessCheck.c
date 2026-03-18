/*
 * XREFs of PopBootStatAccessCheck @ 0x1406D6C24
 * Callers:
 *     PopBootStatGet @ 0x1406D5F3C (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1406D6228 (PopBootStatSet.c)
 *     PopBootStatCheckIntegrity @ 0x140998CC4 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140998F18 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x140722890 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1407248C0 (ObpGetObjectSecurity.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

int __fastcall PopBootStatAccessCheck(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3)
{
  int result; // eax
  PSECURITY_DESCRIPTOR v6; // rsi
  BOOLEAN v7; // bl
  __int64 v8; // rdx
  __int64 v9; // r9
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-1h]
  NTSTATUS AccessStatus; // [rsp+58h] [rbp+17h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp+1Bh] BYREF
  PVOID Object; // [rsp+60h] [rbp+1Fh] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp+27h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+2Fh] BYREF
  char v16; // [rsp+C0h] [rbp+7Fh] BYREF

  GrantedAccess = 0;
  v16 = 0;
  SecurityDescriptor = 0LL;
  Object = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  result = ObReferenceObjectByHandle(a1, 0, 0LL, 0, &Object, 0LL);
  AccessStatus = result;
  if ( result >= 0 )
  {
    result = ObpGetObjectSecurity(Object, &SecurityDescriptor, &v16, 0LL);
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
        LOBYTE(v8) = v16;
        ObReleaseObjectSecurityEx(v6, v8, Object, v9);
        result = AccessStatus;
      }
    }
    if ( Object )
    {
      ObfDereferenceObject(Object);
      return AccessStatus;
    }
  }
  return result;
}
