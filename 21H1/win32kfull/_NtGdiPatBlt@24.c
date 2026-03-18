/*
 * XREFs of _NtGdiPatBlt@24 @ 0x56C7C
 * Callers:
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _EraseBitmap@4 @ 0xB0A62 (_EraseBitmap@4.c)
 *     _xxxPaintMenuBar@24 @ 0xB5BC0 (_xxxPaintMenuBar@24.c)
 *     _DrawThumb2@24 @ 0xC1CFA (_DrawThumb2@24.c)
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 *     ?InvertScrollHilite@@YGXPAUtagWND@@PAUtagSBTRACK@@@Z @ 0x1A2BEF (-InvertScrollHilite@@YGXPAUtagWND@@PAUtagSBTRACK@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YGXPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1A8F1E (-MNDrawMenu3DHotTracking@@YGXPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z @ 0x1A90F9 (-xxxDrawItemUnderline@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z.c)
 *     _MNEraseBackground@24 @ 0x1A98B1 (_MNEraseBackground@24.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 *     _DxgkEngColorFillViaGDI@20 @ 0x1D4198 (_DxgkEngColorFillViaGDI@20.c)
 * Callees:
 *     ?GrePatBltLockedDC@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVERECTL@@KPAVSURFACE@@KKKK@Z @ 0x57330 (-GrePatBltLockedDC@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVERECTL@@KPAVSURFACE@@KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708 (-RestoreAttributesHelper@XDCOBJ@@AAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _bCvtPts1@12 @ 0xEE344 (_bCvtPts1@12.c)
 */

