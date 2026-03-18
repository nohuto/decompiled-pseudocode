/*
 * XREFs of _HT_CreateHalftoneBrush@20 @ 0x1BA502
 * Callers:
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     _HT_CreateStandardMonoPattern@8 @ 0x1BA618 (_HT_CreateStandardMonoPattern@8.c)
 * Callees:
 *     _CreateHalftoneBrushPat @ 0xF9AD2 (_CreateHalftoneBrushPat.c)
 *     _ComputeBytesPerScanLine @ 0x1BB37B (_ComputeBytesPerScanLine.c)
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 */

int __stdcall HT_CreateHalftoneBrush(int a1, int a2, unsigned __int16 *Src)
{
  int v4; // edx
  unsigned __int16 *v5; // edi
  size_t v6; // eax
  size_t v7; // ebx
  int v9; // eax
  int v10; // ecx
  int HalftoneBrushPat; // eax
  PVOID pv; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF
  int v14; // [esp+24h] [ebp+8h]

  pv = 0;
  v13 = 0;
  if ( !a1 || *(_DWORD *)(a1 + 8) != 1 || !*(_DWORD *)(a1 + 12) )
    return -34;
  LOBYTE(v14) = 0;
  HIBYTE(v14) = BYTE1(a2);
  BYTE2(v14) = HIBYTE(a2);
  v4 = 16;
  if ( (a2 & 1) != 0 || BYTE1(a2) == 1 )
    v4 = 17;
  if ( (a2 & 4) != 0 )
    v4 |= 2u;
  if ( (a2 & 2) != 0 )
    v4 |= 4u;
  if ( (a2 & 0x10) != 0 )
    v4 |= 8u;
  v5 = Src;
  BYTE1(v14) = *(_BYTE *)(a1 + 3);
  v6 = pDCIAdjClr(Src != 0 ? &pv : 0, 0, v4, v14, &v13);
  v7 = v6;
  if ( v6 )
  {
    v9 = ComputeBytesPerScanLine(*(unsigned __int16 *)(v6 + 150));
    v10 = v9 * *(unsigned __int16 *)(v7 + 154);
    v13 = v10;
    if ( Src )
    {
      if ( (a2 & 8) != 0 )
      {
        v5 = (unsigned __int16 *)((char *)Src + v10 - v9);
        v9 = -v9;
      }
      HalftoneBrushPat = CreateHalftoneBrushPat(v7, a1, (int)pv, v5, v9);
      if ( HalftoneBrushPat <= 0 )
        v13 = HalftoneBrushPat;
      EngFreeMem(pv);
    }
    else
    {
      EngReleaseSemaphore(*(HSEMAPHORE *)(v7 + 4));
    }
  }
  return v13;
}
