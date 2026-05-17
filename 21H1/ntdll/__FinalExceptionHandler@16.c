/*
 * XREFs of __FinalExceptionHandler@16 @ 0x4B3666F1
 * Callers:
 *     FinalExceptionHandlerPad63 @ 0x4B30892F (FinalExceptionHandlerPad63.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _RtlUnhandledExceptionFilter2@8 @ 0x4B3686E0 (_RtlUnhandledExceptionFilter2@8.c)
 */

BOOL __stdcall _FinalExceptionHandler(int a1, _EXCEPTION_REGISTRATION_RECORD *a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // edi
  int InformationProcess; // eax
  int (__thiscall *v8)(_DWORD, _DWORD *); // edi
  int v9; // eax
  _DWORD v11[2]; // [esp+4h] [ebp-Ch] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v4 = 1;
  if ( NtCurrentTeb()->NtTib.ExceptionList == a2 )
  {
    v5 = `RtlpGetCookieValue'::`2'::CookieValue;
    v11[0] = a1;
    v11[1] = a3;
    v6 = RtlpUnhandledExceptionFilter;
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      InformationProcess = ZwQueryInformationProcess(-1, 36, (int)&v12, 4, 0);
      if ( InformationProcess < 0 )
        RtlRaiseStatus(InformationProcess);
      v5 = v12;
      `RtlpGetCookieValue'::`2'::CookieValue = v12;
    }
    v8 = (int (__thiscall *)(_DWORD, _DWORD *))(v5 ^ __ROR4__(v6, 32 - (v5 & 0x1F)));
    if ( v8 )
      v9 = v8(v8, v11);
    else
      v9 = RtlUnhandledExceptionFilter2(v11, &dword_4B2850A4);
    return v9 != -1;
  }
  return v4;
}
