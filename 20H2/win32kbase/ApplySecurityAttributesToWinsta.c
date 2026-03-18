/*
 * XREFs of ApplySecurityAttributesToWinsta @ 0x1C008F5C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 */

__int64 __fastcall ApplySecurityAttributesToWinsta(__int64 a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  void *v6; // rcx
  NTSTATUS ObjectSecurity; // ebx
  NTSTATUS v9; // ecx
  ULONG v10; // eax
  __int64 v11; // rdx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-30h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+48h] [rbp-28h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 MemoryAllocated; // [rsp+A0h] [rbp+30h] BYREF
  int v16; // [rsp+A8h] [rbp+38h] BYREF

  SecurityDescriptor = 0LL;
  NewDescriptor = 0LL;
  MemoryAllocated = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v6 = *(void **)ObQueryNameInfo(a1, v4, v5);
  if ( v6 && (ObjectSecurity = ObGetObjectSecurity(v6, &SecurityDescriptor, &MemoryAllocated), ObjectSecurity < 0) )
  {
    SeUnlockSubjectContext(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    ObjectSecurity = SeAssignSecurity(
                       SecurityDescriptor,
                       a2,
                       &NewDescriptor,
                       1u,
                       &SubjectContext,
                       (PGENERIC_MAPPING)&WinStaMapping,
                       PagedPool);
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    SeUnlockSubjectContext(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
    if ( ObjectSecurity < 0 )
    {
      v9 = -1073741790;
      if ( ObjectSecurity != -1073741790 )
        v9 = ObjectSecurity;
      v10 = RtlNtStatusToDosError(v9);
      UserSetLastError(v10, v11);
    }
    else
    {
      v16 = 15;
      ObjectSecurity = ObSetSecurityDescriptorInfo(a1, &v16, NewDescriptor, a1 - 8, 1, &WinStaMapping);
      SeDeassignSecurity(&NewDescriptor);
    }
  }
  return (unsigned int)ObjectSecurity;
}
