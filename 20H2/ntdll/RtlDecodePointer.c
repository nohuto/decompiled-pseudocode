/*
 * XREFs of RtlDecodePointer @ 0x180069F20
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D3D0 (NtQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlDecodePointer(__int64 a1)
{
  unsigned int v1; // edx
  NTSTATUS v4; // eax
  int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus((unsigned int)v4);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return __ROR8__(a1, 64 - (v1 & 0x3F)) ^ v1;
}
