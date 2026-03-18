/*
 * XREFs of _zzzUpdateLayeredWindow@40 @ 0xBABAE
 * Callers:
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _NtUserUpdateLayeredWindow@40 @ 0xBA93E (_NtUserUpdateLayeredWindow@40.c)
 *     ?zzzUpdateFade@@YGXPAUtagPOINT@@PAUtagSIZE@@PAUHDC__@@0PAU_BLENDFUNCTION@@@Z @ 0x1535CE (-zzzUpdateFade@@YGXPAUtagPOINT@@PAUtagSIZE@@PAUHDC__@@0PAU_BLENDFUNCTION@@@Z.c)
 *     ?zzzApplyShadow@@YGHPAUtagWND@@0@Z @ 0x19D1DB (-zzzApplyShadow@@YGHPAUtagWND@@0@Z.c)
 *     _zzzMoveShadow@4 @ 0x19D67F (_zzzMoveShadow@4.c)
 *     _zzzUpdateShadowAlpha@4 @ 0x19D6F9 (_zzzUpdateShadowAlpha@4.c)
 * Callees:
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     _GetRedirectionFlags@4 @ 0x20168 (_GetRedirectionFlags@4.c)
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     _OffsetChildren@20 @ 0x2AECC (_OffsetChildren@20.c)
 *     _UpdateSprite@48 @ 0x2B1AA (_UpdateSprite@48.c)
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 *     _DwmChildRectChange@4 @ 0x30F5A (_DwmChildRectChange@4.c)
 *     _GreUpdateSpriteVisRgn@8 @ 0x363E0 (_GreUpdateSpriteVisRgn@8.c)
 *     _GreClientRgnUpdated@4 @ 0x384C8 (_GreClientRgnUpdated@4.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??4RedirectedRecttagWNDrcClient@tagWND@@QAEABUtagRECT@@ABU2@@Z @ 0x9B904 (--4RedirectedRecttagWNDrcClient@tagWND@@QAEABUtagRECT@@ABU2@@Z.c)
 *     ??4RedirectedRecttagWNDrcWindow@tagWND@@QAEABUtagRECT@@ABU2@@Z @ 0x9B93E (--4RedirectedRecttagWNDrcWindow@tagWND@@QAEABUtagRECT@@ABU2@@Z.c)
 *     ?UpdateWindowRects@@YGXPAUtagWND@@PBUtagPOINT@@PBUtagSIZE@@PAH3@Z @ 0xBAE9A (-UpdateWindowRects@@YGXPAUtagWND@@PBUtagPOINT@@PBUtagSIZE@@PAH3@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z @ 0x1534DB (-RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z.c)
 *     _InvalidateGDIWindows@4 @ 0x1541C8 (_InvalidateGDIWindows@4.c)
 */

int __fastcall zzzUpdateLayeredWindow(
        struct tagEVENTHOOK *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10)
{
  _DWORD *v11; // eax
  HSURF v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // esi
  char RedirectionFlags; // al
  int v17; // esi
  unsigned int v18; // ecx
  _DWORD *v19; // edx
  int v21; // eax
  int updated; // esi
  int v23; // eax
  int v24; // ecx
  int *v25; // [esp+0h] [ebp-58h]
  struct tagWND *v26; // [esp+0h] [ebp-58h]
  int *v27; // [esp+4h] [ebp-54h]
  HBITMAP v28; // [esp+4h] [ebp-54h]
  struct tagPOINT v29; // [esp+10h] [ebp-48h] BYREF
  HSURF v30; // [esp+18h] [ebp-40h] BYREF
  int v31; // [esp+1Ch] [ebp-3Ch]
  int v32; // [esp+20h] [ebp-38h]
  int v33; // [esp+24h] [ebp-34h]
  int v34; // [esp+28h] [ebp-30h]
  int v35; // [esp+2Ch] [ebp-2Ch]
  int v36; // [esp+30h] [ebp-28h]
  int v37; // [esp+34h] [ebp-24h] BYREF
  int v38; // [esp+38h] [ebp-20h]
  int v39; // [esp+3Ch] [ebp-1Ch]
  int v40; // [esp+40h] [ebp-18h]
  _DWORD v41[4]; // [esp+44h] [ebp-14h] BYREF

