/*
 * XREFs of CempUtilValidateSid @ 0x18000E330
 * Callers:
 *     CempUtilValidateAndCaptureSid @ 0x180002B84 (CempUtilValidateAndCaptureSid.c)
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000E05C (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_.c)
 *     ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x180026A00 (-HampAppInfoValidate@@YAJPEBGPEAEKK@Z.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x1800334D0 (RmCoreRpcSrvAcquireResourceSet.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180085314 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempUtilValidateSid(PSID Sid, unsigned int a2)
{
  unsigned int v4; // ebx

  if ( a2 < 0xC )
  {
    return (unsigned int)-1073741584;
  }
  else
  {
    v4 = 0;
    if ( !RtlValidSid(Sid) || RtlLengthSid(Sid) != a2 )
      return (unsigned int)-1073741585;
  }
  return v4;
}
