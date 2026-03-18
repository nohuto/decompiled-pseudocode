/*
 * XREFs of _GreAngleArc@24 @ 0x1FF67A
 * Callers:
 *     _NtGdiAngleArc@24 @ 0x212189 (_NtGdiAngleArc@24.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QBE?AU_POINTFIX@@XZ @ 0x1E578B (-ptfxGetCurrent@EPATHOBJ@@QBE-AU_POINTFIX@@XZ.c)
 *     ?lGetQuadrant@@YGJAAVEPOINTFL@@@Z @ 0x1FF648 (-lGetQuadrant@@YGJAAVEPOINTFL@@@Z.c)
 *     ??0EBOX@@QAE@AAVEXFORMOBJ@@AAU_RECTL@@@Z @ 0x21499F (--0EBOX@@QAE@AAVEXFORMOBJ@@AAU_RECTL@@@Z.c)
 *     ?bPartialArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@JAAVEFLOAT@@3J4J@Z @ 0x214C67 (-bPartialArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@JAAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z @ 0x215329 (-vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z.c)
 *     ?vCosSin@@YGXVEFLOAT@@PAV1@1@Z @ 0x2154BB (-vCosSin@@YGXVEFLOAT@@PAV1@1@Z.c)
 *     ?vCosSinPrecise@@YGXVEFLOAT@@PAV1@1@Z @ 0x2156A8 (-vCosSinPrecise@@YGXVEFLOAT@@PAV1@1@Z.c)
 */

