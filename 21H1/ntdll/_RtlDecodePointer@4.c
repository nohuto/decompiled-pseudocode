/*
 * XREFs of _RtlDecodePointer@4 @ 0x4B2E4D40
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

PVOID __cdecl RtlDecodePointer(PVOID Ptr)
{
  PULONG v1; // edx
  int v3; // eax
  ULONG *ProcessInformation; // [esp+0h] [ebp-4h] BYREF

  v1 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v3 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
    if ( v3 < 0 )
      RtlRaiseStatus(v3);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return (PVOID)((unsigned int)v1 ^ __ROR4__(Ptr, 32 - ((unsigned __int8)v1 & 0x1F)));
}
