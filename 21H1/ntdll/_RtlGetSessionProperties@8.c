/*
 * XREFs of _RtlGetSessionProperties@8 @ 0x4B346440
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _ZwQueryInformationJobObject@20 @ 0x4B2F3E20 (_ZwQueryInformationJobObject@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __cdecl RtlGetSessionProperties(ULONG SessionId, PULONG SharedUserSessionId)
{
  NTSTATUS v2; // esi
  _BYTE *SharedData; // ecx
  _BYTE JobObjectInformation[588]; // [esp+10h] [ebp-250h] BYREF

  if ( SessionId == -1 || !SharedUserSessionId )
    return -1073741811;
  v2 = 0;
  *SharedUserSessionId = 0;
  if ( RtlGetCurrentServiceSessionId() )
  {
    SharedData = NtCurrentPeb()->SharedData;
  }
  else
  {
    ZwQueryInformationJobObject(0, JobObjectServerSiloUserSharedData, JobObjectInformation, 0x248u, 0);
    SharedData = JobObjectInformation;
  }
  *SharedUserSessionId = *((_DWORD *)SharedData + 6) == SessionId;
  return v2;
}
