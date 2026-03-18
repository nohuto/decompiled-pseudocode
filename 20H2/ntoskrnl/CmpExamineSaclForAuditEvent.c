/*
 * XREFs of CmpExamineSaclForAuditEvent @ 0x140874434
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1406C4C5C (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140652650 (RtlGetSaclSecurityDescriptor.c)
 *     CmpEffectiveTokenForSubject @ 0x1406FDF40 (CmpEffectiveTokenForSubject.c)
 *     SeExamineSacl @ 0x140923C50 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140927248 (SeExamineGlobalSacl.c)
 */

__int64 __fastcall CmpExamineSaclForAuditEvent(void *a1, __int64 *a2, _BYTE *a3)
{
  NTSTATUS SaclSecurityDescriptor; // ebx
  void *v6; // rax
  void *v7; // rax
  BOOLEAN SaclPresent; // [rsp+40h] [rbp-20h] BYREF
  BOOLEAN SaclDefaulted[7]; // [rsp+41h] [rbp-1Fh] BYREF
  PACL Sacl; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  BOOLEAN GenerateAudit; // [rsp+90h] [rbp+30h] BYREF
  BOOLEAN GenerateAlarm; // [rsp+98h] [rbp+38h] BYREF

  Sacl = 0LL;
  *a3 = 0;
  GenerateAudit = 0;
  GenerateAlarm = 0;
  SaclPresent = 0;
  DestinationString = 0LL;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(a1, &SaclPresent, &Sacl, SaclDefaulted);
  if ( SaclSecurityDescriptor >= 0 )
  {
    if ( SaclPresent )
    {
      v6 = (void *)CmpEffectiveTokenForSubject(a2, 0LL);
      SeExamineSacl(Sacl, Sacl, v6, 0xF003Fu, 1u, &GenerateAudit, &GenerateAlarm);
    }
    RtlInitUnicodeString(&DestinationString, L"Key");
    v7 = (void *)CmpEffectiveTokenForSubject(a2, 0LL);
    SeExamineGlobalSacl(&DestinationString, Sacl, v7, 0xF003Fu, 1u, &GenerateAudit, &GenerateAlarm);
    if ( GenerateAudit || GenerateAlarm )
      *a3 = 1;
  }
  return (unsigned int)SaclSecurityDescriptor;
}
