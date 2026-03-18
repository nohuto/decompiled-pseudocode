/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x1409EB814
 * Callers:
 *     EtwpNotifyGuid @ 0x1406EF64C (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x140790B38 (EtwpIsRegEntryAllowed.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EBB58 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     ObReleaseObjectSecurityEx @ 0x140722890 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1407248C0 (ObpGetObjectSecurity.c)
 *     EtwpAccessCheck @ 0x140794404 (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckCurrentUserProcessAccess(__int64 a1)
{
  unsigned int v2; // ebx
  char v4; // [rsp+38h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+18h] BYREF

  SecurityDescriptor = 0LL;
  v4 = 0;
  ObpGetObjectSecurity(a1, &SecurityDescriptor, &v4, 0);
  v2 = EtwpAccessCheck(SecurityDescriptor, 0x1FFFFFu, 0LL);
  ObReleaseObjectSecurityEx(SecurityDescriptor, v4, a1);
  return v2;
}
