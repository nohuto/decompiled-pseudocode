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

BOOL __stdcall _FinalExceptionHandler(EXCEPTION_RECORD *a1, _EXCEPTION_REGISTRATION_RECORD *a2, _CONTEXT *a3, int a4)
{
  int v4; // esi
  PULONG v5; // edx
  int v6; // edi
  int v7; // eax
  int (__thiscall *v8)(_DWORD, _EXCEPTION_POINTERS *); // edi
  LONG v9; // eax
  _EXCEPTION_POINTERS ExceptionPointers; // [esp+4h] [ebp-Ch] BYREF
  ULONG *ProcessInformation; // [esp+Ch] [ebp-4h] BYREF

  v4 = 1;
  if ( NtCurrentTeb()->NtTib.ExceptionList == a2 )
  {
    v5 = `RtlpGetCookieValue'::`2'::CookieValue;
    ExceptionPointers.ExceptionRecord = a1;
    ExceptionPointers.ContextRecord = a3;
    v6 = RtlpUnhandledExceptionFilter;
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      v7 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
      if ( v7 < 0 )
        RtlRaiseStatus(v7);
      v5 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v8 = (int (__thiscall *)(_DWORD, _EXCEPTION_POINTERS *))((unsigned int)v5 ^ __ROR4__(
                                                                                  v6,
                                                                                  32 - ((unsigned __int8)v5 & 0x1F)));
    if ( v8 )
      v9 = v8(v8, &ExceptionPointers);
    else
      v9 = RtlUnhandledExceptionFilter2(&ExceptionPointers, (ULONG)&dword_4B2850A4);
    return v9 != -1;
  }
  return v4;
}
