/*
 * XREFs of _MappingBGRF @ 0xFAEEE
 * Callers:
 *     _BltDIB_CY @ 0x1C67B5 (_BltDIB_CY.c)
 *     _ExpandDIB_CY @ 0x1C7594 (_ExpandDIB_CY.c)
 *     _ExpandDIB_CY_ExpCX @ 0x1C7F6C (_ExpandDIB_CY_ExpCX.c)
 *     _FastExpAA_CY @ 0x1C8D85 (_FastExpAA_CY.c)
 *     _GrayExpandDIB_CY @ 0x1C9547 (_GrayExpandDIB_CY.c)
 *     _GrayExpandDIB_CY_ExpCX @ 0x1C9C3C (_GrayExpandDIB_CY_ExpCX.c)
 *     _GrayShrinkDIB_CY @ 0x1CA729 (_GrayShrinkDIB_CY.c)
 *     _RepDIB_CY @ 0x1CACEC (_RepDIB_CY.c)
 *     _ShrinkDIB_CY @ 0x1CB175 (_ShrinkDIB_CY.c)
 *     _ShrinkDIB_CY_SrkCX @ 0x1CB85E (_ShrinkDIB_CY_SrkCX.c)
 *     _SkipDIB_CY @ 0x1CC159 (_SkipDIB_CY.c)
 *     _TileDIB_CY @ 0x1CC3FC (_TileDIB_CY.c)
 * Callees:
 *     <none>
 */

char __fastcall MappingBGRF(unsigned __int8 *a1, unsigned int a2, int a3, unsigned __int8 *a4)
{
  int v7; // ebp
  unsigned __int8 *v8; // ebx
  unsigned int v9; // edx
  _BYTE *v10; // edi
  char result; // al

LABEL_1:
  v7 = *a4;
  v8 = a4 + 1;
  while ( 1 )
  {
    v9 = (unsigned __int16)BGR555Idx[a1[1]] - v7;
    LOBYTE(v9) = 0;
    v9 >>= 3;
    BYTE1(v9) |= 4 * ((unsigned __int16)(BGR555Idx[*a1] - v7) >> 8);
    LOBYTE(v9) = ((unsigned __int16)(BGR555Idx[a1[2]] - v7) >> 8) | v9;
    v9 *= 3;
    *(_WORD *)a1 = *(_WORD *)(a3 + v9);
    v10 = a1 + 2;
    result = *(_BYTE *)(a3 + v9 + 2);
    *v10 = result;
    a1 = v10 + 2;
    if ( (unsigned int)a1 >= a2 )
      return result;
    v7 = *v8++;
    if ( !v7 )
    {
      a4 = v8 - 66;
      goto LABEL_1;
    }
  }
}
