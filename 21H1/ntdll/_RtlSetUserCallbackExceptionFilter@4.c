/*
 * XREFs of _RtlSetUserCallbackExceptionFilter@4 @ 0x4B2EC460
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

int __thiscall RtlSetUserCallbackExceptionFilter(void *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = (int)this;
  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = ZwQueryInformationProcess(-1, 36, &v5, 4, 0);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v2 = v5;
    `RtlpGetCookieValue'::`2'::CookieValue = v5;
  }
  result = __ROR4__(a2 ^ v2, v2 & 0x1F);
  RtlpUserCallbackExceptionFilter = result;
  return result;
}
