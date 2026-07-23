/*
 * XREFs of _LdrpIsVerifierActivationFilterMatched@12 @ 0x4B333042
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _RtlQueryApplicationKeyOption@32 @ 0x4B2A6C1D (_RtlQueryApplicationKeyOption@32.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpIsSubstringFound@8 @ 0x4B332FBA (_LdrpIsSubstringFound@8.c)
 */

int __fastcall LdrpIsVerifierActivationFilterMatched(int a1, void *a2, HANDLE a3)
{
  int v3; // edi
  const WCHAR *v4; // esi
  const WCHAR *v5; // ebx
  WCHAR v6; // ax
  WCHAR v7; // cx
  const WCHAR *v8; // edx
  const char *v9; // eax
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-224h] BYREF
  int v12; // [esp+18h] [ebp-21Ch]
  const WCHAR *v13; // [esp+1Ch] [ebp-218h]
  PCWSTR SourceString; // [esp+20h] [ebp-214h]
  int v15; // [esp+24h] [ebp-210h]
  ULONG Value[129]; // [esp+28h] [ebp-20Ch] BYREF

  v12 = a1;
  v3 = 0;
  LOWORD(Value[0]) = 0;
  if ( RtlQueryApplicationKeyOption(a2, a3, L"VerifierActivationFilter", 1, Value, 512, 0, 0) < 0 )
    return 1;
  if ( (ShowSnaps & 5) != 0 )
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrinit.c",
      7173,
      (int)"LdrpIsVerifierActivationFilterMatched",
      2,
      "VerifierActivationFilter found, contents = \"%ws\"\n",
      Value);
  if ( LOWORD(Value[0]) == 42 || !LOWORD(Value[0]) )
  {
    v3 = 1;
  }
  else
  {
    v4 = (const WCHAR *)Value;
    v15 = 9;
    v5 = (const WCHAR *)Value + wcslen((const unsigned __int16 *)Value);
    v13 = v5;
    do
    {
      if ( v4 >= v5 )
        break;
      while ( 1 )
      {
        v6 = *v4;
        v7 = *v4;
        if ( *v4 != 32 && v6 != (_WORD)v15 )
          break;
        ++v4;
      }
      SourceString = v4;
      if ( !v6 )
        break;
      do
      {
        if ( v7 == 32 )
          break;
        if ( v7 == 9 )
          break;
        v7 = *++v4;
      }
      while ( *v4 );
      v8 = SourceString;
      v5 = v13;
      if ( SourceString == v4 )
        break;
      *v4 = 0;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( LdrpIsSubstringFound(&DestinationString.Length, (unsigned __int16 *)(*(_DWORD *)(v12 + 16) + 64), (int)v4) )
        v3 = 1;
      ++v4;
    }
    while ( !v3 );
  }
  if ( (ShowSnaps & 5) != 0 )
  {
    v9 = (const char *)&dword_4B2850A4;
    if ( !v3 )
      v9 = "not ";
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrinit.c",
      7227,
      (int)"LdrpIsVerifierActivationFilterMatched",
      2,
      "VerifierActivationFilter match %sfound.\n",
      v9);
  }
  return v3;
}
