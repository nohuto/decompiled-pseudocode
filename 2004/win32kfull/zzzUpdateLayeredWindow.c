/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C0024D74
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C00252C0 (NtUserUpdateLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013514C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzUpdateShadowAlpha @ 0x1C013529C (zzzUpdateShadowAlpha.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E7FA4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x1C023F0F0 (zzzMoveShadow.c)
 * Callees:
 *     UpdateSprite @ 0x1C00201F0 (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C0021060 (GetRedirectionBitmap.c)
 *     GetRedirectionFlags @ 0x1C0024D40 (GetRedirectionFlags.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0025054 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C004F130 (DeleteOrSetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0072450 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C00753E0 (GreClientRgnUpdated.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     DwmChildRectChange @ 0x1C00A5C78 (DwmChildRectChange.c)
 *     OffsetChildren @ 0x1C00B04D4 (OffsetChildren.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E7E1C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01E8E70 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        struct tagWND *a1,
        HDC a2,
        const struct tagPOINT *a3,
        struct tagSIZE *a4,
        HDC a5,
        struct tagPOINT *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct tagRECT *a10)
{
  HBITMAP v10; // rdi
  struct tagSIZE *v11; // r14
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __int64 v18; // rcx
  BOOL v19; // esi
  char RedirectionFlags; // al
  unsigned int v21; // r12d
  int v22; // r15d
  __int64 v23; // r8
  int v24; // esi
  int v25; // r13d
  int updated; // r14d
  unsigned int v27; // ecx
  _DWORD *v29; // rdx
  int v30; // eax
  int v31; // [rsp+20h] [rbp-B1h]
  int v32; // [rsp+60h] [rbp-71h] BYREF
  int v33; // [rsp+64h] [rbp-6Dh] BYREF
  __int64 v34; // [rsp+68h] [rbp-69h] BYREF
  struct tagSIZE *v35; // [rsp+70h] [rbp-61h]
  HDC v36; // [rsp+78h] [rbp-59h]
  struct tagRECT *v37; // [rsp+80h] [rbp-51h]
  struct _BLENDFUNCTION *v38; // [rsp+88h] [rbp-49h]
  struct tagPOINT *v39; // [rsp+90h] [rbp-41h]
  int v40[2]; // [rsp+98h] [rbp-39h]
  HDC v41; // [rsp+A0h] [rbp-31h]
  __int128 v42; // [rsp+A8h] [rbp-29h]
  __int128 v43; // [rsp+B8h] [rbp-19h]

  v10 = 0LL;
  v32 = 0;
  v11 = a4;
  v33 = 0;
  v36 = a5;
  v39 = a6;
  v38 = a8;
  v37 = a10;
  v14 = *((_QWORD *)a1 + 5);
  v35 = a4;
  *(_QWORD *)v40 = a3;
  v41 = a2;
  v15 = *(_OWORD *)(v14 + 88);
  v34 = 0LL;
  v16 = *(_OWORD *)(v14 + 104);
  v42 = v15;
  v43 = v16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v17 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v17 + 232) & 0x40) != 0 )
    {
      if ( (*(_BYTE *)(v17 + 27) & 0x20) != 0 )
      {
        UnsetRedirectedWindow(a1);
        v17 = *((_QWORD *)a1 + 5);
      }
      *(_DWORD *)(v17 + 232) &= ~0x40u;
    }
  }
  v18 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v18 + 26) & 8) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v18 + 232) & 0x20) != 0 )
    return 3221225485LL;
  v19 = GetRedirectionBitmap((__int64)a1) != 0;
  RedirectionFlags = GetRedirectionFlags((__int64)a1);
  if ( v19 )
  {
    if ( (RedirectionFlags & 8) == 0 )
      return 3221225485LL;
  }
  v21 = a9;
  if ( (a9 & 8) == 0 )
  {
LABEL_7:
    UpdateWindowRects(a1, a3, v11, &v32, &v33);
    v22 = v32;
    if ( v19 && v32 )
    {
      v30 = RecreateRedirectionBitmap(a1, 0, (__int64)&v34);
      v10 = (HBITMAP)v34;
      updated = v30;
      if ( v30 < 0 )
        goto LABEL_47;
      v11 = v35;
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v24 = v33;
    if ( v22 || v33 )
    {
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
        DwmChildRectChange(a1);
      if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
      {
        InvalidateGDIWindows(a1);
        GreClientRgnUpdated(1LL);
      }
      GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
    }
    v25 = v21 | 0x20000000;
    if ( !v36 )
      v25 = v21;
    updated = UpdateSprite(
                *(HDEV *)(gpDispInfo + 40LL),
                a1,
                v23,
                v41,
                *(struct tagPOINT **)v40,
                v11,
                v36,
                v39,
                a7,
                v38,
                v25,
                v37);
    if ( updated >= 0 && v24 )
      OffsetChildren(a1, v31);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( updated >= 0 )
    {
      if ( v10 )
        DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
      if ( v22 || v24 )
        GenerateMouseMove(0LL);
      if ( (v25 & 0x20) == 0 || v22 || v24 )
      {
        v27 = 3;
        if ( !gdwDeferWinEvent )
          v27 = 1;
        xxxWindowEvent(0x800Bu, v27);
      }
      return (unsigned int)updated;
    }
LABEL_47:
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v42;
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v43;
    if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap(a1, v10) )
      DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
    return (unsigned int)updated;
  }
  if ( !v11 || (v29 = (_DWORD *)*((_QWORD *)a1 + 5), v11->cx == v29[24] - v29[22]) && v11->cy == v29[25] - v29[23] )
  {
    v21 = a9 & 0xFFFFFFF7;
    goto LABEL_7;
  }
  UserSetLastError(1462LL);
  return 2151546881LL;
}
