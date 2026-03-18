/*
 * XREFs of EtwpCheckGuidAccess @ 0x14067F0D0
 * Callers:
 *     EtwpCheckNotificationAccess @ 0x14067F064 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14067F81C (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x140780EB8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140938EA8 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x1409392E8 (EtwpLogFileNameRundown.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x14093CCB4 (EtwpCheckCurrentUserGuidAccess.c)
 * Callees:
 *     EtwpFreeSecurityDescriptor @ 0x1405F289C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405F28DC (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpAccessCheck @ 0x1405F4798 (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(unsigned int *a1, ACCESS_MASK a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &SecurityDescriptor);
  LODWORD(a3) = EtwpAccessCheck(SecurityDescriptor, a2, a3);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return (unsigned int)a3;
}
