/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x1407A7AD0
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A6456C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x1403BF914 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x1407A7B10 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1407A8008 (AdtpInitializeDriveLetters.c)
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
