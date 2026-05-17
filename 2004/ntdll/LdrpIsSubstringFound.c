/*
 * XREFs of LdrpIsSubstringFound @ 0x1800D4174
 * Callers:
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D4240 (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180015FF0 (RtlCompareUnicodeStrings.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpIsSubstringFound(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  _WORD *i; // rsi

  v2 = 0;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      7087,
      "LdrpIsSubstringFound",
      2,
      "Searching for \"%wZ\" in \"%wZ\"\n",
      a2,
      a1);
  v5 = *a2;
  if ( *a1 >= (unsigned __int16)v5 )
  {
    v6 = *((_QWORD *)a2 + 1);
    v7 = ((unsigned __int64)*a1 - v5) >> 1;
    v8 = (unsigned __int64)*a2 >> 1;
    for ( i = (_WORD *)(*((_QWORD *)a1 + 1) + 2 * v7); (unsigned int)RtlCompareUnicodeStrings(i, v8, v6, v8, 1); --i )
    {
      if ( !v7 )
        return v2;
      --v7;
    }
    return 1;
  }
  return v2;
}
