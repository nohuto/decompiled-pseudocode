/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x1409414D8
 * Callers:
 *     EtwpNotifyGuid @ 0x1406E1804 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x1406E3F1C (EtwpIsRegEntryAllowed.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F1B0 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     EtwpAccessCheck @ 0x140643B58 (EtwpAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x14065F410 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x14065F800 (ObpGetObjectSecurity.c)
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
