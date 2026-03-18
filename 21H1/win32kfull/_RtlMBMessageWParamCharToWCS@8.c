/*
 * XREFs of _RtlMBMessageWParamCharToWCS@8 @ 0x1B72F5
 * Callers:
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _fnHkINLPMSG@28 @ 0x6B870 (_fnHkINLPMSG@28.c)
 *     _NtUserfnINWPARAMCHAR@28 @ 0x16CC0D (_NtUserfnINWPARAMCHAR@28.c)
 * Callees:
 *     _ConvertToAndFromWideChar@24 @ 0xDFDA8 (_ConvertToAndFromWideChar@24.c)
 *     _THREAD_CODEPAGE@0 @ 0x192B9B (_THREAD_CODEPAGE@0.c)
 */

int __fastcall RtlMBMessageWParamCharToWCS(unsigned int a1, CHAR *a2)
{
  unsigned int v4; // ebx
  int v5; // edx
  unsigned int v6; // esi
  unsigned int v7; // esi
  unsigned int v8; // esi
  unsigned int v9; // esi
  unsigned int v10; // esi
  int v11; // ecx
  unsigned int v12; // eax
  BOOL v14; // [esp+10h] [ebp-8h]
  WCHAR UnicodeString[2]; // [esp+14h] [ebp-4h] BYREF

  *(_DWORD *)UnicodeString = 0;
  v14 = 0;
  v4 = *(unsigned __int16 *)a2;
  v5 = (unsigned __int16)THREAD_CODEPAGE();
  if ( a1 > 0x107 )
  {
    v9 = a1 - 271;
    if ( v9 )
    {
      v10 = v9 - 17;
      if ( !v10 )
        goto LABEL_16;
      if ( v10 != 358 )
        return 1;
    }
    goto LABEL_12;
  }
  if ( a1 >= 0x106 )
    goto LABEL_16;
  v6 = a1 - 47;
  if ( !v6 )
    goto LABEL_16;
  v7 = v6 - 157;
  if ( !v7 )
    goto LABEL_16;
  v8 = v7 - 54;
  if ( !v8 )
  {
    v14 = (*_gpsi & 2) != 0 && *(int *)a2 < 0;
LABEL_12:
    if ( (*_gpsi & 2) != 0 )
    {
      v11 = (unsigned __int8)v4;
      if ( (v4 & 0xFF00) != 0 )
        v11 = (v4 >> 8) | ((unsigned __int8)v4 << 8);
      *(_DWORD *)a2 = v11;
    }
    goto LABEL_16;
  }
  if ( v8 != 1 )
    return 1;
LABEL_16:
  if ( (_WORD)v5 == _NlsAnsiCodePage || !(_WORD)v5 )
  {
    if ( RtlMultiByteToUnicodeN(UnicodeString, 4u, 0, a2, 2u) >= 0 )
      goto LABEL_19;
  }
  else if ( ConvertToAndFromWideChar(v5, UnicodeString, 4u, a2, 2u, 1) )
  {
LABEL_19:
    v12 = *(_DWORD *)UnicodeString;
    if ( v14 )
      v12 = *(_DWORD *)UnicodeString | 0x80000000;
    *(_DWORD *)a2 = v12;
    return 1;
  }
  return 0;
}
