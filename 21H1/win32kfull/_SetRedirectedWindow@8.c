/*
 * XREFs of _SetRedirectedWindow@8 @ 0x1FBFA
 * Callers:
 *     __SetLayeredWindowAttributes@16 @ 0x1FB1E (__SetLayeredWindowAttributes@16.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _xxxPrintWindow@12 @ 0x153AF9 (_xxxPrintWindow@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     ?SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z @ 0x20C0E (-SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z.c)
 *     _UpdateWindowSpriteDPI@8 @ 0x23C14 (_UpdateWindowSpriteDPI@8.c)
 *     _HintSpriteShape@16 @ 0x23F60 (_HintSpriteShape@16.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QAE@XZ @ 0x46B96 (--1-$SmartObjStackRef@UtagCLS@@@@QAE@XZ.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _RedirectDCEs@4 @ 0x73D3A (_RedirectDCEs@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 *     _IncrementCompositedCount@4 @ 0x1537FA (_IncrementCompositedCount@4.c)
 */

int __fastcall SetRedirectedWindow(int a1, int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // edx
  HDC SolidBrush; // eax
  int RedirectionBitmap; // eax
  int Prop; // eax
  HBITMAP v15; // [esp+0h] [ebp-48h]
  const struct tagRECT *v16; // [esp+0h] [ebp-48h]
  const RECT *v17; // [esp+0h] [ebp-48h]
  int v18; // [esp+4h] [ebp-44h]
  const struct tagRECT *v19; // [esp+4h] [ebp-44h]
  HBRUSH v20; // [esp+4h] [ebp-44h]
  int v21; // [esp+Ch] [ebp-3Ch] BYREF
  HDC v22; // [esp+10h] [ebp-38h]
  HDC v23; // [esp+14h] [ebp-34h]
  int v24; // [esp+18h] [ebp-30h]
  int v25; // [esp+1Ch] [ebp-2Ch]
  unsigned int v26; // [esp+20h] [ebp-28h]
  int v27; // [esp+24h] [ebp-24h]
  int v28; // [esp+28h] [ebp-20h] BYREF
  _BYTE v29[8]; // [esp+30h] [ebp-18h] BYREF
  int v30; // [esp+38h] [ebp-10h]
  int v31; // [esp+3Ch] [ebp-Ch]
  int v32; // [esp+40h] [ebp-8h]
  int v33; // [esp+44h] [ebp-4h]

  v21 = 0;
  SmartObjStackRefBase<tagCLS>::Init(0);
  v24 = 0;
  v4 = a2 & 0x10;
  v5 = a2 & 0xFFFFFFEF;
  v27 = v4;
  v26 = v5;
  if ( GetRedirectionBitmap(a1) )
  {
    if ( v5 == 1 )
    {
      RedirectionBitmap = GetRedirectionBitmap(a1);
      HintSpriteShape(*(_DWORD *)(_gpDispInfo + 20), a1, RedirectionBitmap, 0);
    }
  }
  else
  {
    SmartObjStackRefBase<tagCLS>::operator=(*(_DWORD *)(a1 + 76));
    if ( *(char *)(*(_DWORD *)(*(_DWORD *)v28 + 4) + 8) < 0
      || (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v28 + 4) + 8) & 0x40) != 0 )
    {
      v22 = 0;
      if ( IsToplevelWindowDesktopComposed(a1) )
        v22 = (HDC)(v5 == 1);
      if ( _IsTopLevelWindow(a1) || (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v28 + 4) + 8) & 0x40) != 0 || (v6 = 1, v5 != 1) )
        v6 = (int)v22;
      if ( !v6 )
      {
        v7 = -2143420411;
        goto LABEL_37;
      }
    }
    v22 = (HDC)CreateOrGetRedirectionBitmap(0, &v21);
    if ( (int)v22 < 0
      || (!SetRedirectionBitmap(0, v15, v18)
        ? (DeleteOrSetRedirectionBitmap(a1, v21, 0), v9 = -1073741801, v22 = (HDC)-1073741801)
        : (HDC)(SetOrClrWF(1, a1, 0xB20u, 1),
                v8 = ValidateHmonitorNoRip(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 164)),
                UpdateWindowSpriteDPI(a1, v8),
                v9 = (int)v22),
          v9 < 0) )
    {
      v7 = (int)v22;
      goto LABEL_37;
    }
    if ( v5 == 2 )
      IncrementCompositedCount(a1);
    if ( v5 == 1 )
    {
      v22 = *(HDC *)(a1 + 20);
      if ( (!EqualRectInl(v16, v19) || *((_DWORD *)v22 + 27)) && !ERECTL::bWrapped((ERECTL *)(v22 + 13)) )
      {
        v23 = 0;
        v22 = (HDC)_ghbrWhite;
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) + 672) )
        {
          SolidBrush = (HDC)GreCreateSolidBrush(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) + 672));
          v10 = *(_DWORD **)(a1 + 20);
          v23 = SolidBrush;
          if ( SolidBrush )
            v22 = SolidBrush;
        }
        v30 = v10[13];
        v31 = v10[14];
        v32 = v10[15];
        v33 = v10[16];
        v32 -= v30;
        v30 = 0;
        v33 -= v31;
        v31 = 0;
        v25 = GreSelectBitmap(_ghdcMem, v21);
        FillRect(v22, v17, v20);
        v24 = 1;
        if ( v23 )
          GreDeleteObject(v23);
        GreSelectBitmap(_ghdcMem, v25);
        v5 = v26;
      }
      HintSpriteShape(*(_DWORD *)(_gpDispInfo + 20), a1, v21, v24);
    }
    RedirectDCEs(a1);
  }
  if ( !v27 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v29);
    xxxInternalInvalidate(a1, 1, 1157);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v29);
  }
  Prop = _GetProp(1);
  *(_DWORD *)(Prop + 24) |= v5;
  v7 = 0;
LABEL_37:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(&v28);
  return v7;
}
