/*
 * XREFs of _RtlAnsiCharToUnicodeChar@4 @ 0x4B2E1DF0
 * Callers:
 *     _toupper @ 0x4B2FA560 (_toupper.c)
 *     __mbstrlen @ 0x4B2FE132 (__mbstrlen.c)
 *     _mbtowc @ 0x4B2FEE55 (_mbtowc.c)
 *     __safecrt_mbtowc @ 0x4B3011FE (__safecrt_mbtowc.c)
 * Callees:
 *     _RtlMultiByteToUnicodeN@20 @ 0x4B2E1E50 (_RtlMultiByteToUnicodeN@20.c)
 */

__int16 __stdcall RtlAnsiCharToUnicodeChar(unsigned __int8 **a1)
{
  __int16 v1; // si
  unsigned __int8 v2; // al
  int v3; // ebx
  int v4; // ebx
  int v6; // [esp-4h] [ebp-14h]
  __int16 v7; // [esp+Ch] [ebp-4h] BYREF

  v1 = 32;
  v7 = 32;
  v2 = **a1;
  if ( !NlsActiveCodePageIsUTF8 )
  {
    v3 = NlsLeadByteInfoTable[v2] != 0;
LABEL_3:
    v4 = v3 + 1;
    goto LABEL_4;
  }
  if ( v2 >= 0xC0u )
  {
    if ( v2 >= 0xE0u )
    {
      if ( v2 >= 0xF0u )
      {
        v3 = v2 < 0xF8u ? 3 : 0;
        goto LABEL_3;
      }
      v6 = 3;
    }
    else
    {
      v6 = 2;
    }
    v4 = v6;
  }
  else
  {
    v4 = 1;
  }
LABEL_4:
  if ( (int)RtlMultiByteToUnicodeN(&v7, 2, 0, *a1, v4) >= 0 )
    v1 = v7;
  *a1 += v4;
  return v1;
}
