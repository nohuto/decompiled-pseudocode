/*
 * XREFs of _LdrpIsSubstringFound@8 @ 0x4B332FBA
 * Callers:
 *     _LdrpIsVerifierActivationFilterMatched@12 @ 0x4B333042 (_LdrpIsVerifierActivationFilterMatched@12.c)
 * Callees:
 *     _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0 (_RtlCompareUnicodeStrings@20.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __usercall LdrpIsSubstringFound@<eax>(unsigned __int16 *a1@<edx>, unsigned __int16 *a2@<ecx>, int a3@<esi>)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // esi
  const WCHAR *v9; // ecx
  const WCHAR *i; // edi
  SIZE_T v12; // [esp-8h] [ebp-18h]
  BOOLEAN v13; // [esp+0h] [ebp-10h]
  unsigned int v14; // [esp+8h] [ebp-8h]
  const WCHAR *v15; // [esp+Ch] [ebp-4h]

  if ( (ShowSnaps & 5) != 0 )
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrinit.c",
      7087,
      (int)"LdrpIsSubstringFound",
      2,
      "Searching for \"%wZ\" in \"%wZ\"\n",
      a1,
      a2);
  v5 = *a2;
  v6 = *a1;
  if ( (unsigned __int16)v5 < (unsigned __int16)v6 )
    return 0;
  v7 = *((_DWORD *)a1 + 1);
  HIDWORD(v12) = a3;
  v14 = v7;
  v8 = (v5 - v6) >> 1;
  v9 = (const WCHAR *)(v6 >> 1);
  v15 = v9;
  for ( i = (const WCHAR *)(*((_DWORD *)a2 + 1) + 2 * v8); ; --i )
  {
    LODWORD(v12) = 1;
    if ( !RtlCompareUnicodeStrings(i, __PAIR64__(v7, (unsigned int)v9), v9, v12, v13) )
      return 1;
    if ( !v8 )
      break;
    v9 = v15;
    --v8;
    v7 = v14;
  }
  return 0;
}
