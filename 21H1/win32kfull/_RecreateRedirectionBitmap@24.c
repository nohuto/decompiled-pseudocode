/*
 * XREFs of _RecreateRedirectionBitmap@24 @ 0x23D22
 * Callers:
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     _NtUserHwndQueryRedirectionInfo@16 @ 0xB96F4 (_NtUserHwndQueryRedirectionInfo@16.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     _UserRecreateRedirectionBitmap@4 @ 0x1539FA (_UserRecreateRedirectionBitmap@4.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _GreAdjustSpriteDirtyAccum@24 @ 0x1FEC6 (_GreAdjustSpriteDirtyAccum@24.c)
 *     _GreNotifyDirtySprite@4 @ 0x20098 (_GreNotifyDirtySprite@4.c)
 *     _GetRedirectionFlags@4 @ 0x20168 (_GetRedirectionFlags@4.c)
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     ?SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z @ 0x20C0E (-SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z.c)
 *     _HintSpriteShape@16 @ 0x23F60 (_HintSpriteShape@16.c)
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _ChangeRedirectionParentInDCEs@8 @ 0x7324A (_ChangeRedirectionParentInDCEs@8.c)
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z @ 0x7A92E (-BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall RecreateRedirectionBitmap(
        int a1,
        struct tagBITMAP *a2,
        struct tagBITMAP *a3,
        int a4,
        unsigned int a5,
        HSURF *a6)
{
  LONG v7; // edi
  struct HLFONT__ *RedirectionBitmap; // esi
  int v9; // edx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  struct HLFONT__ *right; // edi
  int v14; // eax
  int v15; // esi
  struct tagBITMAP *v16; // esi
  int v17; // ecx
  HWND v18; // edx
  HSURF v19; // esi
  const struct tagBITMAP *v21; // [esp-8h] [ebp-80h]
  HBITMAP v22; // [esp+0h] [ebp-78h]
  int v23; // [esp+4h] [ebp-74h]
  struct HLFONT__ *v24; // [esp+Ch] [ebp-6Ch]
  int v25; // [esp+10h] [ebp-68h] BYREF
  struct tagBITMAP *v26; // [esp+14h] [ebp-64h]
  struct _RECTL v27; // [esp+18h] [ebp-60h] BYREF
  int v28; // [esp+28h] [ebp-50h]
  int v29; // [esp+2Ch] [ebp-4Ch]
  HSURF *v30; // [esp+30h] [ebp-48h]
  struct HBITMAP__ v31[6]; // [esp+34h] [ebp-44h] BYREF
  struct HBITMAP__ v32[6]; // [esp+4Ch] [ebp-2Ch] BYREF
  struct HDEV__ v33; // [esp+64h] [ebp-14h] BYREF
  int v34; // [esp+68h] [ebp-10h]
  int unused; // [esp+6Ch] [ebp-Ch]
  int v36; // [esp+70h] [ebp-8h]

  v30 = a6;
  v26 = a2;
  memset(v32, 0, sizeof(v32));
  v27.right = 0;
  memset(v31, 0, sizeof(v31));
  v7 = IsDesktopWindow(a1);
  v28 = 0;
  v27.left = v7;
  v29 = 0;
  RedirectionBitmap = (struct HLFONT__ *)GetRedirectionBitmap(a1);
  LOBYTE(v9) = 5;
  v24 = RedirectionBitmap;
  v10 = HmgShareLockCheck(RedirectionBitmap, v9);
  v25 = v10;
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 72);
    DEC_SHARE_REF_CNT(v10);
    if ( (v11 & 0x800000) != 0 && a4 && !v7 )
    {
      if ( v30 )
        *v30 = 0;
      return 0;
    }
    RedirectionBitmap = v24;
  }
  else
  {
    SURFREF::vUnlock((SURFREF *)&v25);
  }
  v12 = CreateOrGetRedirectionBitmap((HWND *)a1, 1, a5, (HSURF *)&v27.right);
  right = (struct HLFONT__ *)v27.right;
  v25 = v12;
  if ( v12 < 0
    || (!SetRedirectionBitmap(v27.right, (_DWORD *)a1, 0, v22, v23)
      ? (DeleteOrSetRedirectionBitmap(a1, (HSURF)right, 1), v14 = -1073741801, v25 = -1073741801)
      : (v14 = v25),
        v14 < 0) )
  {
    SetRedirectionBitmap(0, (_DWORD *)a1, 0, v22, v23);
    v29 = 1;
  }
  if ( right && !v27.left )
  {
    if ( RedirectionBitmap )
    {
      GreExtGetObjectW(RedirectionBitmap, v32);
      v28 = 1;
    }
    GreExtGetObjectW(right, v31);
  }
  if ( (GetRedirectionFlags() & 1) != 0
    && (v15 = v27.left != 0 ? 0 : 2, HintSpriteShape(*(_DWORD *)(_gpDispInfo + 20), a1, 0, v15), right) )
  {
    HintSpriteShape(*(_DWORD *)(_gpDispInfo + 20), a1, right, v15);
    v16 = v26;
    if ( !v27.left )
    {
      v17 = *(_DWORD *)(a1 + 20);
      v18 = *(HWND *)a1;
      v27.right = *(_DWORD *)(v17 + 52);
      v27.bottom = *(_DWORD *)(v17 + 56);
      unused = v31[1].unused;
      v36 = v31[2].unused;
      v33.unused = 0;
      v34 = 0;
      v27.left = -(int)v26;
      v27.top = -(int)a3;
      GreAdjustSpriteDirtyAccum(
        *(HWND *)(_gpDispInfo + 20),
        (int)v18,
        (struct SPRITE *)&v33,
        v17,
        &v27,
        (struct _RECTL *)&v27.right);
    }
  }
  else
  {
    v16 = v26;
  }
  if ( v28 )
  {
    v21 = v16;
    v19 = (HSURF)v24;
    BltOldRedirectionBitsToNewBitmap(right, v32, v31, v21, a3, (int)v22, v23);
    GreNotifyDirtySprite();
  }
  else
  {
    v19 = (HSURF)v24;
  }
  ChangeRedirectionParentInDCEs(a1, v29);
  if ( v30 )
  {
    *v30 = v19;
  }
  else if ( v19 )
  {
    DeleteOrSetRedirectionBitmap(a1, v19, 1);
  }
  return v25;
}
