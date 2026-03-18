/*
 * XREFs of _NtGdiArcInternal@40 @ 0x2158FA
 * Callers:
 *     <none>
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     ??4EPOINTFL@@QAEXAAU_POINTL@@@Z @ 0x22E22 (--4EPOINTFL@@QAEXAAU_POINTL@@@Z.c)
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 *     ?efHalfDiff@@YG?AVEFLOAT@@JJ@Z @ 0x22EA2 (-efHalfDiff@@YG-AVEFLOAT@@JJ@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QBE?AU_POINTFIX@@XZ @ 0x1E578B (-ptfxGetCurrent@EPATHOBJ@@QBE-AU_POINTFIX@@XZ.c)
 *     ??0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z @ 0x214527 (--0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z.c)
 *     ??ZEPOINTFL@@QAEXAAV0@@Z @ 0x214AAD (--ZEPOINTFL@@QAEXAAV0@@Z.c)
 *     ?bPartialArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@JAAVEFLOAT@@3J4J@Z @ 0x214C67 (-bPartialArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@JAAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z @ 0x215329 (-vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z.c)
 *     ?vCosSin@@YGXVEFLOAT@@PAV1@1@Z @ 0x2154BB (-vCosSin@@YGXVEFLOAT@@PAV1@1@Z.c)
 *     ?vCosSinPrecise@@YGXVEFLOAT@@PAV1@1@Z @ 0x2156A8 (-vCosSinPrecise@@YGXVEFLOAT@@PAV1@1@Z.c)
 */

