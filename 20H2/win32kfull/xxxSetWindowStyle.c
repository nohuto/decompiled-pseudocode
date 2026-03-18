/*
 * XREFs of xxxSetWindowStyle @ 0x1C00583F0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C00058A0 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01E72B0 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0208BFC (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C0208D68 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetStyleWindow @ 0x1C00457D0 (GetStyleWindow.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00472B4 (IsTopLevelOrLayeredChildWindow.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     DecVisWindows @ 0x1C009166C (DecVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C00918CC (ComposeWindowIfNeeded.c)
 *     IncVisWindows @ 0x1C00927E4 (IncVisWindows.c)
 *     UnsetLayeredWindow @ 0x1C00C0BC4 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00C11EC (UnsetRedirectedWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     GetAppCompatFlags2 @ 0x1C00C7E10 (GetAppCompatFlags2.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00C9B94 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00CB428 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00CBDC0 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _IsWindowVisible @ 0x1C011D574 (_IsWindowVisible.c)
 *     VerifyChildMenu @ 0x1C015CFE0 (VerifyChildMenu.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ClrWFNoDwmNotify @ 0x1C01D6FE4 (ClrWFNoDwmNotify.c)
 *     xxxTurnOffCompositing @ 0x1C01E7D50 (xxxTurnOffCompositing.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edi
  __int64 CurrentProcessWin32Process; // rax
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r11
  char v24; // dl
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r10
  struct tagWND *i; // rdx
  __int64 v29; // rcx
  int v30; // esi
  __int64 v31; // rax
  int v32; // ecx
  unsigned int v33; // ecx
  __int64 v34; // r8
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // edi
  struct tagWND *j; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned int v45; // edi
  int v46; // edx
  int v47; // edx
  __int64 v48; // r15
  int v49; // edi
  int v50; // esi
  int v51; // ecx
  int v52; // edx
  __int64 v53; // rdx
  int v54; // r8d
  int v55; // eax
  int v56; // eax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v58; // rax
  struct _LIST_ENTRY *v59; // rdi
  struct _LIST_ENTRY *Blink; // rdx
  char Blink_high; // al
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  char v66; // si
  __int64 v67; // rcx
  struct tagWND *v68; // rax
  __int64 v69; // rdx
  __int64 Prop; // rax
  struct _LIST_ENTRY *v71; // rax
  __int64 k; // rdi
  __int64 m; // rdi
  int v74; // esi
  __int64 v75; // r14
  void *v76; // rdi
  int v77; // r14d
  int v78; // eax
  unsigned int v79; // edx
  int v80; // [rsp+40h] [rbp-39h]
  unsigned int v81; // [rsp+40h] [rbp-39h]
  unsigned int v82; // [rsp+40h] [rbp-39h]
  __int64 v83; // [rsp+48h] [rbp-31h] BYREF
  int v84; // [rsp+50h] [rbp-29h]
  int v85; // [rsp+54h] [rbp-25h]
  CVisRgnTrackerProp *v86; // [rsp+58h] [rbp-21h] BYREF
  int v87; // [rsp+60h] [rbp-19h] BYREF
  __int16 v88; // [rsp+64h] [rbp-15h]
  __int128 v89; // [rsp+66h] [rbp-13h]
  __int128 v90; // [rsp+76h] [rbp-3h]
  __int16 v91; // [rsp+86h] [rbp+Dh]
  int v92; // [rsp+88h] [rbp+Fh]
  __int64 v93; // [rsp+8Ch] [rbp+13h]
  int v94; // [rsp+94h] [rbp+1Bh]
  int v95; // [rsp+98h] [rbp+1Fh]

  v3 = a2;
  v83 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = *((_QWORD *)a1 + 5);
  v84 = v3;
  v8 = *((_QWORD *)a1 + 5);
  v80 = (*(_DWORD *)(v8 + 28) >> 26) & 4 | (*(_DWORD *)(v6 + 24) >> 22) & 8;
  if ( (_DWORD)v3 == -16 )
  {
    v9 = *(_DWORD *)(v8 + 28);
    LODWORD(v83) = v9;
    if ( (*(_DWORD *)(v8 + 24) & 0x800) == 0 )
      goto LABEL_6;
    v9 |= 0x10000000u;
  }
  else
  {
    v10 = *(_DWORD *)(v8 + 24);
    LODWORD(v83) = v10 & 0xA7F77FF;
    v9 = v10 & (((~(unsigned __int8)*(_DWORD *)(v8 + 232) & 0x20) << 14) | 0xA7777FF);
  }
  LODWORD(v83) = v9;
LABEL_6:
  HIDWORD(v83) = a3;
  if ( (*(_BYTE *)(v8 + 21) & 2) != 0 )
  {
    xxxSendMessage((unsigned __int64)a1, 0x7Cu, v3, (struct _LARGE_STRING *)&v83);
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      return v9;
    LODWORD(v83) = v9;
  }
  v85 = IsTrayWindow(a1);
  v15 = v85;
  if ( (_DWORD)v3 != -16 )
  {
    if ( (GetAppCompatFlags2(1024LL) & 4) != 0 )
      v45 = HIDWORD(v83) & 0x777FF;
    else
      v45 = HIDWORD(v83) & 0xA7F77FF;
    v46 = v83 & 8;
    HIDWORD(v83) = v45;
    if ( v46 != (v45 & 8) && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 || !HIWORD(v45)) )
    {
      v45 = v46 | v45 & 0xFFFFFFF7;
      HIDWORD(v83) = v45;
    }
    v47 = v45 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) << 14) & *(_DWORD *)(*((_QWORD *)a1 + 5)
                                                                                                  + 24LL)) != 0 )
    {
      if ( v47 )
        goto LABEL_86;
      if ( IsTopLevelOrLayeredChildWindow((__int64)a1) && !(unsigned int)IsTopLevelWindow((__int64)a1) )
        v5 = 1;
      UnsetLayeredWindow(a1);
    }
    else
    {
      if ( !v47 )
        goto LABEL_86;
      if ( (int)xxxSetLayeredWindow((int)a1) < 0 )
        return 0LL;
    }
    v45 = HIDWORD(v83);
LABEL_86:
    v48 = *((_QWORD *)a1 + 5);
    if ( ((*(_DWORD *)(v48 + 24) & 0x200000) != 0) != ((v45 >> 21) & 1)
      || (*(_DWORD *)(v48 + 24) & 0x200000) != 0 && (v45 & 0x2000000) != 0 )
    {
      v18 = 87LL;
      goto LABEL_161;
    }
    v49 = v45 & 0x2000000;
    v50 = *(_DWORD *)(v48 + 24) & 0x2000000;
    if ( !v50 && v49 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818) )
      return 0LL;
    v82 = (*(_DWORD *)(v48 + 28) >> 28) & 1 | v80 & 0xFFFFFFFC | (v49 != 0 ? 2 : 0);
    if ( v50 )
    {
      if ( !v49 )
      {
        UnsetRedirectedWindow(a1);
        ClrWFNoDwmNotify(a1, 2818LL);
      }
      goto LABEL_98;
    }
    if ( !v49 )
    {
LABEL_98:
      ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v82])(a1);
      if ( v4 )
        xxxTurnOffCompositing(a1, 1LL);
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = HIDWORD(v83) & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
      v51 = HIDWORD(v83);
      v52 = v83;
      if ( (((unsigned int)v83 ^ HIDWORD(v83)) & 0x407000) != 0 )
      {
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
        v51 = HIDWORD(v83);
        v52 = v83;
      }
      if ( ((v52 ^ v51) & 0x80000) != 0 && v5 )
        xxxRedrawWindow(a1, 0LL, 0LL, 1157);
      goto LABEL_105;
    }
    if ( (int)SetRedirectedWindow(a1) >= 0 )
    {
      SetOrClrWF(1LL, a1, 2818LL, 0LL);
      v4 = 1;
      goto LABEL_98;
    }
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, v12, v14);
  v17 = HIDWORD(v83);
  if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL)
    && *(_WORD *)(gpsi + 870LL) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL)
    && (v83 & 0x20) != 0
    && (v83 & 0x2000000000LL) == 0 )
  {
    v18 = 5LL;
LABEL_161:
    UserSetLastError(v18);
    return 0LL;
  }
  v19 = *((_QWORD *)a1 + 3);
  v20 = 0LL;
  v21 = *((_QWORD *)a1 + 13);
  if ( v19 )
  {
    v22 = *(_QWORD *)(v19 + 8);
    if ( v22 )
      v20 = *(_QWORD *)(v22 + 24);
  }
  if ( v21 == v20 )
  {
    v17 = HIDWORD(v83) | 0x4000000;
    HIDWORD(v83) |= 0x4000000u;
  }
  if ( (((unsigned int)v83 ^ v17) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    v21 = *((_QWORD *)a1 + 13);
    v17 = HIDWORD(v83);
  }
  v23 = *((_QWORD *)a1 + 5);
  v24 = *(_BYTE *)(v23 + 31);
  if ( (v24 & 0x40) == 0 && (v24 & 0x20) != 0 && (*(_BYTE *)(v23 + 16) & 8) == 0 && (v17 & 0x20000000) == 0 )
  {
    v17 |= 0x20000000u;
    HIDWORD(v83) = v17;
  }
  if ( v21 )
  {
    v25 = *((_QWORD *)a1 + 3);
    v26 = 0LL;
    if ( v25 )
    {
      v27 = *(_QWORD *)(v25 + 8);
      if ( v27 )
        v26 = *(_QWORD *)(v27 + 24);
    }
    if ( v21 == v26 && (*(_DWORD *)(v23 + 28) & 0x30000000) == 0x10000000 )
      v5 = 1;
  }
  if ( v15 )
  {
    for ( i = a1; ; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      v29 = *((_QWORD *)i + 5);
      if ( (*(_BYTE *)(v29 + 31) & 0x10) == 0 && (*(_BYTE *)(v29 + 25) & 8) == 0 )
        break;
      if ( (*(_WORD *)(v29 + 42) & 0x2FFF) == 0x29D )
      {
        v30 = 1;
        goto LABEL_43;
      }
    }
  }
  v30 = 0;
LABEL_43:
  *(_DWORD *)(v23 + 28) = v17;
  v31 = *((_QWORD *)a1 + 5);
  v32 = *(_DWORD *)(v31 + 24);
  if ( (*(_DWORD *)(v31 + 28) & 0x10000000) != 0 )
    v33 = v32 | 0x800;
  else
    v33 = v32 & 0xFFFFF7FF;
  *(_DWORD *)(v31 + 24) = v33;
  v34 = *((_QWORD *)a1 + 13);
  v35 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL);
  if ( !v34 )
    goto LABEL_52;
  v36 = *((_QWORD *)a1 + 3);
  v37 = 0LL;
  if ( v36 )
  {
    v38 = *(_QWORD *)(v36 + 8);
    if ( v38 )
      v37 = *(_QWORD *)(v38 + 24);
  }
  if ( v34 != v37 || (v39 = 1, (v35 & 0x30000000) != 0x10000000) )
LABEL_52:
    v39 = 0;
  v81 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2 | v80 & 0xFFFFFFFC | (v35 >> 28) & 1;
  VerifyChildMenu(a1);
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v81])(a1);
  if ( v5 != v39 )
  {
    if ( v5 )
    {
      DecVisWindows(a1);
    }
    else
    {
      IncVisWindows(a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded(a1);
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) )
  {
    for ( j = a1; ; j = (struct tagWND *)*((_QWORD *)j + 13) )
    {
      v41 = *((_QWORD *)j + 5);
      if ( (*(_BYTE *)(v41 + 31) & 0x10) == 0 && (*(_BYTE *)(v41 + 25) & 8) == 0 )
      {
        v42 = 0;
        goto LABEL_66;
      }
      if ( (*(_WORD *)(v41 + 42) & 0x2FFF) == 0x29D )
        break;
    }
    v42 = 1;
LABEL_66:
    if ( v30 != v42 )
    {
      v43 = *(_QWORD *)a1;
      v44 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v30 )
        PostIAMShellHookMessageEx(v44, 0x16u, v43);
      else
        PostIAMShellHookMessageEx(v44, 0x11u, v43);
    }
  }
LABEL_105:
  v53 = *((_QWORD *)a1 + 5);
  v54 = *(_DWORD *)(v53 + 24);
  v55 = *(_DWORD *)(v53 + 28);
  if ( (v54 & 1) != 0
    || (v54 & 0x20000) == 0
    && ((v55 & 0x40000) != 0
     || (v56 = v55 & 0xC00000, v56 == 0x400000)
     || v56 == 12582912 && (*(_BYTE *)(v53 + 21) & 2) != 0) )
  {
    *(_BYTE *)(v53 + 25) = BYTE1(v54) | 1;
  }
  else
  {
    ClrWFNoDwmNotify(a1, 2305LL);
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_150;
  Flink = (struct _LIST_ENTRY *)gptiCurrent;
  v58 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v58 )
  {
    Flink = **(struct _LIST_ENTRY ***)(v58 + 8);
    if ( ((__int64)Flink[4].Flink & 1) != 0 )
    {
      Flink = (struct _LIST_ENTRY *)*(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( ((unsigned __int8)Flink & 0x10) != 0 )
      {
        v59 = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 13);
        Flink = v59;
        if ( v59 )
        {
          while ( 1 )
          {
            Blink = Flink[2].Blink;
            Blink_high = HIBYTE(Blink[1].Blink);
            if ( (Blink_high & 0x10) == 0 || (Blink_high & 0x20) != 0 && Flink != v59 )
              break;
            if ( (WORD1(Blink[2].Blink) & 0x2FFF) != 0x29D )
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
          EtwTraceDwmVisRgnDirty(*(_QWORD *)a1, v59->Flink);
          v62 = *((_QWORD *)a1 + 13);
          if ( !v62 )
            goto LABEL_129;
          v63 = *((_QWORD *)a1 + 3);
          v64 = 0LL;
          if ( v63 )
          {
            v65 = *(_QWORD *)(v63 + 8);
            if ( v65 )
              v64 = *(_QWORD *)(v65 + 24);
          }
          if ( v62 == v64 )
          {
            v66 = 1;
          }
          else
          {
LABEL_129:
            v67 = *((_QWORD *)a1 + 3);
            v66 = 0;
            v68 = 0LL;
            if ( v67 )
            {
              v69 = *(_QWORD *)(v67 + 8);
              if ( v69 )
                v68 = *(struct tagWND **)(v69 + 24);
            }
            if ( a1 != v68 && (HIBYTE(v59[2].Blink[1].Blink) & 2) != 0 )
            {
              v86 = 0LL;
              if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>(v59, &v86) )
                CVisRgnTrackerProp::MarkDirty(v86);
            }
          }
          Prop = RealGetProp(*((_QWORD *)a1 + 18), LOWORD(WPP_MAIN_CB.AlignmentRequirement), 1LL);
          if ( Prop && !*(_BYTE *)(Prop + 65) )
          {
            *(_BYTE *)(Prop + 65) = 1;
            Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            v71 = (struct _LIST_ENTRY *)(Prop + 16);
            if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
              __fastfail(3u);
            v71->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            v71->Blink = &CVisRgnTrackerProp::s_DirtyList;
            Flink->Blink = v71;
            CVisRgnTrackerProp::s_DirtyList.Flink = v71;
          }
          for ( k = *((_QWORD *)a1 + 14); k; k = *(_QWORD *)(k + 88) )
            MarkDirtyWorker((struct tagWND *)k);
          if ( !v66 )
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
  v74 = HIDWORD(v83);
  v75 = *(_QWORD *)a1;
  v76 = (void *)ReferenceDwmApiPort(Flink);
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( v76 )
  {
    v93 = v75;
    v77 = v84;
    v94 = v84;
    v91 = 0;
    v88 = 0x8000;
    v89 = 0LL;
    v87 = 3932180;
    v90 = 0LL;
    v92 = 1073741846;
    v95 = v74;
    LpcRequestPort(v76, &v87);
    ObfDereferenceObject(v76);
  }
  else
  {
LABEL_150:
    v77 = v84;
  }
  v78 = IsTrayWindow(a1);
  if ( v85 == v78 )
    goto LABEL_157;
  if ( v85 )
  {
    v79 = 18;
LABEL_156:
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v79, *(_QWORD *)a1);
    goto LABEL_157;
  }
  if ( (unsigned int)IsWindowVisible(a1) )
  {
    v79 = 17;
    goto LABEL_156;
  }
LABEL_157:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
    xxxSendMessage((unsigned __int64)a1, 0x7Du, v77, (struct _LARGE_STRING *)&v83);
  return (unsigned int)v83;
}
