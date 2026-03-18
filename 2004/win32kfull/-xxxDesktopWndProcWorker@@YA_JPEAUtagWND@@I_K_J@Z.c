/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC
 * Callers:
 *     xxxDesktopWndProc @ 0x1C00BB680 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     xxxEndPaint @ 0x1C005D6C0 (xxxEndPaint.c)
 *     xxxDWP_UpdateUIState @ 0x1C00603D8 (xxxDWP_UpdateUIState.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     xxxBeginPaint @ 0x1C008B1A8 (xxxBeginPaint.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C008F2E4 (xxxClientFreeWindowClassExtraBytes.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C008F69C (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetWindowLong @ 0x1C00A488C (xxxSetWindowLong.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 *     GreRealizeDefaultPalette @ 0x1C00BBEF8 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C00BC03C (GreGetSystemPaletteUse.c)
 *     xxxSetThreadDesktop @ 0x1C00BD740 (xxxSetThreadDesktop.c)
 *     xxxInternalPaintDesktop @ 0x1C00BEFFC (xxxInternalPaintDesktop.c)
 *     SetDesktopPattern @ 0x1C00FECF0 (SetDesktopPattern.c)
 *     SetRITTimer @ 0x1C010A3A0 (SetRITTimer.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ??$?B_N@RedirectedFieldpExtraBytes@tagWND@@QEBA_NXZ @ 0x1C01E9A50 (--$-B_N@RedirectedFieldpExtraBytes@tagWND@@QEBA_NXZ.c)
 *     xxxRealizeDesktop @ 0x1C01EA028 (xxxRealizeDesktop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // r15
  __int64 v8; // r12
  char *v9; // r8
  __int64 v10; // rdx
  __int16 v11; // ax
  unsigned __int64 v12; // r8
  unsigned int v13; // edx
  unsigned int v15; // r9d
  unsigned int v16; // r10d
  unsigned int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  unsigned int v21; // r8d
  unsigned int v22; // edx
  void *v23; // r12
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 i; // rbx
  struct tagWND *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct tagWND *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  unsigned int CurrentProcessId; // eax
  unsigned int CurrentThreadId; // eax
  unsigned int v42; // [rsp+50h] [rbp-128h]
  _QWORD *v43; // [rsp+58h] [rbp-120h]
  __int64 v44; // [rsp+60h] [rbp-118h]
  unsigned __int64 v45; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+88h] [rbp-F0h] BYREF
  struct tagWND *v47; // [rsp+90h] [rbp-E8h]
  __int64 v48; // [rsp+98h] [rbp-E0h]
  unsigned int v49; // [rsp+A0h] [rbp-D8h]
  __int64 v50; // [rsp+A8h] [rbp-D0h]
  struct tagWND *v51; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 v52; // [rsp+B8h] [rbp-C0h]
  __int128 v53; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-A8h]
  __int64 v55; // [rsp+D8h] [rbp-A0h]
  _QWORD v56[10]; // [rsp+E0h] [rbp-98h] BYREF

  v5 = a3;
  v51 = a1;
  v52 = a3;
  v45 = a4;
  v8 = gptiCurrent;
  v50 = gptiCurrent;
  memset(v56, 0, 0x48uLL);
  v9 = (char *)a1 + 40;
  v43 = (_QWORD *)((char *)a1 + 40);
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v10 + 232) & 0x800) != 0 )
    return 0LL;
  v11 = *(_WORD *)(v10 + 42);
  if ( v11 != 669 )
  {
    if ( v11 )
      return 0LL;
    if ( a2 != 1 )
    {
LABEL_5:
      v12 = v5;
      v13 = a2;
      return xxxDefWindowProc((__int64 *)a1, v13, v12, a4);
    }
    v15 = *(_DWORD *)(v10 + 252);
    v16 = *(unsigned __int16 *)(gpsi + 334LL);
    if ( v15 + 320 >= v16 )
    {
      v28 = *((_QWORD *)a1 + 35);
      if ( v28 )
      {
        v29 = 0LL;
        if ( v15 )
        {
          while ( !*(_BYTE *)((unsigned int)v29 + v28) )
          {
            v29 = (unsigned int)(v29 + 1);
            if ( (unsigned int)v29 >= v15 )
              goto LABEL_32;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v10);
          v10 = *((_QWORD *)a1 + 5);
        }
LABEL_32:
        memset(*((void **)a1 + 35), 0, *(unsigned int *)(v10 + 252));
        goto LABEL_33;
      }
    }
    else
    {
      if ( v15 + *(_DWORD *)(v10 + 200) + 320 < v16 )
        return 0LL;
      v17 = v16 - 320;
      v18 = Win32AllocPoolZInit(v16 - 320, 1937208149LL);
      v44 = v18;
      if ( !v18 )
        return 0LL;
      v20 = *((_QWORD *)a1 + 35);
      if ( v20 )
      {
        v21 = 0;
        if ( *(_DWORD *)(*v43 + 252LL) )
        {
          while ( !*(_BYTE *)(v21 + v20) )
          {
            if ( ++v21 >= *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL) )
              goto LABEL_16;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(*v43, v19);
        }
LABEL_16:
        Win32FreePool(*((_QWORD *)a1 + 35));
        v18 = v44;
      }
      *((_QWORD *)a1 + 35) = v18;
      *(_DWORD *)(*v43 + 252LL) = v17;
      v22 = *(_DWORD *)(*v43 + 200LL);
      v42 = v22;
      if ( v22 )
      {
        v23 = (void *)xxxClientAllocWindowClassExtraBytes(v22);
        if ( !v23 )
          return 0LL;
      }
      else
      {
        v23 = 0LL;
      }
      if ( (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator<bool> bool((char *)a1 + 320) )
      {
        if ( v23 )
        {
          v25 = *(_QWORD *)v9;
          v55 = *(_QWORD *)(*(_QWORD *)v9 + 296LL);
          v49 = *(_DWORD *)(v25 + 252);
          memmove(v23, (const void *)(v55 + v49), v24);
        }
        v26 = *((_QWORD *)a1 + 5);
        v27 = *(_QWORD *)(v26 + 296);
        *(_QWORD *)(v26 + 296) = v23;
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = v42;
        xxxClientFreeWindowClassExtraBytes((__int64)a1, v27);
        v8 = gptiCurrent;
LABEL_33:
        v9 = (char *)a1 + 40;
        goto LABEL_34;
      }
      *(_QWORD *)(*(_QWORD *)v9 + 296LL) = v23;
      *(_DWORD *)(*(_QWORD *)v9 + 200LL) = v24;
      v8 = gptiCurrent;
    }
LABEL_34:
    *(_WORD *)(*(_QWORD *)v9 + 42LL) = 669;
  }
  if ( !*((_QWORD *)a1 + 13) )
  {
    if ( a2 != 128 )
      goto LABEL_5;
    return 0LL;
  }
  if ( a2 > 0x80 )
  {
    switch ( a2 )
    {
      case 0xA1u:
        return 0LL;
      case 0x112u:
        v12 = 61760LL;
        if ( v5 == 61760 )
        {
          v13 = 274;
          return xxxDefWindowProc((__int64 *)a1, v13, v12, a4);
        }
        return 0LL;
      case 0x128u:
        return xxxDWP_UpdateUIState((__int64)a1, v5, a4);
      case 0x203u:
        a2 = 274;
        v5 = 61744LL;
        goto LABEL_5;
      case 0x30Fu:
        goto LABEL_80;
    }
    if ( a2 != 785 )
    {
      if ( a2 != 1025 )
        goto LABEL_5;
      if ( !gProtocolType && LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) && !*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
        *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = SetRITTimer(0LL, 20LL, HideMouseTrails, 0LL);
      return 0LL;
    }
    if ( *(_QWORD *)a1 != v5 )
LABEL_80:
      xxxRealizeDesktop(a1);
    return 0LL;
  }
  switch ( a2 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      v53 = 0LL;
      v54 = 0LL;
      v39 = CreateProfileUserName(&v53);
      SetDesktopPattern(v39, 0LL);
      FreeProfileUserName(v39, &v53);
      xxxSendNotifyMessage((__int64)a1, 0x15u, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      xxxSetWindowLong(a1, 0, CurrentProcessId, 0LL, 0);
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
      xxxSetWindowLong(a1, 4, CurrentThreadId, 0LL, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1, (__int64)v56);
      xxxEndPaint(a1, v56);
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
        v48 = 0LL;
        v31 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        v46 = *(_QWORD *)(v8 + 408);
        *(_QWORD *)(v8 + 408) = &v46;
        v47 = v31;
        if ( v31 )
          HMLockObject(v31);
        xxxMakeWindowForegroundWithState(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 2);
        ThreadUnlock1(v33, v32, v34);
        v35 = gspwndAltTab;
        if ( gspwndAltTab )
        {
          v46 = *(_QWORD *)(v8 + 408);
          *(_QWORD *)(v8 + 408) = &v46;
          v47 = v35;
          HMLockObject(v35);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout((unsigned __int64)gspwndAltTab, 0x3Au, 0LL, 0LL, 0, 0, 0LL, 1, 1);
          ThreadUnlock1(v37, v36, v38);
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
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v45);
        for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
          xxxSendNotifyMessage(i, 0x51u, v5, (struct _LARGE_STRING *)a4, 1);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v45);
        break;
      default:
        goto LABEL_5;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop(a1, v5, 1LL);
  return 1LL;
}
