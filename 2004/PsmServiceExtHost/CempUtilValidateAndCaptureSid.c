/*
 * XREFs of CempUtilValidateAndCaptureSid @ 0x180002B84
 * Callers:
 *     ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x18000295C (-HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z.c)
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x180079C30 (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 * Callees:
 *     CempUtilValidateSid @ 0x18000E330 (CempUtilValidateSid.c)
 */

NTSTATUS __fastcall CempUtilValidateAndCaptureSid(PSID SourceSid, __int64 a2, void *a3)
{
  if ( (int)CempUtilValidateSid(SourceSid) < 0 )
    return -1073741585;
  else
    return RtlCopySid(0x44u, a3, SourceSid);
}
