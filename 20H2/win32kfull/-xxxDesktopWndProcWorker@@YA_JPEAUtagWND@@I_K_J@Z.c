/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C
 * Callers:
 *     xxxDesktopWndProc @ 0x1C0073EA0 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxDefWindowProc @ 0x1C00743E0 (xxxDefWindowProc.c)
 *     SetDesktopPattern @ 0x1C007BC2C (SetDesktopPattern.c)
 *     xxxSetThreadDesktop @ 0x1C007DFF0 (xxxSetThreadDesktop.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C7408 (xxxDWP_UpdateUIState.c)
 *     SetRITTimer @ 0x1C00C9BD0 (SetRITTimer.c)
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 *     xxxSetWindowLong @ 0x1C00F0128 (xxxSetWindowLong.c)
 *     xxxEndPaint @ 0x1C00F4F60 (xxxEndPaint.c)
 *     GreRealizeDefaultPalette @ 0x1C0121FD0 (GreRealizeDefaultPalette.c)
 *     xxxInternalPaintDesktop @ 0x1C0122BC4 (xxxInternalPaintDesktop.c)
 *     GreGetSystemPaletteUse @ 0x1C0123848 (GreGetSystemPaletteUse.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C015BB84 (xxxValidateClassAndSize.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     xxxRealizeDesktop @ 0x1C01E93B8 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 i; // rbx
  struct tagWND *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct tagWND *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // [rsp+50h] [rbp-89h] BYREF
  __int64 v21; // [rsp+58h] [rbp-81h] BYREF
  struct tagWND *v22; // [rsp+60h] [rbp-79h]
  __int64 v23; // [rsp+68h] [rbp-71h]
  char v24[8]; // [rsp+70h] [rbp-69h] BYREF
  __int128 v25; // [rsp+78h] [rbp-61h] BYREF
  __int64 v26; // [rsp+88h] [rbp-51h]
  _BYTE v27[72]; // [rsp+90h] [rbp-49h] BYREF

  memset(v27, 0, sizeof(v27));
  v20 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize(a1, 669, 1, (__int64)&v20) )
    return v20;
  if ( !*((_QWORD *)a1 + 13) )
  {
    if ( a2 != 128 )
      return xxxDefWindowProc(a1);
    return 0LL;
  }
  if ( a2 > 0x80 )
  {
    if ( a2 != 161 )
    {
      switch ( a2 )
      {
        case 0x112u:
          if ( a3 == 61760 )
            return xxxDefWindowProc(a1);
          break;
        case 0x128u:
          return xxxDWP_UpdateUIState(a1, a3, a4);
        case 0x203u:
          return xxxDefWindowProc(a1);
        case 0x30Fu:
          goto LABEL_49;
        case 0x311u:
          if ( *(_QWORD *)a1 != a3 )
LABEL_49:
            xxxRealizeDesktop(a1);
          break;
        case 0x401u:
          if ( !gProtocolType && LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) && !WPP_MAIN_CB.SecurityDescriptor )
            WPP_MAIN_CB.SecurityDescriptor = (PSECURITY_DESCRIPTOR)SetRITTimer(0LL, 20LL, HideMouseTrails, 0LL);
          return 0LL;
        default:
          return xxxDefWindowProc(a1);
      }
    }
    return 0LL;
  }
  switch ( a2 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      v25 = 0LL;
      v26 = 0LL;
      v19 = CreateProfileUserName(&v25);
      SetDesktopPattern(v19, 0LL);
      FreeProfileUserName(v19, &v25);
      xxxSendNotifyMessage((__int64)a1, 0x15u, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      PsGetCurrentProcessId();
      xxxSetWindowLong(a1, 0);
      PsGetCurrentThreadId();
      xxxSetWindowLong(a1, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1);
      xxxEndPaint(a1);
      return 0LL;
    case 0x10u:
      return 0LL;
  }
  if ( a2 != 20 )
  {
    switch ( a2 )
    {
      case 0x15u:
        xxxRedrawWindow(a1, 0LL, 0LL, 133);
        break;
      case 0x3Au:
        v23 = 0LL;
        v11 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        v21 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v21;
        v22 = v11;
        if ( v11 )
          HMLockObject(v11);
        LOBYTE(v8) = 2;
        xxxMakeWindowForegroundWithState(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v8);
        ThreadUnlock1(v13, v12, v14);
        v15 = gspwndAltTab;
        if ( gspwndAltTab )
        {
          v21 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v21;
          v22 = v15;
          HMLockObject(v15);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((unsigned __int64)gspwndAltTab, 0x3Au, 0LL, 0LL, 0, 0, 0LL, 1, 1);
          ThreadUnlock1(v17, v16, v18);
        }
        break;
      case 0x46u:
        if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
        {
          xxxSetThreadDesktop(0LL, grpdeskRitInput);
          if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(gpDispInfo + 56LL)) != 1 )
            GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL));
          if ( (*(_DWORD *)(grpdeskRitInput + 48LL) & 1) != 0 )
          {
            xxxSendNotifyMessage(-1LL, 0x311u, *(_QWORD *)a1, 0LL, 1);
            *(_DWORD *)(grpdeskRitInput + 48LL) &= ~1u;
          }
        }
        break;
      case 0x51u:
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
        for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
          xxxSendNotifyMessage(i, 0x51u, a3, (struct _LARGE_STRING *)a4, 1);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
        break;
      default:
        return xxxDefWindowProc(a1);
    }
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop(a1, a3, 1LL);
  return 1LL;
}
