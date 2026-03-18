/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x140943D08
 * Callers:
 *     EtwpNotifyGuid @ 0x1407181E8 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x14071A404 (EtwpIsRegEntryAllowed.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409419E0 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     ObReleaseObjectSecurity @ 0x1405F5670 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405F5A60 (ObpGetObjectSecurity.c)
 *     EtwpAccessCheck @ 0x1405F753C (EtwpAccessCheck.c)
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
