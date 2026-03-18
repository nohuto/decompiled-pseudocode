/*
 * XREFs of _HT_CreateStandardMonoPattern@8 @ 0x1BA618
 * Callers:
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QAEHXZ @ 0x1E98A3 (-bCreateHalftoneBrushes@PDEVOBJ@@QAEHXZ.c)
 * Callees:
 *     _GetCachedSMP @ 0x1BA272 (_GetCachedSMP.c)
 *     _HT_CreateHalftoneBrush@20 @ 0x1BA502 (_HT_CreateHalftoneBrush@20.c)
 *     _ComputeBytesPerScanLine @ 0x1BB37B (_ComputeBytesPerScanLine.c)
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 */

int __fastcall HT_CreateStandardMonoPattern(int a1, int a2)
{
  unsigned __int8 v3; // bl
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  char v8; // dl
  int v9; // eax
  unsigned __int16 v10; // ax
  unsigned __int16 *v11; // edx
  char v12; // cl
  __int16 v13; // ax
  int CachedSMP; // eax
  int v15; // ecx
  int v16[5]; // [esp+10h] [ebp-20h] BYREF
  int v17; // [esp+24h] [ebp-Ch] BYREF
  int v18; // [esp+28h] [ebp-8h]
  int v19; // [esp+2Ch] [ebp-4h] BYREF

  v16[4] = a1;
  v18 = 0;
  v3 = *(_BYTE *)(a2 + 3);
  v17 = 0;
  if ( v3 > 0x76u )
    return -27;
  v19 = 0;
  v5 = pDCIAdjClr(0, 0, 0, 0, &v17);
  v6 = v5;
  if ( v5 )
  {
    if ( v3 < 0x12u )
    {
      CachedSMP = GetCachedSMP(v5, (__int16 *)a2);
    }
    else
    {
      v7 = *(unsigned __int16 *)(v5 + 150);
      v8 = *(_BYTE *)(a2 + 2);
      v9 = *(unsigned __int16 *)(v5 + 154);
      *(_WORD *)(a2 + 8) = v7;
      BYTE2(v18) = v8;
      *(_WORD *)(a2 + 10) = v9;
      v19 = v9;
      v10 = ComputeBytesPerScanLine(v7);
      v11 = *(unsigned __int16 **)(a2 + 12);
      *(_WORD *)(a2 + 6) = v10;
      v12 = 1;
      LOBYTE(v18) = 1;
      if ( !v11 )
      {
        v15 = (unsigned __int16)v19 * v10;
LABEL_14:
        v17 = v15;
        EngReleaseSemaphore(*(HSEMAPHORE *)(v6 + 4));
        return v17;
      }
      v16[0] = 196864;
      v16[1] = 100;
      BYTE1(v19) = 118 - v3;
      LOBYTE(v19) = 118 - v3;
      v16[3] = (int)&v19;
      v13 = *(_WORD *)a2;
      v16[2] = 1;
      if ( (v13 & 2) != 0 )
      {
        v12 = 3;
        LOBYTE(v18) = 3;
      }
      if ( (v13 & 1) == 0 )
        LOBYTE(v18) = v12 | 8;
      BYTE1(v18) = 1;
      HIBYTE(v18) = 0;
      CachedSMP = HT_CreateHalftoneBrush((int)v16, v18, v11);
    }
    v15 = CachedSMP;
    goto LABEL_14;
  }
  return v17;
}
