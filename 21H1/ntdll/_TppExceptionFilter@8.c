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

LONG __thiscall TppExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  PULONG v1; // edx
  int v2; // esi
  int v4; // eax
  int (__thiscall *v5)(_DWORD, PEXCEPTION_POINTERS); // esi
  ULONG *ProcessInformation; // [esp+8h] [ebp-4h] BYREF

  v1 = `RtlpGetCookieValue'::`2'::CookieValue;
  v2 = RtlpUnhandledExceptionFilter;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v5 = (int (__thiscall *)(_DWORD, PEXCEPTION_POINTERS))((unsigned int)v1 ^ __ROR4__(
                                                                              v2,
                                                                              32 - ((unsigned __int8)v1 & 0x1F)));
  if ( v5 )
    return v5(v5, ExceptionPointers);
  else
    return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&dword_4B2850A4);
}
