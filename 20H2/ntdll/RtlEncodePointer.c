/*
 * XREFs of RtlEncodePointer @ 0x180071F40
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D3D0 (NtQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 */

PVOID __cdecl RtlEncodePointer(PVOID Ptr)
{
  __int64 v1; // rax
  int v4; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return (PVOID)__ROR8__((unsigned __int64)Ptr ^ v1, v1 & 0x3F);
}
