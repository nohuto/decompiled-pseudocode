/*
 * XREFs of PspCheckJobAccessState @ 0x14090B43C
 * Callers:
 *     PspValidateJobAffinityState @ 0x14062D4B4 (PspValidateJobAffinityState.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x14062D618 (PspValidateJobAssignmentProcessLimits.c)
 *     PspSetAffinityLimitCallback @ 0x14090BC10 (PspSetAffinityLimitCallback.c)
 * Callees:
 *     SeAccessCheck @ 0x140209C20 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x1405F5670 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405F5A60 (ObpGetObjectSecurity.c)
 */

__int64 __fastcall PspCheckJobAccessState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-10h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+78h] [rbp+18h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+20h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+28h] BYREF

  GrantedAccess = 0;
  v2 = 0;
  SecurityDescriptor = 0LL;
  v3 = *(_DWORD *)(a2 + 1120);
  MemoryAllocated = 0;
  AccessStatus = 0;
  if ( (v3 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
      return 0LL;
    AccessStatus = ObpGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated, 0);
    v2 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
      SeAccessCheck(
        SecurityDescriptor,
        (PSECURITY_SUBJECT_CONTEXT)(a1 + 8),
        0,
        0x200u,
        0,
        0LL,
        (PGENERIC_MAPPING)((char *)PsProcessType + 76),
        1,
        &GrantedAccess,
        &AccessStatus);
      ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
      return (unsigned int)AccessStatus;
    }
  }
  return v2;
}
