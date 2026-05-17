/*
 * XREFs of _LdrpReportError@12 @ 0x4B2E9F63
 * Callers:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 * Callees:
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 *     _ZwRaiseHardError@24 @ 0x4B2F3FF0 (_ZwRaiseHardError@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitAnsiString@8 @ 0x4B2F4FE0 (_RtlInitAnsiString@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _StringCbPrintfW @ 0x4B334D60 (_StringCbPrintfW.c)
 */

void __fastcall LdrpReportError(UNICODE_STRING *a1, const char *a2, int a3)
{
  UNICODE_STRING *p_DestinationString; // edi
  const char *v4; // eax
  unsigned __int8 v5; // bl
  int v6; // edx
  int v7; // ecx
  bool v8; // zf
  STRING v9; // [esp+10h] [ebp-154h] BYREF
  UNICODE_STRING DestinationString; // [esp+18h] [ebp-14Ch] BYREF
  _BYTE v11[4]; // [esp+20h] [ebp-144h] BYREF
  int v12; // [esp+24h] [ebp-140h]
  int v13; // [esp+28h] [ebp-13Ch]
  int v14; // [esp+2Ch] [ebp-138h]
  UNICODE_STRING v15; // [esp+30h] [ebp-134h] BYREF
  PCSZ SourceString; // [esp+38h] [ebp-12Ch]
  void *v17; // [esp+3Ch] [ebp-128h] BYREF
  UNICODE_STRING *v18; // [esp+40h] [ebp-124h]
  int v19; // [esp+44h] [ebp-120h]
  char v20; // [esp+48h] [ebp-11Ch] BYREF
  wchar_t pszDest[8]; // [esp+14Ch] [ebp-18h] BYREF

  p_DestinationString = a1;
  v4 = a2;
  SourceString = a2;
  if ( a1 )
  {
    v5 = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Unknown");
    v4 = SourceString;
    p_DestinationString = &DestinationString;
    v5 = 0;
  }
  switch ( a3 )
  {
    case -1073741511:
      RtlInitAnsiString(&v9, v4);
      v15.Buffer = (wchar_t *)&v20;
      v15.MaximumLength = 256;
      if ( RtlAnsiStringToUnicodeString(&v15, &v9, 0) < 0 )
        v15.Length = 0;
      v18 = p_DestinationString;
      v17 = &v15;
      v19 = -1073741511;
      SourceString = (PCSZ)(v5 ^ 1);
      v6 = 3;
      v7 = 3;
      v13 = 3;
      v12 = (int)&LdrpLogLevelStateTable[3 * (_DWORD)SourceString];
      v14 = 3;
      if ( ((*(_DWORD *)v12 | 1) & ShowSnaps) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrutil.c",
          883,
          "LdrpReportError",
          SourceString,
          "Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          &v15,
          p_DestinationString,
          -1073741511);
        v7 = v14;
        v6 = v13;
      }
      v8 = (ShowSnaps & *(_DWORD *)(v12 + 4)) == 0;
      break;
    case -1073741515:
      RtlInitUnicodeString(&v15, 0);
      v17 = p_DestinationString;
      v6 = 1;
      v7 = 1;
      goto LABEL_11;
    case -1073741512:
      StringCbPrintfW(pszDest, 0xEu, L"#%d", (unsigned __int16)v4);
      RtlInitUnicodeString(&v15, pszDest);
      v17 = (void *)SourceString;
      v18 = p_DestinationString;
      v12 = v5 ^ 1;
      v6 = 2;
      v7 = 3;
      v19 = -1073741512;
      v13 = (int)&LdrpLogLevelStateTable[3 * v12];
      v14 = 3;
      if ( ((*(_DWORD *)v13 | 1) & ShowSnaps) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrutil.c",
          857,
          "LdrpReportError",
          v12,
          "Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          SourceString,
          p_DestinationString,
          -1073741512);
        v7 = v14;
        v6 = 2;
      }
      v8 = (ShowSnaps & *(_DWORD *)(v13 + 4)) == 0;
      break;
    default:
      RtlInitUnicodeString(&v15, 0);
      v7 = 3;
      v6 = 3;
      goto LABEL_11;
  }
  if ( !v8 )
    __debugbreak();
LABEL_11:
  if ( v5 )
  {
    if ( (int)ZwRaiseHardError(a3, v7, v6, &v17, 1, v11) >= 0 && LdrInitState != 3 )
      ++LdrpFatalHardErrorCount;
    if ( a3 == -1073741511 || a3 == -1073741512 )
      RtlRaiseStatus(a3);
  }
}
