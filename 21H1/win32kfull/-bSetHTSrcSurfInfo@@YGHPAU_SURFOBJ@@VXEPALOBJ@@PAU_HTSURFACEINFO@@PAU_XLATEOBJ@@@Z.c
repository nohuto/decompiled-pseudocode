/*
 * XREFs of ?bSetHTSrcSurfInfo@@YGHPAU_SURFOBJ@@VXEPALOBJ@@PAU_HTSURFACEINFO@@PAU_XLATEOBJ@@@Z @ 0x226EE3
 * Callers:
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QBEHXZ @ 0xA6110 (-bIsMonochrome@XEPALOBJ@@QBEHXZ.c)
 *     ?ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z @ 0xAD8F8 (-ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z.c)
 */

int __fastcall bSetHTSrcSurfInfo(int a1, void *a2, int a3, _DWORD *a4)
{
  unsigned int v4; // edx
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  char v12; // bl
  bool v13; // zf
  unsigned int v14; // esi
  int v15; // edx
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // edx
  _DWORD *v19; // ebx
  _DWORD *v20; // edi
  _DWORD v22[7]; // [esp+Ch] [ebp-24h] BYREF
  void *v23; // [esp+28h] [ebp-8h]
  int v24; // [esp+2Ch] [ebp-4h]

  v23 = a2;
  v4 = 2;
  v5 = *(_DWORD *)(a1 + 44);
  v24 = *(_DWORD *)(a3 + 16) & 2;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_12;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v4 = 16;
    goto LABEL_12;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v4 = 256;
LABEL_12:
    v11 = v24;
    goto LABEL_13;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = 1;
    v12 = 2;
    v4 = 3;
    v24 = 1;
    goto LABEL_14;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = v24;
    v12 = 3;
    v4 = 0;
    goto LABEL_14;
  }
  if ( v10 != 1 )
    return 0;
  v11 = 1;
  v4 = 3;
  v24 = 1;
LABEL_13:
  v12 = 4;
LABEL_14:
  BYTE2(v22[1]) = *(_BYTE *)(a1 + 44);
  v22[2] = *(_DWORD *)(a1 + 16);
  v22[3] = *(_DWORD *)(a1 + 20);
  v22[4] = *(_DWORD *)(a1 + 36);
  v22[5] = *(_DWORD *)(a1 + 32);
  v13 = (*(_BYTE *)(a1 + 50) & 1) == 0;
  v22[0] = a1;
  HIBYTE(v22[1]) = 4;
  LOWORD(v22[1]) = !v13;
  if ( v11 )
    v14 = 3;
  else
    v14 = *(_DWORD *)(a3 + 20);
  if ( v14 > v4 )
    v14 = v4;
  if ( 4 * v14 == -16 )
    v15 = 0;
  else
    v15 = AllocThreadBufferWithTag(4 * v14 + 16, 1668573255, 0);
  v22[6] = v15;
  if ( !v15 )
  {
    EngSetLastError(8u);
    return 0;
  }
  *(_DWORD *)(v15 + 4) = 0;
  *(_BYTE *)v15 = 0;
  *(_DWORD *)(v15 + 12) = v15 + 16;
  *(_BYTE *)(v15 + 3) = 0;
  if ( (*(_BYTE *)(a3 + 16) & 8) != 0 )
    *(_BYTE *)(v15 + 3) = 4;
  v13 = v24 == 0;
  *(_BYTE *)(v15 + 2) = v12;
  if ( v13 )
  {
    *(_DWORD *)(v15 + 8) = v14;
    *(_DWORD *)(v15 + 4) = 255;
    *(_BYTE *)(v15 + 1) = 1;
    if ( v14 )
    {
      if ( XEPALOBJ::bIsMonochrome((XEPALOBJ *)&a3) && (v19 = a4) != 0 && (a4[14] & 0x100) != 0 )
      {
        v20 = *(_DWORD **)(v18 + 12);
        *v20 = ulColorRefToRGB(a4[10], a4[11], a4[6]);
        v20[1] = ulColorRefToRGB(v19[10], v19[11], v19[7]);
      }
      else
      {
        XEPALOBJ::ulGetEntries((XEPALOBJ *)&a3, 0, v14, *(struct tagPALETTEENTRY **)(v18 + 12), 0);
      }
    }
  }
  else
  {
    v16 = *(_DWORD **)(v15 + 12);
    *(_BYTE *)(v15 + 1) = 0;
    *(_DWORD *)(v15 + 8) = 3;
    if ( (*(_BYTE *)(a3 + 16) & 2) != 0 )
    {
      *v16 = **(_DWORD **)(a3 + 76);
      v16[1] = *(_DWORD *)(*(_DWORD *)(a3 + 76) + 4);
      v17 = *(_DWORD *)(*(_DWORD *)(a3 + 76) + 8);
    }
    else
    {
      v16[1] = 65280;
      if ( (*(_BYTE *)(a3 + 16) & 8) != 0 )
      {
        *v16 = 16711680;
        v17 = 255;
      }
      else
      {
        *v16 = 255;
        v17 = 16711680;
      }
    }
    v16[2] = v17;
  }
  qmemcpy(v23, v22, 0x1Cu);
  return 1;
}
