/*
 * XREFs of ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C020C7EC
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0210714 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021127C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01E6594 (TransformRegionBetweenCoordinateSpaces.c)
 */

__int64 __fastcall MoveRect(__int64 a1, int a2, int a3)
{
  int *v3; // r15
  int v4; // edi
  int v6; // r14d
  int v7; // r8d
  int v8; // r8d
  int v10; // edi
  INT v11; // ebx
  int v12; // r14d
  int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ebx
  unsigned int v19; // edi
  __int128 v20; // [rsp+20h] [rbp-20h]
  __int128 v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+60h] [rbp+20h] BYREF

  v3 = (int *)(a1 + 40);
  v4 = (__int16)a2;
  v6 = SHIWORD(a2);
  v20 = *(_OWORD *)(a1 + 40);
  v21 = 0LL;
  if ( !a3 )
  {
    v12 = SHIWORD(a2) - *(_DWORD *)(a1 + 44);
    goto LABEL_10;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v12 = SHIWORD(a2) - *(_DWORD *)(a1 + 44) - 1;
    v13 = (__int16)a2 - (*(_DWORD *)(a1 + 48) - *v3) / 2 - *v3;
LABEL_11:
    LODWORD(v20) = v13 + v20;
    DWORD2(v20) += v13;
    HIDWORD(v20) += v12;
    DWORD1(v20) += v12;
    goto LABEL_12;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = EngMulDiv(*(_DWORD *)(a1 + 48) - *v3, *(_DWORD *)(a1 + 284), *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 24));
    v12 = v6
        - *(_DWORD *)(a1 + 44)
        - EngMulDiv(
            *(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 44),
            *(_DWORD *)(a1 + 288),
            *(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 28));
    v4 -= v11;
LABEL_10:
    v13 = v4 - *v3;
    goto LABEL_11;
  }
  if ( v8 != 1 )
    return 0LL;
  v10 = (__int16)a2 - *v3;
  LODWORD(v20) = v10 + v20;
  DWORD2(v20) += v10;
LABEL_12:
  v14 = *(_DWORD *)(a1 + 196);
  if ( (v14 & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 72) = v20;
  else
    *(_OWORD *)v3 = v20;
  if ( (v14 & 0x40) != 0 )
    return 1LL;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_QWORD *)(v15 + 104);
  v17 = *(_QWORD *)(v16 + 40);
  if ( !*(_QWORD *)(v17 + 168) )
    return IntersectRect(&v21, v3, (int *)(a1 + 88));
  v22 = *(_QWORD *)(v17 + 168);
  v18 = TransformRegionBetweenCoordinateSpaces(v15, v16, &v22);
  v19 = GreRectInRegion(v22, v3);
  if ( v18 )
    GreDeleteObject(v22);
  return v19;
}