int __stdcall NtGdiPatBlt(HDC a1, int a2, struct XDCOBJ *a3, int a4, int a5, struct EXFORMOBJ *a6)
{
  int v6; // ebx
  DC *v7; // ecx
  char *v8; // eax
  int v9; // edx
  struct XDCOBJ *v10; // edi
  int v11; // esi
  int v12; // eax
  struct XDCOBJ *v13; // eax
  DC *v14; // eax
  struct ERECTL *v15; // edi
  int v16; // ecx
  int locked; // eax
  int *v18; // ecx
  int v19; // esi
  struct _DC_ATTR *UserAttr; // eax
  int v21; // esi
  unsigned int v23; // [esp+8h] [ebp-80h]
  unsigned int v24; // [esp+Ch] [ebp-7Ch]
  int v25; // [esp+14h] [ebp-74h] BYREF
  DC *v26; // [esp+18h] [ebp-70h] BYREF
  int v27; // [esp+1Ch] [ebp-6Ch]
  int v28; // [esp+20h] [ebp-68h]
  struct EXFORMOBJ *v29; // [esp+24h] [ebp-64h]
  struct XDCOBJ *v30; // [esp+28h] [ebp-60h]
  int v31; // [esp+2Ch] [ebp-5Ch]
  int v32; // [esp+30h] [ebp-58h]
  _DWORD v33[2]; // [esp+34h] [ebp-54h] BYREF
  int v34; // [esp+3Ch] [ebp-4Ch]
  int v35; // [esp+40h] [ebp-48h]
  _DWORD v36[5]; // [esp+44h] [ebp-44h] BYREF
  int *v37; // [esp+58h] [ebp-30h] BYREF
  int v38; // [esp+5Ch] [ebp-2Ch]
  int v39; // [esp+60h] [ebp-28h]
  int v40; // [esp+64h] [ebp-24h]
  int v41; // [esp+68h] [ebp-20h]
  int v42; // [esp+6Ch] [ebp-1Ch]
  int v43; // [esp+70h] [ebp-18h]
  int v44; // [esp+74h] [ebp-14h] BYREF
  struct XDCOBJ *v45; // [esp+78h] [ebp-10h]
  int v46; // [esp+7Ch] [ebp-Ch]
  struct XDCOBJ *v47; // [esp+80h] [ebp-8h]

  v30 = a3;
  v6 = 0;
  v27 = 0;
  v28 = 0;
  v32 = a4;
  v31 = a5;
  v25 = a2;
  v29 = a6;
  XDCOBJ::vLock((XDCOBJ *)&v26, a1);
  v7 = v26;
  if ( !v26 )
    return v6;
  v29 = (struct EXFORMOBJ *)((BYTE2(v29) << 8) | BYTE2(v29));
  if ( (((unsigned __int8)v29 ^ (unsigned __int8)(4 * (_BYTE)v29)) & 0xCC) == 0 )
  {
    v6 = 1;
    v33[1] = *(_DWORD *)(*((_DWORD *)v26 + 255) + 228);
    v34 = *(_DWORD *)(*((_DWORD *)v26 + 255) + 148) & 1;
    if ( (*(_DWORD *)(*((_DWORD *)v26 + 255) + 340) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)v33, (struct XDCOBJ *)&v26, 0x204u, 0);
      v7 = v26;
      v8 = (char *)v33[0];
    }
    else
    {
      v8 = (char *)v26 + 240;
      v33[0] = (char *)v26 + 240;
    }
    v35 = *((_DWORD *)v8 + 14);
    if ( (v35 & 1) == 0 )
    {
      v6 = GreMaskBlt(a1, (int)v30, v32, v31, 0, 0, 0, 0, 0, 0, (_DWORD)v29 << 16, 0);
LABEL_38:
      v7 = v26;
      goto LABEL_39;
    }
    v9 = a2;
    v10 = v30;
    v11 = a2 + v32;
    v44 = a2;
    v47 = (struct XDCOBJ *)((char *)v30 + v31);
    v45 = v30;
    v46 = a2 + v32;
    if ( (v35 & 0x43) != 0x43 )
    {
      bCvtPts1(v33[0], &v44, 2);
      v7 = v26;
      v11 = v46;
      v10 = v45;
      v9 = v44;
    }
    if ( v34 )
    {
      ++v9;
      ++v11;
      v44 = v9;
      v46 = v11;
    }
    if ( v9 > v11 )
    {
      v12 = v9;
      v9 = v11;
      v11 = v12;
      v44 = v9;
      v46 = v12;
    }
    v13 = v47;
    if ( (int)v10 > (int)v47 )
    {
      v13 = v10;
      v10 = v47;
      v45 = v47;
      v47 = v13;
    }
    if ( v9 == v11 || v10 == v13 )
      goto LABEL_39;
    if ( (*((_BYTE *)v7 + 24) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)&v26, (struct ERECTL *)&v44);
    if ( (((unsigned __int8)gajRop3[(unsigned __int8)v29] | (unsigned __int8)gajRop3[(unsigned int)v29 >> 8]) & 0xB2) != 0 )
      bSpDwmValidateSurface(v30, v32, v31, v23, v24);
    v38 = 0;
    v39 = 0;
    LOWORD(v40) = 256;
    memset(v36, 0, 16);
    v37 = 0;
    v43 = 0;
    v42 = 0;
    v41 = 0;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v36, (struct XDCOBJ *)&v26, 0) )
    {
      v14 = v26;
      v15 = (struct ERECTL *)*((_DWORD *)v26 + 126);
      if ( !v15 )
        goto LABEL_28;
      v16 = *((_DWORD *)v26 + 255);
      if ( (*(_DWORD *)(v16 + 184) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v26, *(_DWORD *)(v16 + 188));
        v14 = v26;
      }
      locked = GrePatBltLockedDC(
                 (struct XDCOBJ *)&v44,
                 v29,
                 v15,
                 *(_DWORD *)(*((_DWORD *)v14 + 255) + 204),
                 *(struct SURFACE **)(*((_DWORD *)v14 + 255) + 196),
                 *(_DWORD *)(*((_DWORD *)v14 + 255) + 208),
                 *(_DWORD *)(*((_DWORD *)v14 + 255) + 200),
                 v23,
                 v24);
    }
    else
    {
      locked = XDCOBJ::bFullScreen((XDCOBJ *)&v26);
    }
    v6 = locked;
LABEL_28:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v36);
    v18 = v37;
    if ( v37 )
    {
      if ( (_BYTE)v40 )
      {
        v37[7] &= ~2u;
        v18 = v37;
        LOBYTE(v40) = 0;
      }
      if ( v18 )
      {
        if ( v38 && (v18[8] & 2) != 0 )
        {
          XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v37);
          v37[8] &= ~2u;
          v38 = 0;
          v18 = v37;
        }
        v25 = 0;
        v19 = *v18;
        HmgDecrementExclusiveReferenceCountEx(v18, v39, &v25);
        if ( v25 )
          bDeleteDCInternalEx(v19, 0);
      }
    }
    goto LABEL_38;
  }
LABEL_39:
  if ( v7 )
  {
    if ( v27 && (*((_BYTE *)v7 + 32) & 2) != 0 )
    {
      if ( !v28 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v26);
        v7 = v26;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v26, UserAttr);
          v7 = v26;
        }
      }
      *((_DWORD *)v7 + 8) &= ~2u;
      v27 = 0;
      v7 = v26;
    }
    v25 = 0;
    v21 = *(_DWORD *)v7;
    HmgDecrementExclusiveReferenceCountEx(v7, v28, &v25);
    if ( v25 )
      bDeleteDCInternalEx(v21, 0);
  }
  return v6;
}
