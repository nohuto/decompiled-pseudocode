/*
 * XREFs of CmpHashCompressedComponent @ 0x14074FE44
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140715B7C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074FCB0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpPartialPromoteSubkeys @ 0x14087BC9C (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     NLS_UPCASE @ 0x14025C2B0 (NLS_UPCASE.c)
 */

__int64 __fastcall CmpHashCompressedComponent(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r11d
  unsigned __int8 *i; // r10
  unsigned __int16 v5; // ax

  v2 = 0;
  v3 = a2;
  for ( i = a1; v3; --v3 )
  {
    v5 = *i;
    if ( (unsigned __int8)v5 >= 0x61u )
    {
      if ( (unsigned __int8)v5 <= 0x7Au )
        v5 -= 32;
      else
        v5 = NLS_UPCASE(*i);
    }
    ++i;
    v2 = v5 + 37 * v2;
  }
  return v2;
}
