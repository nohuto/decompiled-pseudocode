/*
 * XREFs of ??0RESETFCOBJ@@QAE@AAVDCOBJ@@AAVRFONTOBJ@@PAU_MAT2@@HK@Z @ 0x842BE
 * Callers:
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QAEXAAVEXFORMOBJ@@@Z @ 0x848CE (-vSetNotionalToDevice@RFONTOBJ@@QAEXAAVEXFORMOBJ@@@Z.c)
 *     ?vSetElementsLToFx@EXFORMOBJ@@QAEXKKKK@Z @ 0x84912 (-vSetElementsLToFx@EXFORMOBJ@@QAEXKKKK@Z.c)
 *     ??0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z @ 0x8A776 (--0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QAEHAAVXDCOBJ@@PAUtagLOGFONTW@@PAU_FD_XFORM@@KKQAU_POINTL@@AAVIFIOBJ@@H@Z @ 0xCC820 (-bSetFontXform@PFEOBJ@@QAEHAAVXDCOBJ@@PAUtagLOGFONTW@@PAU_FD_XFORM@@KKQAU_POINTL@@AAVIFIOBJ@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z @ 0x209520 (-bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z.c)
 */

RESETFCOBJ *__thiscall RESETFCOBJ::RESETFCOBJ(
        RESETFCOBJ *this,
        struct DCOBJ *a2,
        struct RFONTOBJ *a3,
        struct _MAT2 *a4,
        int a5,
        struct RFONT *a6)
{
  int v7; // eax
  int v8; // esi
  RESETFCOBJ *v9; // edi
  struct MATRIX *v11; // ecx
  int v12; // ebx
  int v13; // edx
  int v14; // edi
  struct MATRIX *v15; // eax
  int v16; // ecx
  struct MATRIX *v17; // eax
  struct MATRIX *v18; // eax
  PFEOBJ *v19; // ecx
  RFONTOBJ *v20; // edi
  int v21; // eax
  struct XDCOBJ *v22; // ebx
  int v23; // eax
  FIXED eM11; // [esp-8h] [ebp-14Ch]
  _DWORD v25[3]; // [esp+Ch] [ebp-138h] BYREF
  _BYTE v26[12]; // [esp+18h] [ebp-12Ch] BYREF
  struct MATRIX *v27[3]; // [esp+24h] [ebp-120h] BYREF
  int v28; // [esp+30h] [ebp-114h]
  struct MATRIX *v29[3]; // [esp+34h] [ebp-110h] BYREF
  struct _POINTL v30; // [esp+40h] [ebp-104h] BYREF
  struct XDCOBJ *v31; // [esp+48h] [ebp-FCh]
  RFONTOBJ *v32; // [esp+4Ch] [ebp-F8h]
  int v33; // [esp+50h] [ebp-F4h] BYREF
  int v34; // [esp+54h] [ebp-F0h]
  int v35; // [esp+58h] [ebp-ECh] BYREF
  LONG v36; // [esp+5Ch] [ebp-E8h]
  int v37; // [esp+60h] [ebp-E4h] BYREF
  int v38; // [esp+64h] [ebp-E0h]
  int v39; // [esp+68h] [ebp-DCh] BYREF
  int v40; // [esp+6Ch] [ebp-D8h]
  int v41; // [esp+70h] [ebp-D4h] BYREF
  RESETFCOBJ *v42; // [esp+74h] [ebp-D0h]
  _BYTE v43[60]; // [esp+78h] [ebp-CCh] BYREF
  _BYTE v44[60]; // [esp+B4h] [ebp-90h] BYREF
  _BYTE v45[60]; // [esp+F0h] [ebp-54h] BYREF
  struct _FD_XFORM Buf1; // [esp+12Ch] [ebp-18h] BYREF