  v31 = a3;
  v32 = a5;
  v35 = a6;
  v34 = a8;
  v33 = a10;
  v11 = (_DWORD *)*((_DWORD *)a1 + 5);
  v29.x = 0;
  v29.y = 0;
  v36 = a2;
  v37 = v11[13];
  v38 = v11[14];
  v39 = v11[15];
  v40 = v11[16];
  v41[0] = v11[17];
  v41[1] = v11[18];
  v41[2] = v11[19];
  v41[3] = v11[20];
  v12 = 0;
  v30 = 0;
  if ( IsWindowDesktopComposed(a1) )
  {
    v13 = *((_DWORD *)a1 + 5);
    if ( (*(_BYTE *)(v13 + 144) & 0x40) != 0 )
    {
      if ( (*(_BYTE *)(v13 + 19) & 0x20) != 0 )
      {
        UnsetRedirectedWindow((int)a1, 1);
        v13 = *((_DWORD *)a1 + 5);
      }
      *(_DWORD *)(v13 + 144) &= ~0x40u;
    }
  }
  v14 = *((_DWORD *)a1 + 5);
  if ( (*(_BYTE *)(v14 + 18) & 8) == 0 )
    return -1073741811;
  if ( (*(_BYTE *)(v14 + 144) & 0x20) != 0 )
    return -1073741811;
  v15 = -(GetRedirectionBitmap((int)a1) != 0);
  RedirectionFlags = GetRedirectionFlags();
  v17 = -v15;
  if ( v17 )
  {
    if ( (RedirectionFlags & 8) == 0 )
      return -1073741811;
  }
  v18 = a9;
  if ( (a9 & 8) != 0 )
  {
    if ( a4 )
    {
      v19 = (_DWORD *)*((_DWORD *)a1 + 5);
      v18 = a9;
      if ( *(_DWORD *)a4 != v19[15] - v19[13] || *(_DWORD *)(a4 + 4) != v19[16] - v19[14] )
      {
        UserSetLastError((struct _NT_TIB *)0x5B6);
        return -2143420415;
      }
    }
    a9 = v18 & 0xFFFFFFF7;
  }
  UpdateWindowRects((struct tagWND *)a4, &v29, (const struct tagSIZE *)&v29.y, v25, v27);
  if ( v17 )
  {
    if ( v29.x )
    {
      v21 = RecreateRedirectionBitmap((int)a1, 0, 0, 0, 0, &v30);
      v12 = v30;
      updated = v21;
      if ( v21 < 0 )
        goto LABEL_41;
    }
  }
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  if ( v29.x || v29.y )
  {
    if ( IsWindowDesktopComposed(a1) )
      DwmChildRectChange(a1);
    if ( gcountPWO )
    {
      InvalidateGDIWindows(a1);
      GreClientRgnUpdated(1);
    }
    GreUpdateSpriteVisRgn(*(_DWORD *)(_gpDispInfo + 20), 0);
  }
  v23 = a9;
  if ( v32 )
    v23 = a9 | 0x20000000;
  updated = UpdateSprite(*(_DWORD *)(_gpDispInfo + 20), a1, v32, v36, v31, a4, v32, v35, a7, v34, v23, v33);
  if ( updated >= 0 && v29.y )
    OffsetChildren(
      (int)a1,
      *(_DWORD *)(*((_DWORD *)a1 + 5) + 52) - v37,
      *(_DWORD *)(*((_DWORD *)a1 + 5) + 56) - v38,
      0,
      v24);
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  if ( updated < 0 )
  {
LABEL_41:
    tagWND::RedirectedRecttagWNDrcWindow::operator=((_DWORD *)a1 + 17, &v37);
    tagWND::RedirectedRecttagWNDrcClient::operator=((_DWORD *)a1 + 18, v41);
    if ( v12 && !RestoreOldRedirectionBitmap(v26, v28) )
      DeleteOrSetRedirectionBitmap((int)a1, v12, 1);
  }
  else
  {
    if ( v12 )
      DeleteOrSetRedirectionBitmap((int)a1, v12, 1);
    if ( v29.x || v29.y )
      GenerateMouseMove(0);
    if ( (a9 & 0x20) == 0 || v29.x || v29.y )
      xxxWindowEvent(0x800Bu, a1, 0, 0, _gdwDeferWinEvent != 0 ? 3 : 1);
  }
  return updated;
}
