/*
 * XREFs of _RtlpCallUserCallbackExceptionFilter@8 @ 0x4B3665CC
 * Callers:
 *     _KiUserCallbackExceptionHandler@16 @ 0x4B2F4D80 (_KiUserCallbackExceptionHandler@16.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

BOOL __stdcall RtlpCallUserCallbackExceptionFilter(int a1, int a2)
{
  int v2; // edx
  int v3; // esi
  int InformationProcess; // eax
  int (__thiscall *v5)(_DWORD, _DWORD *); // esi
  BOOL result; // eax
  _DWORD v7[2]; // [esp+4h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v3 = RtlpUserCallbackExceptionFilter;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    InformationProcess = ZwQueryInformationProcess(-1, 36, (int)&v8, 4, 0);
    if ( InformationProcess < 0 )
      RtlRaiseStatus(InformationProcess);
    v2 = v8;
    `RtlpGetCookieValue'::`2'::CookieValue = v8;
  }
  v5 = (int (__thiscall *)(_DWORD, _DWORD *))(v2 ^ __ROR4__(v3, 32 - (v2 & 0x1F)));
  result = 1;
  if ( v5 )
  {
    v7[0] = a1;
    v7[1] = a2;
    if ( v5(v5, v7) == -1 )
      return 0;
  }
  return result;
}
