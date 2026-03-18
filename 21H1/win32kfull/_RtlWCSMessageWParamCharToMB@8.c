/*
 * XREFs of _RtlWCSMessageWParamCharToMB@8 @ 0xC5322
 * Callers:
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _fnHkINLPMSG@28 @ 0x6B870 (_fnHkINLPMSG@28.c)
 *     _SfnINWPARAMCHAR@32 @ 0x1904C6 (_SfnINWPARAMCHAR@32.c)
 *     _SfnINWPARAMDBCSCHAR@32 @ 0x19072C (_SfnINWPARAMDBCSCHAR@32.c)
 * Callees:
 *     _ConvertToAndFromWideChar@24 @ 0xDFDA8 (_ConvertToAndFromWideChar@24.c)
 *     _THREAD_CODEPAGE@0 @ 0x192B9B (_THREAD_CODEPAGE@0.c)
 */

int __fastcall RtlWCSMessageWParamCharToMB(unsigned int a1, int a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned __int16 v6; // ax
  int v7; // ecx
  CHAR MultiByteString[4]; // [esp+Ch] [ebp-4h] BYREF

  if ( a1 > 0x107 )
  {
    v4 = a1 - 271;
    if ( v4 )
    {
      v5 = v4 - 17;
      if ( v5 )
      {
        if ( v5 != 358 )
          return 1;
      }
    }
  }
  else if ( a1 < 0x106 && a1 != 47 && a1 != 204 && (a1 <= 0x101 || a1 > 0x103) )
  {
    return 1;
  }
  v6 = THREAD_CODEPAGE();
  *(_DWORD *)MultiByteString = 0;
  if ( v6 != _NlsAnsiCodePage && v6 )
  {
    if ( ConvertToAndFromWideChar(v6, a2, 2 * ((*_gpsi & 2) == 0) + 2, MultiByteString, 4, 0) )
      goto LABEL_15;
LABEL_19:
    *(_DWORD *)a2 = 0;
    return 1;
  }
  if ( RtlUnicodeToMultiByteN(MultiByteString, 4u, 0, (PCWCH)a2, 2 * ((*_gpsi & 2) == 0) + 2) < 0 )
    goto LABEL_19;
LABEL_15:
  if ( (*_gpsi & 2) != 0 )
  {
    if ( (*(_WORD *)MultiByteString & 0xFF00) != 0 )
      v7 = (unsigned __int8)MultiByteString[1] | (((unsigned __int8)MultiByteString[0] | (*(unsigned __int16 *)(a2 + 2) << 8)) << 8);
    else
      v7 = (unsigned __int8)MultiByteString[0];
    *(_DWORD *)a2 = v7;
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)MultiByteString;
  }
  return 1;
}
