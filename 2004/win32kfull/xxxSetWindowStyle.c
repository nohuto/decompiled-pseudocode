/*
 * XREFs of xxxSetWindowStyle @ 0x1C009C710
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005A00 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01E7F70 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0209A6C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C0209BF0 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     DecVisWindows @ 0x1C00205C0 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0020974 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C0020B9C (ComposeWindowIfNeeded.c)
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C0022C94 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C004EA28 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     GetAppCompatFlags2 @ 0x1C0060800 (GetAppCompatFlags2.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C006E71C (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00A3B0C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C01054E0 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     _IsWindowVisible @ 0x1C011C5B4 (_IsWindowVisible.c)
 *     VerifyChildMenu @ 0x1C0159748 (VerifyChildMenu.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ClrWFNoDwmNotify @ 0x1C01D7CA4 (ClrWFNoDwmNotify.c)
 *     xxxTurnOffCompositing @ 0x1C01E8A10 (xxxTurnOffCompositing.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, int a3)
{
  unsigned __int64 v3; // rsi
  int v4; // r13d
  int v5; // r14d
  __int64 v6; // rax
  __int64 v8; // rdx
  unsigned int v9; // edi
  int v10; // ecx
  __int64 v12; // rcx
  int v13; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r11
  char v23; // dl
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r10
  struct tagWND *i; // rdx
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // r8
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // edi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  struct tagWND *j; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // r8
  __int64 v46; // rcx
  unsigned int v47; // edi
  int v48; // edx
  int v49; // edx
  __int64 v50; // r15
  int v51; // edi
  int v52; // esi
  int v53; // ecx
  int v54; // edx
  __int64 v55; // rdx
  int v56; // r8d
  int v57; // eax
  int v58; // eax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v60; // rax
  struct _LIST_ENTRY *v61; // rdi
  struct _LIST_ENTRY *Blink; // rdx
  char Blink_high; // al
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  char v68; // si
  __int64 v69; // rcx
  struct tagWND *v70; // rax
  __int64 v71; // rdx
  __int64 Prop; // rax
  struct _LIST_ENTRY *v73; // rax
  __int64 k; // rdi
  __int64 m; // rdi
  int v76; // esi
  __int64 v77; // r14
  void *v78; // rdi
  int v79; // r14d
  int v80; // eax
  unsigned int v81; // edx
  int v82; // [rsp+40h] [rbp-39h]
  unsigned int v83; // [rsp+40h] [rbp-39h]
  unsigned int v84; // [rsp+40h] [rbp-39h]
  __int64 v85; // [rsp+48h] [rbp-31h] BYREF
  int v86; // [rsp+50h] [rbp-29h]
  int v87; // [rsp+54h] [rbp-25h]
  CVisRgnTrackerProp *v88; // [rsp+58h] [rbp-21h] BYREF
  int v89; // [rsp+60h] [rbp-19h] BYREF
  __int16 v90; // [rsp+64h] [rbp-15h]
  __int128 v91; // [rsp+66h] [rbp-13h]
  __int128 v92; // [rsp+76h] [rbp-3h]
  __int16 v93; // [rsp+86h] [rbp+Dh]
  int v94; // [rsp+88h] [rbp+Fh]
  __int64 v95; // [rsp+8Ch] [rbp+13h]
  int v96; // [rsp+94h] [rbp+1Bh]
  int v97; // [rsp+98h] [rbp+1Fh]

  v3 = a2;
  v85 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = *((_QWORD *)a1 + 5);
  v86 = v3;
  v8 = *((_QWORD *)a1 + 5);
  v82 = (*(_DWORD *)(v8 + 28) >> 26) & 4 | (*(_DWORD *)(v6 + 24) >> 22) & 8;
  if ( (_DWORD)v3 == -16 )
  {
    v9 = *(_DWORD *)(v8 + 28);
    LODWORD(v85) = v9;
    if ( (*(_DWORD *)(v8 + 24) & 0x800) == 0 )
      goto LABEL_6;
    v9 |= 0x10000000u;
  }
  else
  {
    v10 = *(_DWORD *)(v8 + 24);
    LODWORD(v85) = v10 & 0xA7F77FF;
    v9 = v10 & (((~(unsigned __int8)*(_DWORD *)(v8 + 232) & 0x20) << 14) | 0xA7777FF);
  }
  LODWORD(v85) = v9;
LABEL_6:
  HIDWORD(v85) = a3;
  if ( (*(_BYTE *)(v8 + 21) & 2) != 0 )
  {
    xxxSendMessage((unsigned __int64)a1, 0x7Cu, v3, (struct _LARGE_STRING *)&v85);
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      return v9;
    LODWORD(v85) = v9;
  }
  v87 = IsTrayWindow(a1);
  v13 = v87;
  if ( (_DWORD)v3 != -16 )
  {
    if ( (GetAppCompatFlags2(0x400u) & 4) != 0 )
      v47 = HIDWORD(v85) & 0x777FF;
    else
      v47 = HIDWORD(v85) & 0xA7F77FF;
    v48 = v85 & 8;
    HIDWORD(v85) = v47;
    if ( v48 != (v47 & 8) && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 || !HIWORD(v47)) )
    {
      v47 = v48 | v47 & 0xFFFFFFF7;
      HIDWORD(v85) = v47;
    }
    v49 = v47 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) << 14) & *(_DWORD *)(*((_QWORD *)a1 + 5)
                                                                                                  + 24LL)) != 0 )
    {
      if ( v49 )
        goto LABEL_86;
      if ( IsTopLevelOrLayeredChildWindow((__int64)a1) && !(unsigned int)IsTopLevelWindow((__int64)a1) )
        v5 = 1;
      UnsetLayeredWindow(a1, v5);
    }
    else
    {
      if ( !v49 )
        goto LABEL_86;
      if ( (int)xxxSetLayeredWindow(a1, 1, 0LL) < 0 )
        return 0LL;
    }
    v47 = HIDWORD(v85);
LABEL_86:
    v50 = *((_QWORD *)a1 + 5);
    v16 = *(_DWORD *)(v50 + 24) & 0x200000;
    if ( ((*(_DWORD *)(v50 + 24) & 0x200000) != 0) != ((v47 >> 21) & 1) || (_DWORD)v16 && (v47 & 0x2000000) != 0 )
    {
      v17 = 87LL;
      goto LABEL_161;
    }
    v51 = v47 & 0x2000000;
    v52 = *(_DWORD *)(v50 + 24) & 0x2000000;
    if ( !v52 && v51 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818) )
      return 0LL;
    v84 = (*(_DWORD *)(v50 + 28) >> 28) & 1 | v82 & 0xFFFFFFFC | (v51 != 0 ? 2 : 0);
    if ( v52 )
    {
      if ( !v51 )
      {
        UnsetRedirectedWindow(a1, 2);
        ClrWFNoDwmNotify(a1, 2818LL);
      }
      goto LABEL_98;
    }
    if ( !v51 )
    {
LABEL_98:
      ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v84])(a1);
      if ( v4 )
        xxxTurnOffCompositing(a1, 1LL);
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = HIDWORD(v85) & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
      v53 = HIDWORD(v85);
      v54 = v85;
      if ( (((unsigned int)v85 ^ HIDWORD(v85)) & 0x407000) != 0 )
      {
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
        v53 = HIDWORD(v85);
        v54 = v85;
      }
      if ( ((v54 ^ v53) & 0x80000) != 0 && v5 )
        xxxRedrawWindow(a1, 0LL, 0LL, 1157);
      goto LABEL_105;
    }
    if ( (int)SetRedirectedWindow(a1, 2) >= 0 )
    {
      SetOrClrWF(1LL, a1, 2818LL, 0LL);
      v4 = 1;
      goto LABEL_98;
    }
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v15 = HIDWORD(v85);
  if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) )
  {
    v16 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
    if ( *(_WORD *)(gpsi + 870LL) == *(_WORD *)(v16 + 2) && (v85 & 0x20) != 0 && (v85 & 0x2000000000LL) == 0 )
    {
      v17 = 5LL;
LABEL_161:
      UserSetLastError(v17, v16, v15);
      return 0LL;
    }
  }
  v18 = *((_QWORD *)a1 + 3);
  v19 = 0LL;
  v20 = *((_QWORD *)a1 + 13);
  if ( v18 )
  {
    v21 = *(_QWORD *)(v18 + 8);
    if ( v21 )
      v19 = *(_QWORD *)(v21 + 24);
  }
  if ( v20 == v19 )
  {
    LODWORD(v15) = HIDWORD(v85) | 0x4000000;
    HIDWORD(v85) |= 0x4000000u;
  }
  if ( (((unsigned int)v85 ^ (unsigned int)v15) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    v20 = *((_QWORD *)a1 + 13);
    LODWORD(v15) = HIDWORD(v85);
  }
  v22 = *((_QWORD *)a1 + 5);
  v23 = *(_BYTE *)(v22 + 31);
  if ( (v23 & 0x40) == 0 && (v23 & 0x20) != 0 && (*(_BYTE *)(v22 + 16) & 8) == 0 && (v15 & 0x20000000) == 0 )
  {
    LODWORD(v15) = v15 | 0x20000000;
    HIDWORD(v85) = v15;
  }
  if ( v20 )
  {
    v24 = *((_QWORD *)a1 + 3);
    v25 = 0LL;
    if ( v24 )
    {
      v26 = *(_QWORD *)(v24 + 8);
      if ( v26 )
        v25 = *(_QWORD *)(v26 + 24);
    }
    if ( v20 == v25 && (*(_DWORD *)(v22 + 28) & 0x30000000) == 0x10000000 )
      v5 = 1;
  }
  if ( v13 )
  {
    for ( i = a1; ; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      v28 = *((_QWORD *)i + 5);
      if ( (*(_BYTE *)(v28 + 31) & 0x10) == 0 && (*(_BYTE *)(v28 + 25) & 8) == 0 )
        break;
      if ( (*(_WORD *)(v28 + 42) & 0x3FFF) == 0x29D )
      {
        v29 = 1;
        goto LABEL_43;
      }
    }
  }
  v29 = 0;
LABEL_43:
  *(_DWORD *)(v22 + 28) = v15;
  v30 = *((_QWORD *)a1 + 5);
  v31 = *(_DWORD *)(v30 + 24);
  if ( (*(_DWORD *)(v30 + 28) & 0x10000000) != 0 )
    v32 = v31 | 0x800;
  else
    v32 = v31 & 0xFFFFF7FF;
  *(_DWORD *)(v30 + 24) = v32;
  v33 = *((_QWORD *)a1 + 13);
  v34 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL);
  if ( !v33 )
    goto LABEL_52;
  v35 = *((_QWORD *)a1 + 3);
  v36 = 0LL;
  if ( v35 )
  {
    v37 = *(_QWORD *)(v35 + 8);
    if ( v37 )
      v36 = *(_QWORD *)(v37 + 24);
  }
  if ( v33 != v36 || (v38 = 1, (v34 & 0x30000000) != 0x10000000) )
LABEL_52:
    v38 = 0;
  v83 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2 | v82 & 0xFFFFFFFC | (v34 >> 28) & 1;
  VerifyChildMenu(a1);
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v83])(a1);
  if ( v5 != v38 )
  {
    if ( v5 )
    {
      DecVisWindows((__int64)a1);
    }
    else
    {
      IncVisWindows((__int64)a1, v39, v40, v41);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded(a1);
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) )
  {
    for ( j = a1; ; j = (struct tagWND *)*((_QWORD *)j + 13) )
    {
      v43 = *((_QWORD *)j + 5);
      if ( (*(_BYTE *)(v43 + 31) & 0x10) == 0 && (*(_BYTE *)(v43 + 25) & 8) == 0 )
      {
        v44 = 0;
        goto LABEL_66;
      }
      if ( (*(_WORD *)(v43 + 42) & 0x3FFF) == 0x29D )
        break;
    }
    v44 = 1;
LABEL_66:
    if ( v29 != v44 )
    {
      v45 = *(_QWORD *)a1;
      v46 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v29 )
        PostIAMShellHookMessageEx(v46, 0x16u, v45);
      else
        PostIAMShellHookMessageEx(v46, 0x11u, v45);
    }
  }
LABEL_105:
  v55 = *((_QWORD *)a1 + 5);
  v56 = *(_DWORD *)(v55 + 24);
  v57 = *(_DWORD *)(v55 + 28);
  if ( (v56 & 1) != 0
    || (v56 & 0x20000) == 0
    && ((v57 & 0x40000) != 0
     || (v58 = v57 & 0xC00000, v58 == 0x400000)
     || v58 == 12582912 && (*(_BYTE *)(v55 + 21) & 2) != 0) )
  {
    *(_BYTE *)(v55 + 25) = BYTE1(v56) | 1;
  }
  else
  {
    ClrWFNoDwmNotify(a1, 2305LL);
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_150;
  Flink = (struct _LIST_ENTRY *)gptiCurrent;
  v60 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v60 )
  {
    Flink = **(struct _LIST_ENTRY ***)(v60 + 8);
    if ( ((__int64)Flink[4].Flink & 1) != 0 )
    {
      Flink = (struct _LIST_ENTRY *)*(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( ((unsigned __int8)Flink & 0x10) != 0 )
      {
        v61 = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 13);
        Flink = v61;
        if ( v61 )
        {
          while ( 1 )
          {
            Blink = Flink[2].Blink;
            Blink_high = HIBYTE(Blink[1].Blink);
            if ( (Blink_high & 0x10) == 0 || (Blink_high & 0x20) != 0 && Flink != v61 )
              break;
            if ( (WORD1(Blink[2].Blink) & 0x3FFF) != 0x29D )
            {
              Flink = Flink[6].Blink;
              if ( Flink )
                continue;
            }
            goto LABEL_123;
          }
        }
        else
        {
LABEL_123:
          EtwTraceDwmVisRgnDirty(*(_QWORD *)a1, v61->Flink);
          v64 = *((_QWORD *)a1 + 13);
          if ( !v64 )
            goto LABEL_129;
          v65 = *((_QWORD *)a1 + 3);
          v66 = 0LL;
          if ( v65 )
          {
            v67 = *(_QWORD *)(v65 + 8);
            if ( v67 )
              v66 = *(_QWORD *)(v67 + 24);
          }
          if ( v64 == v66 )
          {
            v68 = 1;
          }
          else
          {
LABEL_129:
            v69 = *((_QWORD *)a1 + 3);
            v68 = 0;
            v70 = 0LL;
            if ( v69 )
            {
              v71 = *(_QWORD *)(v69 + 8);
              if ( v71 )
                v70 = *(struct tagWND **)(v71 + 24);
            }
            if ( a1 != v70 && (HIBYTE(v61[2].Blink[1].Blink) & 2) != 0 )
            {
              v88 = 0LL;
              if ( CWindowProp::GetProp<CVisRgnTrackerProp>((__int64)v61, (__int64 *)&v88) )
                CVisRgnTrackerProp::MarkDirty(v88);
            }
          }
          Prop = RealGetProp(*((_QWORD *)a1 + 18), LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
          if ( Prop && !*(_BYTE *)(Prop + 65) )
          {
            *(_BYTE *)(Prop + 65) = 1;
            Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            v73 = (struct _LIST_ENTRY *)(Prop + 16);
            if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
              __fastfail(3u);
            v73->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            v73->Blink = &CVisRgnTrackerProp::s_DirtyList;
            Flink->Blink = v73;
            CVisRgnTrackerProp::s_DirtyList.Flink = v73;
          }
          for ( k = *((_QWORD *)a1 + 14); k; k = *(_QWORD *)(k + 88) )
            MarkDirtyWorker((struct tagWND *)k);
          if ( !v68 )
          {
            for ( m = *((_QWORD *)a1 + 11); m; m = *(_QWORD *)(m + 88) )
            {
              Flink = (struct _LIST_ENTRY *)*(unsigned __int8 *)(*(_QWORD *)(m + 40) + 31LL);
              LOBYTE(Flink) = (unsigned __int8)Flink & 0x14;
              if ( (_BYTE)Flink == 20 )
                MarkDirtyWorker((struct tagWND *)m);
            }
          }
        }
      }
    }
  }
  v76 = HIDWORD(v85);
  v77 = *(_QWORD *)a1;
  v78 = (void *)ReferenceDwmApiPort(Flink);
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( v78 )
  {
    v95 = v77;
    v79 = v86;
    v96 = v86;
    v93 = 0;
    v90 = 0x8000;
    v91 = 0LL;
    v89 = 3932180;
    v92 = 0LL;
    v94 = 1073741846;
    v97 = v76;
    LpcRequestPort(v78, &v89);
    ObfDereferenceObject(v78);
  }
  else
  {
LABEL_150:
    v79 = v86;
  }
  v80 = IsTrayWindow(a1);
  if ( v87 == v80 )
    goto LABEL_157;
  if ( v87 )
  {
    v81 = 18;
LABEL_156:
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v81, *(_QWORD *)a1);
    goto LABEL_157;
  }
  if ( (unsigned int)IsWindowVisible(a1) )
  {
    v81 = 17;
    goto LABEL_156;
  }
LABEL_157:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
    xxxSendMessage((unsigned __int64)a1, 0x7Du, v79, (struct _LARGE_STRING *)&v85);
  return (unsigned int)v85;
}
