/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C003C778
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00C7E50 (NtUserUpdateLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013709C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzUpdateShadowAlpha @ 0x1C01371EC (zzzUpdateShadowAlpha.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E72E4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x1C023DE50 (zzzMoveShadow.c)
 * Callees:
 *     GetRedirectionFlags @ 0x1C003C5D8 (GetRedirectionFlags.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C003C60C (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     UpdateSprite @ 0x1C003CF2C (UpdateSprite.c)
 *     OffsetChildren @ 0x1C003F1FC (OffsetChildren.c)
 *     GetRedirectionBitmap @ 0x1C003F430 (GetRedirectionBitmap.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0043840 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C00456A8 (GreClientRgnUpdated.c)
 *     UnsetRedirectedWindow @ 0x1C00C11EC (UnsetRedirectedWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C135C (DeleteOrSetRedirectionBitmap.c)
 *     DwmChildRectChange @ 0x1C00CB830 (DwmChildRectChange.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E715C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01E81B0 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        struct tagWND *a1,
        __int64 a2,
        const struct tagPOINT *a3,
        const struct tagSIZE *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  HBITMAP v10; // rdi
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  BOOL v21; // esi
  char RedirectionFlags; // al
  char v23; // r12
  int v24; // r15d
  __int64 v25; // r8
  int v26; // esi
  char v27; // r13
  int updated; // r14d
  unsigned int v29; // ecx
  _DWORD *v31; // rdx
  int v32; // eax
  int v33; // [rsp+20h] [rbp-B1h]
  int v34; // [rsp+60h] [rbp-71h] BYREF
  int v35; // [rsp+64h] [rbp-6Dh] BYREF
  __int64 v36[2]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v37; // [rsp+78h] [rbp-59h]
  __int64 v38; // [rsp+80h] [rbp-51h]
  __int64 v39; // [rsp+88h] [rbp-49h]
  __int64 v40; // [rsp+90h] [rbp-41h]
  int v41[2]; // [rsp+98h] [rbp-39h]
  __int64 v42; // [rsp+A0h] [rbp-31h]
  __int128 v43; // [rsp+A8h] [rbp-29h]
  __int128 v44; // [rsp+B8h] [rbp-19h]

  v10 = 0LL;
  v34 = 0;
  v35 = 0;
  v37 = a5;
  v40 = a6;
  v39 = a8;
  v38 = a10;
  v14 = *((_QWORD *)a1 + 5);
  v36[1] = (__int64)a4;
  *(_QWORD *)v41 = a3;
  v42 = a2;
  v15 = *(_OWORD *)(v14 + 88);
  v36[0] = 0LL;
  v16 = *(_OWORD *)(v14 + 104);
  v43 = v15;
  v44 = v16;
  v17 = IsWindowDesktopComposed(a1);
  v18 = 1LL;
  if ( v17 )
  {
    v19 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v19 + 232) & 0x40) != 0 )
    {
      if ( (*(_BYTE *)(v19 + 27) & 0x20) != 0 )
      {
        UnsetRedirectedWindow(a1);
        v19 = *((_QWORD *)a1 + 5);
      }
      *(_DWORD *)(v19 + 232) &= ~0x40u;
    }
  }
  v20 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v20 + 26) & 8) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v20 + 232) & 0x20) != 0 )
    return 3221225485LL;
  v21 = GetRedirectionBitmap(a1, v18) != 0;
  RedirectionFlags = GetRedirectionFlags((__int64)a1);
  if ( v21 )
  {
    if ( (RedirectionFlags & 8) == 0 )
      return 3221225485LL;
  }
  v23 = a9;
  if ( (a9 & 8) != 0 )
  {
    if ( a4 )
    {
      v31 = (_DWORD *)*((_QWORD *)a1 + 5);
      if ( a4->cx != v31[24] - v31[22] || a4->cy != v31[25] - v31[23] )
      {
        UserSetLastError(1462LL);
        return 2151546881LL;
      }
    }
    v23 = a9 & 0xF7;
  }
  UpdateWindowRects(a1, a3, a4, &v34, &v35);
  v24 = v34;
  if ( v21 )
  {
    if ( v34 )
    {
      v32 = RecreateRedirectionBitmap(a1, 0, (__int64)v36);
      v10 = (HBITMAP)v36[0];
      updated = v32;
      if ( v32 < 0 )
        goto LABEL_47;
    }
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v26 = v35;
  if ( v24 || v35 )
  {
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
      DwmChildRectChange(a1);
    if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      InvalidateGDIWindows(a1);
      GreClientRgnUpdated(1LL);
    }
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
  }
  v27 = v23;
  if ( !v37 )
    v27 = v23;
  v33 = v41[0];
  updated = UpdateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v25, v42);
  if ( updated >= 0 && v26 )
    OffsetChildren(a1, v33);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( updated < 0 )
  {
LABEL_47:
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v43;
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v44;
    if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap(a1, v10) )
      DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
  }
  else
  {
    if ( v10 )
      DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
    if ( v24 || v26 )
      GenerateMouseMove(0LL);
    if ( (v27 & 0x20) == 0 || v24 || v26 )
    {
      v29 = 3;
      if ( !gdwDeferWinEvent )
        v29 = 1;
      xxxWindowEvent(0x800Bu, v29);
    }
  }
  return (unsigned int)updated;
}
