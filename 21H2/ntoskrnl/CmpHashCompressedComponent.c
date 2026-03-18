/*
 * XREFs of CmpHashCompressedComponent @ 0x14071BC04
 * Callers:
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14065B81C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14071B730 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpPartialPromoteSubkeys @ 0x1409224D4 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpHashCompressedComponent(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r10d
  int v3; // ebx
  unsigned __int8 *i; // r11
  unsigned __int16 v5; // dx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v8; // dx

  v2 = 0;
  v3 = a2;
  for ( i = a1; v3; --v3 )
  {
    v5 = *i;
    if ( (unsigned __int8)v5 >= 0x61u )
    {
      if ( (unsigned __int8)v5 > 0x7Au )
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v5 = NLS_UPCASE(CurrentServerSiloGlobals[154], v8);
      }
      else
      {
        v5 -= 32;
      }
    }
    ++i;
    v2 = v5 + 37 * v2;
  }
  return v2;
}
