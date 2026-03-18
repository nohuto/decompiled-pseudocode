/*
 * XREFs of _GetFixupScan @ 0x1C5128
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
 *     _MappingBGR @ 0xFAE72 (_MappingBGR.c)
 *     _FixupColorScan @ 0x1C4844 (_FixupColorScan.c)
 *     _FixupGrayScan @ 0x1C4E1F (_FixupGrayScan.c)
 */

void *__fastcall GetFixupScan(int a1, void *a2)
{
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // eax
  char *v7; // edx
  char v8; // cl
  int v9; // eax
  int v10; // eax

  v4 = *(_DWORD *)a1;
  if ( (v4 & 0x40) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
      FixupGrayScan((unsigned int *)a1, a2);
    else
      FixupColorScan((unsigned int *)a1, a2);
  }
  else
  {
    if ( (v4 & 0x20) != 0 )
    {
      v5 = ++*(_DWORD *)(a1 + 36);
      v6 = *(_DWORD *)(a1 + 24);
      if ( v5 > v6 )
      {
        *(_DWORD *)(a1 + 36) = v6;
        v5 = v6;
      }
      *(_BYTE *)(a1 + 8) |= 2u;
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 44) * (v6 - v5);
      *(_DWORD *)a1 = v4 & 0xFFFFFFDF;
    }
    v7 = (char *)(a1 + 8);
    if ( a2 )
    {
      (*(void (__cdecl **)(int, void *))(a1 + 16))(a1 + 8, a2);
    }
    else
    {
      v8 = *v7;
      if ( (*v7 & 2) != 0 )
      {
        v9 = *(_DWORD *)(a1 + 36);
        if ( v9 && (v10 = v9 - 1, (*(_DWORD *)(a1 + 36) = v10) != 0) )
        {
          *(_DWORD *)(a1 + 28) += *(_DWORD *)(a1 + 44);
        }
        else if ( (v8 & 1) != 0 )
        {
          *(_DWORD *)(a1 + 28) = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 24);
        }
        else
        {
          *v7 = v8 & 0xFD;
        }
      }
    }
  }
  if ( (*(_BYTE *)a1 & 8) != 0 )
  {
    if ( a2 )
    {
      MappingBGR((unsigned __int8 *)a2, *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 236), *(unsigned __int8 **)(a1 + 272));
      *(_DWORD *)(a1 + 272) += *(_DWORD *)(a1 + 284);
      if ( *(_DWORD *)(a1 + 272) == *(_DWORD *)(a1 + 276) )
        *(_DWORD *)(a1 + 272) = *(_DWORD *)(a1 + 280);
    }
  }
  return a2;
}
