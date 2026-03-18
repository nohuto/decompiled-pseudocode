/*
 * XREFs of __HasCaptionIcon@4 @ 0x321BC
 * Callers:
 *     _SendDwmIconChange@4 @ 0x1D802 (_SendDwmIconChange@4.c)
 *     ?xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z @ 0x31656 (-xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _FindNCHit@8 @ 0xA9F04 (_FindNCHit@8.c)
 *     _xxxGetMenuBarInfo@16 @ 0xB81C8 (_xxxGetMenuBarInfo@16.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _xxxMNFindWindowFromPoint@12 @ 0x198869 (_xxxMNFindWindowFromPoint@12.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 */

BOOL __thiscall _HasCaptionIcon(_DWORD *this)
{
  char v2; // bl
  char v3; // dl
  _BYTE *v4; // esi
  char v5; // cl
  int v7; // ecx
  int v8; // esi
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  int *v12; // [esp+10h] [ebp-10h] BYREF
  _DWORD v13[2]; // [esp+18h] [ebp-8h] BYREF

  v2 = 0;
  v3 = 0;
  v13[1] = 0;
  v4 = (_BYTE *)this[5];
  v5 = v4[16];
  if ( v5 < 0 )
    return 0;
  if ( (v4[22] & 0xC0) != 0x40 && (v5 & 1) == 0 )
    return 1;
  if ( (v4[13] & 2) == 0 )
  {
    SmartObjStackRefBase<tagCLS>::Init(this[19]);
    v3 = 1;
    if ( **(_WORD **)(*(_DWORD *)v13[0] + 4) == 0x8002 )
      v2 = 1;
  }
  if ( (v3 & 1) != 0 )
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v13);
  if ( v2 )
    return 0;
  v10 = this[5];
  v11 = *(_DWORD *)(v10 + 168);
  if ( !v11 )
  {
    v7 = *(_DWORD *)(v10 + 172);
    if ( v7 && v7 != *(_DWORD *)(_gpsi + 6224) )
      return 1;
    SmartObjStackRefBase<tagCLS>::Init(this[19]);
    v8 = *v12;
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v12);
    v9 = *(_DWORD *)(v8 + 64);
    if ( v9 )
    {
      if ( v9 != _HMObjectFromHandle(*(_DWORD *)(_gpsi + 6220)) )
        return 1;
    }
    return 0;
  }
  return v11 != *(_DWORD *)(_gpsi + 6220);
}
