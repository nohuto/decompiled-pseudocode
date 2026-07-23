/*
 * XREFs of _RtlSetUserCallbackExceptionFilter@4 @ 0x4B2EC460
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

int __thiscall RtlSetUserCallbackExceptionFilter(ULONG *this, int a2)
{
  PULONG v2; // eax
  int result; // eax
  int v4; // eax
  ULONG *ProcessInformation; // [esp+0h] [ebp-4h] BYREF

  ProcessInformation = this;
  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  result = __ROR4__(a2 ^ (unsigned int)v2, (unsigned __int8)v2 & 0x1F);
  RtlpUserCallbackExceptionFilter = result;
  return result;
}