int __fastcall GreAngleArc(HDC a1, LONG a2, int a3, int a4, int a5, int a6)
{
  DC *v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // esi
  int v12; // edx
  unsigned int v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  LONG bottom; // eax
  int Quadrant; // eax
  char v18; // bl
  char v19; // si
  char left; // al
  int v21; // eax
  int v22; // esi
  int v23; // ebx
  bool v24; // cc
  int v25; // esi
  _DWORD *Current; // eax
  LONG v28; // [esp+10h] [ebp-330h] BYREF
  int v29; // [esp+14h] [ebp-32Ch] BYREF
  int v30; // [esp+18h] [ebp-328h]
  int v31; // [esp+1Ch] [ebp-324h] BYREF
  int v32; // [esp+20h] [ebp-320h]
  int v33; // [esp+24h] [ebp-31Ch] BYREF
  DC *v34[3]; // [esp+28h] [ebp-318h] BYREF
  struct _RECTL v35; // [esp+34h] [ebp-30Ch] BYREF
  int v36; // [esp+44h] [ebp-2FCh] BYREF
  int v37; // [esp+48h] [ebp-2F8h]
  int v38; // [esp+4Ch] [ebp-2F4h]
  int v39; // [esp+50h] [ebp-2F0h]
  int v40; // [esp+54h] [ebp-2ECh] BYREF
  int v41; // [esp+58h] [ebp-2E8h]
  int v42[2]; // [esp+5Ch] [ebp-2E4h] BYREF
  _BYTE v43[12]; // [esp+64h] [ebp-2DCh] BYREF
  int v44[2]; // [esp+70h] [ebp-2D0h] BYREF
  _DWORD v45[2]; // [esp+78h] [ebp-2C8h] BYREF
  int v46[2]; // [esp+80h] [ebp-2C0h] BYREF
  _DWORD v47[2]; // [esp+88h] [ebp-2B8h] BYREF
  _BYTE v48[80]; // [esp+90h] [ebp-2B0h] BYREF
  PATHOBJ v49; // [esp+E0h] [ebp-260h] BYREF
  int v50; // [esp+E8h] [ebp-258h]
  _BYTE v51[16]; // [esp+110h] [ebp-230h] BYREF
  int v52; // [esp+120h] [ebp-220h]

  v33 = 0;
  v29 = 0;
  v30 = 0;
  memset(v34, 0, sizeof(v34));
  XDCOBJ::vLock((XDCOBJ *)v34, a1);
  v7 = v34[0];
  if ( !v34[0] || (*((_DWORD *)v34[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v10 = 0;
    goto LABEL_46;
  }
  v8 = *((_DWORD *)v34[0] + 255);
  v9 = *(_DWORD *)(v8 + 184);
  if ( (v9 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v34[0], *(_DWORD *)(v8 + 188));
    v7 = v34[0];
  }
  if ( (v9 & 0x2000) != 0 )
    GreDCSelectPen(v7, *(_DWORD *)(*((_DWORD *)v7 + 255) + 192));
  v35.left = a2 - a4;
  v35.top = a3 - a4;
  v35.right = a2 + a4;
  v35.bottom = a3 + a4;
  if ( a4 < 0 || a2 - a4 > a2 || v35.right < a2 || a3 - a4 > a3 || a3 + a4 < a3 )
  {
    EngSetLastError(0x57u);
    v10 = 0;
    goto LABEL_46;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v43, (struct XDCOBJ *)v34, 516);
  v10 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v49, v34, 1);
  if ( !v50 )
    goto LABEL_41;
  ERECTL::vOrder((ERECTL *)&v35);
  v11 = 0;
  v31 = 0;
  v32 = 0;
  v40 = 0;
  v41 = 0;
  ftoef_c(v13, v12, a5, &v31);
  ftoef_c(v15, v14, a6, &v40);
  if ( v40 < 0 )
  {
    bottom = v35.bottom;
    v35.bottom = v35.top;
    v35.top = bottom;
    EFLOAT::vNegate((EFLOAT *)&v40);
    EFLOAT::vNegate((EFLOAT *)&v31);
  }
  EBOX::EBOX((EBOX *)v48, (struct EXFORMOBJ *)v43, &v35);
  v42[0] = v40;
  v42[1] = v41;
  v39 = 2;
  mulff3_c(v42, v42, _FP_1DIV90);
  eftol_c(v42, &v33, 0);
  v38 = v33 >> 2;
  if ( v33 >> 2 > 8 )
    v38 = 8;
  v29 = v31;
  v30 = v32;
  addff3_c(&v29, &v29, &v40);
  v36 = v29;
  v37 = v30;
  subff3_c(&v36, &v36, &v31);
  if ( !v36 && !v37 )
    v11 = 1;
  subff3_c(&v36, &v36, _FP_3_0);
  if ( v36 >= 0 || v11 )
  {
    vCosSin(v46, v47, v31, v32);
    vCosSin(v44, v45, v29, v30);
  }
  else
  {
    vCosSinPrecise(v46, v47, v31, v32);
    vCosSinPrecise(v44, v45, v29, v30);
  }
  Quadrant = lGetQuadrant(v46);
  v18 = Quadrant;
  v28 = Quadrant;
  if ( EFLOAT::operator>(&v31, _FP_3600_0) || EFLOAT::operator>(_FP_M3600_0, &v31) )
  {
    vArctan(&v31, &v28, v46[0], v46[1], v47[0], v47[1]);
    v18 = v28;
  }
  v28 = lGetQuadrant(v44);
  v35.left = v28;
  if ( EFLOAT::operator>(&v29, _FP_3600_0) || EFLOAT::operator>(_FP_M3600_0, &v29) )
  {
    vArctan(&v29, &v35, v44[0], v44[1], v45[0], v45[1]);
    left = v35.left;
    v28 = v35.left;
    v19 = (LOBYTE(v35.left) - v18) & 3;
    if ( v19 )
      goto LABEL_34;
    if ( EFLOAT::operator>(&v31, &v29) )
      v19 = 3;
  }
  else
  {
    v19 = v33;
  }
  left = v28;
LABEL_34:
  v35.left = 0;
  v21 = left & 3;
  v22 = v19 & 3;
  v28 = v21;
  v23 = v18 & 3;
  v33 = v22;
  if ( v38 > 0 )
  {
    while ( bPartialArc(v39, &v49, v48, v46, v23, &v31, v44, v21, &v29, v22)
         && bPartialArc(0, &v49, v48, v44, v28, &v29, v46, v23, &v31, 3 - v33) )
    {
      v39 = 0;
      v24 = v35.left + 1 < v38;
      v22 = v33;
      ++v35.left;
      v21 = v28;
      if ( !v24 )
        goto LABEL_38;
    }
    goto LABEL_41;
  }
LABEL_38:
  if ( !bPartialArc(v39, &v49, v48, v46, v23, &v31, v44, v21, &v29, v22)
    || (*(_DWORD *)(*((_DWORD *)v34[0] + 255) + 184) |= 0x100u,
        *(_DWORD *)(*((_DWORD *)v34[0] + 255) + 184) &= ~0x200u,
        v25 = *((_DWORD *)v34[0] + 255),
        Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&v49, &v35),
        *(_DWORD *)(v25 + 8) = *Current,
        *(_DWORD *)(v25 + 12) = Current[1],
        (*((_BYTE *)v34[0] + 172) & 1) == 0)
    && !EPATHOBJ::bStrokeAndOrFill(
          &v49,
          (struct XDCOBJ *)v34,
          (struct _LINEATTRS *)((char *)v34[0] + 140),
          (struct EXFORMOBJ *)v43,
          1u) )
  {
LABEL_41:
    v10 = 0;
  }
  EPATHOBJ::vUnlock((EPATHOBJ *)&v49);
  if ( v52 )
  {
    PopThreadGuardedObject(v51);
    v52 = 0;
  }
LABEL_46:
  if ( v34[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v34);
  return v10;
}
