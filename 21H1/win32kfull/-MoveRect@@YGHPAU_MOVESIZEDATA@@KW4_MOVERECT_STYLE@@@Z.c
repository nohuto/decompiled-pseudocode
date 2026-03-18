/*
 * XREFs of ?MoveRect@@YGHPAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x171DE6
 * Callers:
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _TransformRegionBetweenCoordinateSpaces@12 @ 0x151BB7 (_TransformRegionBetweenCoordinateSpaces@12.c)
 */

int __fastcall MoveRect(_DWORD *a1, unsigned int a2, int a3)
{
  int v3; // ebx
  unsigned int v4; // edx
  int *v6; // edx
  int v7; // ebx
  INT v8; // edi
  INT v9; // eax
  int v10; // ebx
  int v11; // edx
  int v12; // esi
  int v13; // ebx
  int v14; // eax
  int *v15; // edi
  _DWORD *v16; // edi
  int v17; // esi
  int v18; // edi
  int v19; // esi
  int v20; // edi
  _DWORD v21[4]; // [esp+Ch] [ebp-30h] BYREF
  int v22; // [esp+1Ch] [ebp-20h]
  int v23; // [esp+20h] [ebp-1Ch]
  int v24; // [esp+24h] [ebp-18h]
  int v25; // [esp+28h] [ebp-14h]
  int v26; // [esp+2Ch] [ebp-10h]
  int *v27; // [esp+30h] [ebp-Ch]
  _DWORD *v28; // [esp+34h] [ebp-8h]

  v3 = (__int16)a2;
  v4 = HIWORD(a2);
  memset(v21, 0, sizeof(v21));
  v28 = a1;
  v27 = a1 + 7;
  v22 = a1[7];
  v23 = a1[8];
  v24 = a1[9];
  v25 = a1[10];
  v26 = (__int16)v4;
  switch ( a3 )
  {
    case 0:
      v12 = (__int16)v4 - a1[8];
      v6 = a1 + 7;
      v13 = v3 - a1[7];
      goto LABEL_10;
    case 1:
      v12 = (__int16)v4 - a1[8] - 1;
      v6 = v27;
      v13 = v3 - (v28[9] - a1[7]) / 2 - a1[7];
      a1 = v28;
LABEL_10:
      v22 += v13;
      v24 += v13;
      v25 += v12;
      v23 += v12;
      break;
    case 2:
      v8 = EngMulDiv(a1[9] - a1[7], a1[63], a1[5] - a1[3]);
      v9 = EngMulDiv(v28[10] - v28[8], v28[64], v28[6] - v28[4]);
      a1 = v28;
      v10 = v3 - v8 - v28[7];
      v11 = v26 - v28[8] - v9;
      v25 += v11;
      v22 += v10;
      v24 += v10;
      v23 += v11;
      v6 = v28 + 7;
      break;
    case 3:
      v6 = a1 + 7;
      v7 = v3 - a1[7];
      v22 += v7;
      v24 += v7;
      break;
    default:
      return 0;
  }
  v14 = a1[46];
  v15 = a1 + 15;
  if ( (v14 & 0x2000000) == 0 )
    v15 = v6;
  *v15 = v22;
  v16 = v15 + 1;
  *v16++ = v23;
  *v16 = v24;
  v16[1] = v25;
  if ( (v14 & 0x40) != 0 )
    return 1;
  v17 = a1[2];
  v18 = *(_DWORD *)(v17 + 56);
  if ( !*(_DWORD *)(*(_DWORD *)(v18 + 20) + 108) )
    return IntersectRect(v21, v6, a1 + 19);
  a3 = *(_DWORD *)(*(_DWORD *)(v18 + 20) + 108);
  v19 = TransformRegionBetweenCoordinateSpaces(v17, v18, &a3);
  v20 = GreRectInRegion(a3, v27);
  if ( v19 )
    GreDeleteObject(a3);
  return v20;
}
