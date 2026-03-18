/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x1407B8B70
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A6B21C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x1403C2F44 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x1407B8BB0 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1407B90A8 (AdtpInitializeDriveLetters.c)
 */

__int64 AdtpInitializeAuditingCommon()
{
  __int64 result; // rax
  unsigned int v1; // ebx

  AdtpNullSid = 257;
  AdtpRegisteredWithEtw = 1;
  result = AdtpInitializeDriveLetters();
  if ( (int)result >= 0 )
  {
    result = AdtpObjsInitialize();
    v1 = result;
    if ( (int)result >= 0 )
    {
      AdtpDbInitializePrivilegeObject();
      return v1;
    }
  }
  return result;
}
