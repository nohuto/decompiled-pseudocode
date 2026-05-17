/*
 * XREFs of _HashStringToDwordCaseInsensitiveLen@8 @ 0x4B33B634
 * Callers:
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 */

int __fastcall HashStringToDwordCaseInsensitiveLen(unsigned __int16 *a1, int a2)
{
  int v2; // edi
  int i; // esi
  unsigned __int16 v5; // ax
  int v7; // [esp+Ch] [ebp-4h]

  v2 = a2;
  v7 = 31415;
  for ( i = 0; v2; --v2 )
  {
    v5 = NLS_UPCASE(*a1++);
    i = v5 + v7 * i;
    v7 *= 27183;
  }
  return i;
}