int __stdcall NtGdiArcInternal(int a1, HDC a2, LONG a3, LONG a4, LONG a5, LONG a6, int a7, int a8, int a9, int a10)
{
  DC *v10; // ecx
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  __int64 v14; // rax
  int v15; // edi
  int v16; // esi
  __int64 v17; // rax
  int v18; // esi
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  bool v22; // zf
  int v23; // esi
  BOOL v24; // eax
  int v25; // esi
  _DWORD *Current; // eax
  int v27; // eax
  int v29; // [esp+10h] [ebp-358h] BYREF
  int v30; // [esp+14h] [ebp-354h]
  int v31; // [esp+18h] [ebp-350h] BYREF
  int v32; // [esp+1Ch] [ebp-34Ch]
  DC *v33[3]; // [esp+20h] [ebp-348h] BYREF
  int v34; // [esp+2Ch] [ebp-33Ch] BYREF
  int v35; // [esp+30h] [ebp-338h]
  int v36; // [esp+34h] [ebp-334h] BYREF
  int v37; // [esp+38h] [ebp-330h] BYREF
  __int64 v38; // [esp+3Ch] [ebp-32Ch] BYREF
  __int64 v39; // [esp+44h] [ebp-324h] BYREF
  _DWORD v40[2]; // [esp+4Ch] [ebp-31Ch] BYREF
  _DWORD v41[2]; // [esp+54h] [ebp-314h] BYREF
  _BYTE v42[12]; // [esp+5Ch] [ebp-30Ch] BYREF
  int v43; // [esp+68h] [ebp-300h] BYREF
  int v44; // [esp+6Ch] [ebp-2FCh]
  int v45; // [esp+70h] [ebp-2F8h] BYREF
  int v46; // [esp+74h] [ebp-2F4h]
  __int64 v47; // [esp+78h] [ebp-2F0h] BYREF
  int v48; // [esp+80h] [ebp-2E8h]
  int v49; // [esp+84h] [ebp-2E4h]
  struct _RECTL v50; // [esp+88h] [ebp-2E0h] BYREF
  _DWORD v51[2]; // [esp+98h] [ebp-2D0h] BYREF
  int v52[2]; // [esp+A0h] [ebp-2C8h] BYREF
  _DWORD v53[2]; // [esp+A8h] [ebp-2C0h] BYREF
  int v54[2]; // [esp+B0h] [ebp-2B8h] BYREF
  _DWORD v55[10]; // [esp+B8h] [ebp-2B0h] BYREF
  struct _POINTL v56; // [esp+E0h] [ebp-288h] BYREF
  int v57; // [esp+F8h] [ebp-270h]
  int v58; // [esp+FCh] [ebp-26Ch]
  int v59; // [esp+100h] [ebp-268h]
  int v60; // [esp+104h] [ebp-264h]
  PATHOBJ v61; // [esp+108h] [ebp-260h] BYREF
  int v62; // [esp+110h] [ebp-258h]
  _BYTE v63[16]; // [esp+138h] [ebp-230h] BYREF
  int v64; // [esp+148h] [ebp-220h]

  memset(v33, 0, sizeof(v33));
  v50.left = a3;
  v50.top = a4;
  v50.right = a5;
  v50.bottom = a6;
  v41[0] = a7;
  v41[1] = a8;
  v40[0] = a9;
  v40[1] = a10;
  XDCOBJ::vLock((XDCOBJ *)v33, a2);
  v10 = v33[0];
  if ( !v33[0] || (*((_DWORD *)v33[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_47;
  }
  if ( (unsigned int)a1 > 3 )
  {
    EngSetLastError(0x57u);
LABEL_47:
    v13 = 0;
    goto LABEL_48;
  }
  v11 = *((_DWORD *)v33[0] + 255);
  v12 = *(_DWORD *)(v11 + 184);
  if ( (v12 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v33[0], *(_DWORD *)(v11 + 188));
    v10 = v33[0];
  }
  if ( (v12 & 0x2000) != 0 )
    GreDCSelectPen(v10, *(_DWORD *)(*((_DWORD *)v10 + 255) + 192));
  v13 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v61, v33, a1 == 1);
  if ( !v62 )
  {
    EngSetLastError(8u);
LABEL_10:
    v13 = 0;
    goto LABEL_11;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v42, (struct XDCOBJ *)v33, 516);
  EBOX::EBOX((EBOX *)v55, (struct DCOBJ *)v33, &v50, (struct _LINEATTRS *)((char *)v33[0] + 140), 1);
  if ( v55[1] )
    goto LABEL_10;
  if ( !v55[0] )
  {
    v14 = efHalfDiff(v58, -v60);
    v15 = HIDWORD(v14);
    v16 = v14;
    v17 = efHalfDiff(v57, -v59);
    v48 = v16;
    v18 = 0;
    v49 = v15;
    v19 = 0;
    v47 = v17;
    v31 = 0;
    v32 = 0;
    v29 = 0;
    v30 = 0;
    v36 = 0;
    v37 = 0;
    if ( v57 == v59 || v58 == v60 )
    {
      v21 = _FP_0_0[0];
      v31 = _FP_0_0[0];
      v20 = _FP_0_0[1];
      v32 = v20;
      v29 = _FP_0_0[0];
      v30 = v20;
    }
    else
    {
      v38 = efHalfDiff(v59, v57);
      v39 = efHalfDiff(v58, v60);
      EPOINTFL::operator=((char *)&v43, v41);
      EPOINTFL::operator-=(&v43, &v47);
      divff3_c(&v43, &v43, (int *)&v38);
      divff3_c(&v45, &v45, (int *)&v39);
      vArctan(&v31, &v36, v43, v44, v45, v46);
      EPOINTFL::operator=((char *)&v43, v40);
      EPOINTFL::operator-=(&v43, &v47);
      divff3_c(&v43, &v43, (int *)&v38);
      divff3_c(&v45, &v45, (int *)&v39);
      vArctan(&v29, &v37, v43, v44, v45, v46);
      v20 = v30;
      v21 = v29;
      v19 = v36;
    }
    v35 = v20;
    v34 = v21;
    subff3_c(&v34, &v34, &v31);
    v22 = v34 == 0;
    if ( v34 < 0 )
    {
      EFLOAT::vNegate((EFLOAT *)&v34);
      v22 = v34 == 0;
    }
    if ( v22 && !v35 )
      v18 = 1;
    subff3_c(&v34, &v34, _FP_3_0);
    if ( v34 >= 0 || v18 )
    {
      vCosSin(v53, v54, v31, v32);
      vCosSin(v51, v52, v29, v30);
    }
    else
    {
      vCosSinPrecise(v53, v54, v31, v32);
      vCosSinPrecise(v51, v52, v29, v30);
    }
    v23 = v37;
    v24 = v19 != v37 || !EFLOAT::operator>(&v29, &v31);
    if ( !bPartialArc((a1 == 1) + 1, (EPATHOBJ *)&v61, v55, (int)v53, v19, (int)&v31, (int)v51, v23, (int)&v29, v24) )
      goto LABEL_10;
    if ( a1 == 1 )
    {
      *(_DWORD *)(*((_DWORD *)v33[0] + 255) + 184) |= 0x100u;
      *(_DWORD *)(*((_DWORD *)v33[0] + 255) + 184) &= ~0x200u;
      v25 = *((_DWORD *)v33[0] + 255);
      Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&v61, v40);
      *(_DWORD *)(v25 + 8) = *Current;
      *(_DWORD *)(v25 + 12) = Current[1];
    }
    else
    {
      if ( a1 != 2 )
      {
        if ( a1 != 3 )
          goto LABEL_40;
        if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v61, 0, &v56, 1u) )
          goto LABEL_10;
      }
      if ( !EPATHOBJ::bCloseFigure((EPATHOBJ *)&v61) )
        goto LABEL_10;
    }
LABEL_40:
    if ( (*((_BYTE *)v33[0] + 172) & 1) == 0 )
    {
      if ( a1 <= 1 )
        v27 = EPATHOBJ::bStrokeAndOrFill(
                &v61,
                (struct XDCOBJ *)v33,
                (struct _LINEATTRS *)((char *)v33[0] + 140),
                (struct EXFORMOBJ *)v42,
                1u);
      else
        v27 = EPATHOBJ::bStrokeAndOrFill(
                &v61,
                (struct XDCOBJ *)v33,
                (struct _LINEATTRS *)((char *)v33[0] + 140),
                (struct EXFORMOBJ *)v42,
                3u);
      v13 = v27;
    }
  }
LABEL_11:
  EPATHOBJ::vUnlock((EPATHOBJ *)&v61);
  if ( v64 )
  {
    PopThreadGuardedObject(v63);
    v64 = 0;
  }
LABEL_48:
  if ( v33[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v33);
  return v13;
}
