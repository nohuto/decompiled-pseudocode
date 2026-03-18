/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x14093DF48
 * Callers:
 *     EtwpNotifyGuid @ 0x1406329B8 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x140636ECC (EtwpIsRegEntryAllowed.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093BBB0 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     ObReleaseObjectSecurity @ 0x140668D70 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140669160 (ObpGetObjectSecurity.c)
 *     EtwpAccessCheck @ 0x14066BB48 (EtwpAccessCheck.c)
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
