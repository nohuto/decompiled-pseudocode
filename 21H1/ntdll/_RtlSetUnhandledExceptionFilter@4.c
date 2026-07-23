/*
 * XREFs of _RtlSetUnhandledExceptionFilter@4 @ 0x4B2EC0E0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  PULONG v1; // eax
  int v2; // eax
  ULONG *ProcessInformation; // [esp+0h] [ebp-4h] BYREF

  v1 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v2 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
    if ( v2 < 0 )
      RtlRaiseStatus(v2);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  RtlpUnhandledExceptionFilter = __ROR4__(
                                   (unsigned int)UnhandledExceptionFilter ^ (unsigned int)v1,
                                   (unsigned __int8)v1 & 0x1F);
}