  v32 = a3;
  *(_DWORD *)this = 1;
  *((_DWORD *)this + 2) = a3;
  v42 = this;
  v31 = a2;
  if ( a4->eM11.value != 1
    || a4->eM11.fract
    || a4->eM22.value != 1
    || a4->eM22.fract
    || a4->eM12.value
    || a4->eM12.fract
    || a4->eM21.value
    || (v7 = 1, a4->eM21.fract) )
  {
    v7 = 0;
  }
  *((_DWORD *)this + 1) = v7;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v41, *(struct HLFONT__ **)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 300), 0);
  v8 = v41;
  if ( !v41 )
  {
    *(_DWORD *)this = 0;
    return this;
  }
  if ( *(_DWORD *)(v41 + 288) || *(_DWORD *)(v41 + 292) )
  {
    if ( a5 )
      *((_DWORD *)this + 1) = 0;
  }
  if ( !*((_DWORD *)this + 1) )
  {
    memset(v45, 0, sizeof(v45));
    EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v29, (struct MATRIX *)v45, 0x20u);
    v33 = 0;
    eM11 = a4->eM11;
    v34 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v35 = 0;
    v36 = 0;
    ((void (__stdcall *)(_DWORD, _DWORD))ltoef_c)(eM11, &v33);
    v34 -= 16;
    ltoef_c(*(_DWORD *)&a4->eM22, &v35);
    v36 -= 16;
    ltoef_c(*(_DWORD *)&a4->eM12, &v37);
    v38 -= 16;
    ltoef_c(*(_DWORD *)&a4->eM21, &v39);
    v40 -= 16;
    EFLOAT::vNegate((EFLOAT *)&v37);
    EFLOAT::vNegate((EFLOAT *)&v39);
    v11 = v29[0];
    v12 = v39;
    v13 = v37;
    v14 = v38;
    v28 = v35;
    v30.y = v36;
    v41 = v40;
    *(_DWORD *)v29[0] = v33;
    *((_DWORD *)v11 + 1) = v34;
    v15 = v29[0];
    v16 = v41;
    *((_DWORD *)v29[0] + 2) = v13;
    *((_DWORD *)v15 + 3) = v14;
    v17 = v29[0];
    *((_DWORD *)v29[0] + 4) = v12;
    *((_DWORD *)v17 + 5) = v16;
    v18 = v29[0];
    *((_DWORD *)v29[0] + 6) = v28;
    *((_DWORD *)v18 + 7) = v30.y;
    EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)v29);
    memset(v44, 0, sizeof(v44));
    EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v27, (struct MATRIX *)v44, 8u);
    memset(v43, 0, sizeof(v43));
    EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v26, (struct MATRIX *)v43, 8u);
    memset(&Buf1, 0, sizeof(Buf1));
    v20 = v32;
    if ( a5 )
    {
      v21 = *(_DWORD *)v32;
      v30.y = 0;
      v30.x = 0;
      v22 = v31;
      v25[0] = *(_DWORD *)(*(_DWORD *)(v21 + 80) + 20);
      if ( !PFEOBJ::bSetFontXform(
              v19,
              v31,
              (struct tagLOGFONTW *)(v8 + 280),
              &Buf1,
              1u,
              (unsigned int)v19,
              &v30,
              (struct IFIOBJ *)v25,
              0) )
      {
LABEL_23:
        v9 = v42;
        *(_DWORD *)v42 = 0;
        goto LABEL_14;
      }
      EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)v27);
      EXFORMOBJ::vSetElementsLToFx((EXFORMOBJ *)v27, Buf1.eXX, Buf1.eXY, Buf1.eYX, Buf1.eYY);
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v27, 8u);
    }
    else
    {
      RFONTOBJ::vSetNotionalToDevice(v32, (struct EXFORMOBJ *)v27);
      v22 = v31;
    }
    if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)v26, v27[0], v29[0], 8u) )
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v26, &Buf1);
      v23 = RFONTOBJ::bSetNewFDX(v20, v22, &Buf1, a6);
      v9 = v42;
      *(_DWORD *)v42 = v23;
      goto LABEL_14;
    }
    goto LABEL_23;
  }
  v9 = this;
LABEL_14:
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v8);
  return v9;
}
