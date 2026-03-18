/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x14084CCD8
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140B22004 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x1403D064C (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x14084CD18 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x14084D204 (AdtpInitializeDriveLetters.c)
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
