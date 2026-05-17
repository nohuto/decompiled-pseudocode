/*
 * XREFs of _TppExceptionFilter@8 @ 0x4B384794
 * Callers:
 *     _TppWorkerpInnerExceptionFilter@12 @ 0x4B385109 (_TppWorkerpInnerExceptionFilter@12.c)
 *     _TppWorkerpOuterExceptionFilter@8 @ 0x4B38516A (_TppWorkerpOuterExceptionFilter@8.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _RtlUnhandledExceptionFilter2@8 @ 0x4B3686E0 (_RtlUnhandledExceptionFilter2@8.c)
 */

int __thiscall TppExceptionFilter(const void **this)
{
  int v1; // edx
  int v2; // esi
  int InformationProcess; // eax
  int (__thiscall *v5)(_DWORD, const void **); // esi
  int v7; // [esp+8h] [ebp-4h] BYREF

  v1 = `RtlpGetCookieValue'::`2'::CookieValue;
  v2 = RtlpUnhandledExceptionFilter;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    InformationProcess = ZwQueryInformationProcess(-1, 36, (int)&v7, 4, 0);
    if ( InformationProcess < 0 )
      RtlRaiseStatus(InformationProcess);
    v1 = v7;
    `RtlpGetCookieValue'::`2'::CookieValue = v7;
  }
  v5 = (int (__thiscall *)(_DWORD, const void **))(v1 ^ __ROR4__(v2, 32 - (v1 & 0x1F)));
  if ( v5 )
    return v5(v5, this);
  else
    return RtlUnhandledExceptionFilter2(this, (int)&dword_4B2850A4);
}
