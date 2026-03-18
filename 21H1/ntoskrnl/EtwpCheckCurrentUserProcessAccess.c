/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x14093CCCC
 * Callers:
 *     EtwpNotifyGuid @ 0x14067D410 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x14067F748 (EtwpIsRegEntryAllowed.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093A910 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1405F4798 (EtwpAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x140613A90 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140613E80 (ObpGetObjectSecurity.c)
 */

__int64 __fastcall EtwpCheckCurrentUserProcessAccess(__int64 a1)
{
  unsigned int v1; // ebx
  BOOLEAN MemoryAllocated; // [rsp+38h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+18h] BYREF

  SecurityDescriptor = 0LL;
  MemoryAllocated = 0;
  ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, 0);
  v1 = EtwpAccessCheck(SecurityDescriptor, 0x1FFFFFu, 0LL);
  ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
  return v1;
}
