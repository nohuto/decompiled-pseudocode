/*
 * XREFs of RtlpNlsGetNameIndex @ 0x18003BB38
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18003BA90 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x18003C490 (RtlGetParentLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003D0E0 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800FD030 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlpNlsCompareLocaleNames @ 0x18003BBD8 (RtlpNlsCompareLocaleNames.c)
 */

__int64 __fastcall RtlpNlsGetNameIndex(__int64 a1)
{
  int v1; // ebx
  int v3; // r11d
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdi
  int v7; // eax
  int v8; // r11d
  int v9; // ecx

  v1 = 0;
  v3 = *(unsigned __int16 *)(pTblPtrs + 2) - 1;
  if ( v3 < 0 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(pTblPtrs + 24);
  v5 = *(_QWORD *)(pTblPtrs + 32);
  while ( 1 )
  {
    v6 = (v3 + v1) / 2;
    v7 = RtlpNlsCompareLocaleNames(a1, v5 + 2LL * *(unsigned __int16 *)(v4 + 8 * v6) + 2);
    if ( !v7 )
      break;
    v9 = v6 - 1;
    if ( v7 >= 0 )
      v9 = v8;
    v3 = v9;
    if ( v7 >= 0 )
      v1 = v6 + 1;
    if ( v1 > v9 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v6;
}
