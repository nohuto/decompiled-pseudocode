/*
 * XREFs of ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172
 * Callers:
 *     _xxxDesktopWndProc@16 @ 0x16118 (_xxxDesktopWndProc@16.c)
 * Callees:
 *     _xxxEndPaint@8 @ 0x12580 (_xxxEndPaint@8.c)
 *     _GreGetSystemPaletteUse@4 @ 0x125E2 (_GreGetSystemPaletteUse@4.c)
 *     _GreRealizeDefaultPalette@8 @ 0x12656 (_GreRealizeDefaultPalette@8.c)
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _xxxSetWindowLong@20 @ 0x3EF3C (_xxxSetWindowLong@20.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     _xxxSetThreadDesktop@8 @ 0x7D894 (_xxxSetThreadDesktop@8.c)
 *     _SetRITTimer@16 @ 0xA4BF6 (_SetRITTimer@16.c)
 *     _xxxDWP_UpdateUIState@12 @ 0xA50F8 (_xxxDWP_UpdateUIState@12.c)
 *     _xxxInternalPaintDesktop@12 @ 0xE7CB0 (_xxxInternalPaintDesktop@12.c)
 *     _SetDesktopPattern@8 @ 0xE9318 (_SetDesktopPattern@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxRealizeDesktop@4 @ 0x154B87 (_xxxRealizeDesktop@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __userpurge xxxDesktopWndProcWorker@<eax>(
        unsigned int a1@<edx>,
        struct tagVWPL **a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  int v7; // edi
  struct tagVWPL *v9; // ecx
  __int16 v10; // ax
  unsigned int v11; // edx
  struct tagVWPL *v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // esi
  HANDLE CurrentProcessId; // eax
  HANDLE CurrentThreadId; // eax
  struct tagVWPL *i; // esi
  int v21; // ebx
  ULONG_PTR v22; // ecx
  ULONG_PTR v23; // ecx
  ULONG_PTR v24; // [esp-4h] [ebp-7Ch]
  unsigned int v25; // [esp+10h] [ebp-68h]
  struct tagVWPL *v26; // [esp+10h] [ebp-68h]
  unsigned int v27; // [esp+14h] [ebp-64h]
  struct tagVWPL *v28; // [esp+14h] [ebp-64h]
  int v29; // [esp+18h] [ebp-60h] BYREF
  ULONG_PTR v30; // [esp+1Ch] [ebp-5Ch]
  int v31; // [esp+20h] [ebp-58h]
  struct tagWND *v32; // [esp+24h] [ebp-54h]
  _DWORD v33[2]; // [esp+28h] [ebp-50h] BYREF
  _DWORD v34[17]; // [esp+30h] [ebp-48h] BYREF

  v7 = (int)a3;
  v33[0] = _gptiCurrent;
  v32 = a3;
  memset(v34, 0, 0x40u);
  v9 = a2[5];
  if ( (*((_DWORD *)v9 + 36) & 0x800) != 0 )
    return 0;
  v10 = *((_WORD *)v9 + 15);
  v11 = 669;
  if ( v10 != 669 )
  {
    if ( v10 )
      return 0;
    if ( a1 != 1 )
      return xxxDefWindowProc(a2, a1, v7, a4);
    v11 = *((_DWORD *)v9 + 40);
    v25 = *(unsigned __int16 *)(_gpsi + 170);
    if ( v11 + 204 >= v25 )
    {
      v28 = a2[41];
      if ( v28 )
      {
        v16 = 0;
        if ( v11 )
        {
          while ( 1 )
          {
            v7 = (int)v32;
            if ( *((_BYTE *)v28 + v16) )
              break;
            if ( ++v16 >= v11 )
              goto LABEL_24;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v9 = a2[5];
        }
LABEL_24:
        memset(a2[41], 0, *((_DWORD *)v9 + 40));
      }
    }
    else
    {
      if ( v11 + *((_DWORD *)v9 + 32) + 204 < v25 )
        return 0;
      v27 = v25 - 204;
      v13 = (struct tagVWPL *)Win32AllocPoolZInit(v25 - 204, 1937208149);
      v26 = v13;
      if ( !v13 )
        return 0;
      v11 = (unsigned int)a2[41];
      if ( v11 )
      {
        v14 = 0;
        v15 = *((_DWORD *)a2[5] + 40);
        if ( v15 )
        {
          while ( !*(_BYTE *)(v11 + v14) )
          {
            if ( ++v14 >= v15 )
              goto LABEL_16;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        }
LABEL_16:
        Win32FreePool(a2[41]);
        v13 = v26;
      }
      a2[41] = v13;
      *((_DWORD *)a2[5] + 40) = v27;
    }
    *((_WORD *)a2[5] + 15) = 669;
  }
  if ( !a2[14] )
  {
    if ( a1 != 128 )
      return xxxDefWindowProc(a2, a1, v7, a4);
    return 0;
  }
  if ( a1 > 0x80 )
  {
    switch ( a1 )
    {
      case 0xA1u:
        return 0;
      case 0x112u:
        if ( v7 == 61760 )
          return xxxDefWindowProc(a2, 274, 61760, a4);
        return 0;
      case 0x128u:
        return xxxDWP_UpdateUIState(a4);
      case 0x203u:
        a1 = 274;
        v7 = 61744;
        return xxxDefWindowProc(a2, a1, v7, a4);
    }
    if ( a1 != 783 )
    {
      if ( a1 != 785 )
      {
        if ( a1 != 1025 )
          return xxxDefWindowProc(a2, a1, v7, a4);
        if ( !_gProtocolType && WPP_MAIN_CB.DeviceQueue.Lock && !gtmridMouseTrails )
          gtmridMouseTrails = SetRITTimer(0, 20, HideMouseTrails, 0);
        return 0;
      }
      if ( *a2 == (struct tagVWPL *)v7 )
        return 0;
    }
    xxxRealizeDesktop(a2);
    return 0;
  }
  if ( a1 == 128 )
    return 0;
  if ( a1 > 0x15 )
  {
    switch ( a1 )
    {
      case ':':
        v21 = v33[0];
        v31 = 0;
        v22 = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12);
        v29 = *(_DWORD *)(v33[0] + 228);
        *(_DWORD *)(v33[0] + 228) = &v29;
        v30 = v22;
        if ( v22 )
          HMLockObject(v22);
        LOBYTE(v11) = 2;
        xxxMakeWindowForegroundWithState(*(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12), v11);
        ThreadUnlock1();
        v23 = gspwndAltTab;
        if ( gspwndAltTab )
        {
          v29 = *(_DWORD *)(v21 + 228);
          v24 = gspwndAltTab;
          *(_DWORD *)(v21 + 228) = &v29;
          v30 = v23;
          HMLockObject(v24);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(gspwndAltTab, 0, 0, 0, 0, 0, 1, 1);
          ThreadUnlock1();
        }
        break;
      case 'F':
        if ( (*(_BYTE *)(a4 + 24) & 4) == 0 && !*(_DWORD *)(a4 + 4) )
        {
          xxxSetThreadDesktop(0, _grpdeskRitInput);
          if ( GreGetSystemPaletteUse(*(HDC *)(_gpDispInfo + 28)) != 1 )
            GreRealizeDefaultPalette(*(HDC *)(_gpDispInfo + 28));
          if ( (*(_BYTE *)(_grpdeskRitInput + 24) & 1) != 0 )
          {
            xxxSendNotifyMessage(-1, 785, *a2, 0, 1);
            *(_DWORD *)(_grpdeskRitInput + 24) &= ~1u;
          }
        }
        break;
      case 'Q':
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v33);
        for ( i = a2[15]; i; i = (struct tagVWPL *)*((_DWORD *)i + 12) )
          xxxSendNotifyMessage(i, 81, v7, a4, 1);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v33);
        break;
      default:
        return xxxDefWindowProc(a2, a1, v7, a4);
    }
    return 0;
  }
  switch ( a1 )
  {
    case 0x15u:
      xxxRedrawWindow(0, 133);
      return 0;
    case 1u:
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v17 = CreateProfileUserName(&v29);
      SetDesktopPattern(v17, 0);
      FreeProfileUserName(v17, &v29);
      xxxSendNotifyMessage(a2, 21, 0, 0, 1);
      xxxRealizeDesktop(a2);
      CurrentProcessId = PsGetCurrentProcessId();
      xxxSetWindowLong(CurrentProcessId, 0, 0);
      CurrentThreadId = PsGetCurrentThreadId();
      xxxSetWindowLong(CurrentThreadId, 0, 0);
      return 0;
    case 0xFu:
      xxxBeginPaint(a2);
      xxxEndPaint(a2, v34);
      return 0;
    case 0x10u:
      return 0;
  }
  if ( a1 != 20 )
    return xxxDefWindowProc(a2, a1, v7, a4);
  if ( !IsWindowDesktopComposed(a2) )
    xxxInternalPaintDesktop(1);
  return 1;
}
