/*
 * XREFs of _EtwpAddInstanceIdToLogFileName@12 @ 0x4B2F1A0B
 * Callers:
 *     _EtwpFlushUmLogger@16 @ 0x4B2ED94C (_EtwpFlushUmLogger@16.c)
 *     _EtwpInitLoggerContext@20 @ 0x4B2F1733 (_EtwpInitLoggerContext@20.c)
 *     _EtwpUpdateUmLogger@16 @ 0x4B3819CB (_EtwpUpdateUmLogger@16.c)
 * Callees:
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _StringCchCopyW@12 @ 0x4B33B6B7 (_StringCchCopyW@12.c)
 *     _StringCchPrintfW @ 0x4B33B6EC (_StringCchPrintfW.c)
 */

HRESULT __fastcall EtwpAddInstanceIdToLogFileName(int a1, int a2, _UNICODE_STRING *DestinationString)
{
  void *UniqueProcess; // ecx
  wchar_t *v6; // eax
  HRESULT result; // eax
  size_t v8; // [esp-10h] [ebp-820h]
  size_t v9; // [esp+0h] [ebp-810h]
  const wchar_t *v10; // [esp+8h] [ebp-808h]
  wchar_t pszDest[1024]; // [esp+Ch] [ebp-804h] BYREF

  RtlInitUnicodeString(DestinationString, 0);
  UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
  v6 = *(wchar_t **)(a1 + 132);
  *(_DWORD *)(a1 + 100) = UniqueProcess;
  if ( a2 != 1 )
  {
    if ( *(_WORD *)(a1 + 130) > 0x800u )
    {
      result = StringCchCopyW(v6, v9, v10);
    }
    else
    {
      HIDWORD(v8) = L"%s_%d";
      LODWORD(v8) = 1024;
      result = StringCchPrintfW(pszDest, v8, v6, UniqueProcess);
    }
    if ( result < 0 )
      return (unsigned __int16)result;
    v6 = pszDest;
  }
  if ( RtlCreateUnicodeString(DestinationString, (PCWSTR)v6) )
    return 0;
  else
    return 8;
}
