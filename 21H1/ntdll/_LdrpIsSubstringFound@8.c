/*
 * XREFs of _LdrpIsSubstringFound@8 @ 0x4B332FBA
 * Callers:
 *     _LdrpIsVerifierActivationFilterMatched@12 @ 0x4B333042 (_LdrpIsVerifierActivationFilterMatched@12.c)
 * Callees:
 *     _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0 (_RtlCompareUnicodeStrings@20.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __fastcall LdrpIsSubstringFound(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // edx
  unsigned int v7; // esi
  unsigned int v8; // ecx
  unsigned __int16 *i; // edi
  int v11; // [esp+8h] [ebp-8h]
  unsigned int v12; // [esp+Ch] [ebp-4h]

  if ( (ShowSnaps & 5) != 0 )
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrinit.c",
      7087,
      "LdrpIsSubstringFound",
      2,
      "Searching for \"%wZ\" in \"%wZ\"\n",
      a2,
      a1);
  v4 = *a1;
  v5 = *a2;
  if ( (unsigned __int16)v4 < (unsigned __int16)v5 )
    return 0;
  v6 = *((_DWORD *)a2 + 1);
  v11 = v6;
  v7 = (v4 - v5) >> 1;
  v8 = v5 >> 1;
  v12 = v8;
  for ( i = (unsigned __int16 *)(*((_DWORD *)a1 + 1) + 2 * v7); ; --i )
  {
    if ( !RtlCompareUnicodeStrings(i, v8, v6, v8, 1) )
      return 1;
    if ( !v7 )
      break;
    v8 = v12;
    --v7;
    v6 = v11;
  }
  return 0;
}
