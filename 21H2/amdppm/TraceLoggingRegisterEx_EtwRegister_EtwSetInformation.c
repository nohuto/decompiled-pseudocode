/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0021658
 * Callers:
 *     ProcLibRegisterEtw @ 0x1C0038228 (ProcLibRegisterEtw.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 */

__int64 TraceLoggingRegisterEx_EtwRegister_EtwSetInformation()
{
  GUID v0; // xmm0
  unsigned int v1; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v0 = (GUID)*((_OWORD *)EventInformation - 1);
  xmmword_1C0014090 = 0LL;
  ProviderId = v0;
  v1 = EtwRegister(&ProviderId, tlgEnableCallback, &dword_1C0014068, &RegHandle);
  if ( !v1 )
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  return v1;
}
