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
  PULONG v2; // edx
  int v3; // esi
  int v4; // eax
  int (__thiscall *v5)(_DWORD, _DWORD *); // esi
  BOOL result; // eax
  _DWORD v7[2]; // [esp+4h] [ebp-Ch] BYREF
  ULONG *ProcessInformation; // [esp+Ch] [ebp-4h] BYREF

  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v3 = RtlpUserCallbackExceptionFilter;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v5 = (int (__thiscall *)(_DWORD, _DWORD *))((unsigned int)v2 ^ __ROR4__(v3, 32 - ((unsigned __int8)v2 & 0x1F)));
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
