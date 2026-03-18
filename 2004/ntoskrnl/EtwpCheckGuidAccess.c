/*
 * XREFs of EtwpCheckGuidAccess @ 0x1406365C4
 * Callers:
 *     EtwpCheckNotificationAccess @ 0x140636558 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140636FA0 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x14077F2A8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14093A148 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x14093A588 (EtwpLogFileNameRundown.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x14093DF30 (EtwpCheckCurrentUserGuidAccess.c)
 * Callees:
 *     EtwpGetSecurityDescriptorByGuid @ 0x14066ABD4 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x14066B088 (EtwpFreeSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x14066BB48 (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(__int64 a1, ACCESS_MASK a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &SecurityDescriptor);
  LODWORD(a3) = EtwpAccessCheck(SecurityDescriptor, a2, a3);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return (unsigned int)a3;
}
