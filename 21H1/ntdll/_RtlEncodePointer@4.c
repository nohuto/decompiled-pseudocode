/*
 * XREFs of _RtlEncodePointer@4 @ 0x4B2E5700
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

PVOID __cdecl RtlEncodePointer(PVOID Ptr)
{
  PULONG v1; // eax
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
  return (PVOID)__ROR4__((unsigned int)Ptr ^ (unsigned int)v1, (unsigned __int8)v1 & 0x1F);
}
