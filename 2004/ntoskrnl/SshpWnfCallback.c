/*
 * XREFs of SshpWnfCallback @ 0x1408F8790
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     SSHSupportQueryInterruptTime @ 0x14057B8EC (SSHSupportQueryInterruptTime.c)
 *     ExQueryWnfStateData @ 0x1407090A0 (ExQueryWnfStateData.c)
 *     SshpQueryRegistryValues @ 0x14077ED9C (SshpQueryRegistryValues.c)
 *     SshpSendSessionData @ 0x1408F78E8 (SshpSendSessionData.c)
 */

__int64 __fastcall SshpWnfCallback(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  unsigned int v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( *a2 == WNF_PO_UMPO_SCENARIO_CHANGE )
  {
    v4 = 24;
    v2 = ExQueryWnfStateData(a1, &v5, &v6, &v4);
    if ( v2 >= 0 )
    {
      SshpSendSessionData();
      SshpSessionId = v7;
      SshpSessionGuid = v6;
      SshpSessionStartTime = SSHSupportQueryInterruptTime();
      SshpQueryRegistryValues();
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}
