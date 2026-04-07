/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029D20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18000A190 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180010A34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180011E08 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18001BB90 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001C29C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800271F4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18002834C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002937C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180029BD8 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0F0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x18002C45C (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004458C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rdi
  int v5; // ebp
  struct CWindowData *v6; // rbx
  int v7; // ebx
  int v8; // r13d
  int v9; // eax
  __int64 v10; // r8
  int v11; // ebp
  char v12; // al
  char v13; // al
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rcx
  CWindowIconic *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  bool v21; // al
  char v22; // si
  bool v23; // r14
  struct _RTL_GENERIC_TABLE *v24; // r15
  char v25; // r12
  char v26; // si
  unsigned __int8 v27; // si
  __int64 v29; // r8
  int v30; // eax
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *i; // r14
  CWindowData *v33; // rax
  CWindowData *v34; // rax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  int v41; // eax
  unsigned int v42; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct CWindowData *Buffer; // [rsp+78h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v33 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         768LL);
  if ( !v33 || (v34 = CWindowData::CWindowData(v33), (v6 = v34) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x882u);
    v7 = -2147024882;
    goto LABEL_57;
  }
  *((_QWORD *)v34 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v34);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v35 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v35;
  if ( v35 >= 0 )
LABEL_2:
    v4 = v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x886u);
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_57:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xDD2u);
    goto LABEL_29;
  }
  if ( !v4 )
    goto LABEL_29;
  v8 = *((_DWORD *)v4 + 25);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v11 = v9;
  if ( (v8 & 0x20000000) != 0 )
  {
    if ( (v9 & 0x20000000) == 0 )
    {
      CWindowData::ClearSnapshot(v4, 0, v10, 0);
      if ( *((_QWORD *)v4 + 50) )
      {
        LOBYTE(v29) = 1;
        v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 65)
                                                                 + 72LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
                *((_QWORD *)v4 + 5),
                v29);
        if ( v36 < 0 )
        {
          v37 = 3551LL;
LABEL_62:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v37,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)v36,
            v42);
        }
      }
    }
  }
  else if ( (v9 & 0x20000000) != 0 )
  {
    if ( *((_QWORD *)v4 + 50) )
    {
      v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 65)
                                                              + 72LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
              *((_QWORD *)v4 + 5),
              0LL);
      if ( v36 < 0 )
      {
        v37 = 3558LL;
        goto LABEL_62;
      }
    }
  }
  *((_DWORD *)v4 + 25) = v11;
  *((_DWORD *)v4 + 26) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)v4 + 27) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2);
  *((_BYTE *)v4 + 608) &= ~8u;
  *((_BYTE *)v4 + 608) |= 8 * (v12 & 1);
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 176LL))(a2);
  *((_BYTE *)v4 + 608) &= ~0x80u;
  v14 = *((_QWORD *)v4 + 48);
  *((_BYTE *)v4 + 608) |= v13 << 7;
  if ( !v14 )
    goto LABEL_17;
  v15 = *(_DWORD *)(v14 + 80);
  if ( (v15 & 0x8000) == 0 )
  {
    v16 = *(_QWORD *)(v14 + 24);
    for ( *(_DWORD *)(v14 + 80) = v15 | 0x8000; v16; v16 = *(_QWORD *)(v16 + 24) )
    {
      if ( (*(_BYTE *)(v16 + 80) & 1) != 0 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
    }
  }
  v17 = *(_QWORD *)(v14 + 824);
  v7 = 0;
  if ( v17 )
  {
    v38 = *(_QWORD *)(v14 + 728);
    if ( v38 )
    {
      v39 = 3LL;
      if ( *(_QWORD *)(v38 + 368) || *(char *)(v38 + 609) >= 0 || (*(_DWORD *)(v38 + 104) & 0x200000) != 0 )
        v39 = 1LL;
      v40 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v39);
      v7 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x16E0u);
LABEL_72:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x5CEu);
        goto LABEL_13;
      }
      v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 24LL)
                                              + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 5)
                                                                 + 24LL));
      v7 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x16E1u);
        goto LABEL_72;
      }
    }
  }
LABEL_13:
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1CE7u);
  }
  else
  {
    v18 = (CWindowIconic *)*((_QWORD *)v4 + 53);
    if ( v18 )
    {
      v30 = CWindowIconic::OnWindowStyleUpdated(v18, 1);
      v7 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x1CECu);
    }
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xDF2u);
    goto LABEL_29;
  }
  v19 = CTopLevelWindow3D::OnWindowStyleUpdated(*((CTopLevelWindow3D **)v4 + 49));
  v7 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0xDF3u);
    goto LABEL_29;
  }
LABEL_17:
  v20 = *((_QWORD *)v4 + 67);
  v21 = v20 && (*(_BYTE *)(v20 + 610) & 1) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v4);
  if ( ((*((_BYTE *)v4 + 610) & 2) != 0) != v21 )
    CWindowData::UpdateOwnerLists(v4, (*((_BYTE *)v4 + 610) & 2) == 0);
  v22 = *((_BYTE *)v4 + 609);
  v23 = (*((_DWORD *)v4 + 25) & 0x11000000) == 0x11000000 && *((_QWORD *)v4 + 4);
  v24 = (struct _RTL_GENERIC_TABLE *)((char *)this + 392);
  v25 = RtlIsGenericTableEmpty(v24) == 0;
  *((_BYTE *)v4 + 609) &= ~2u;
  v26 = v22 & 2;
  *((_BYTE *)v4 + 609) |= 2 * v23;
  if ( !v23 )
  {
    if ( !v26 )
      goto LABEL_25;
LABEL_38:
    if ( !v23 )
    {
      Buffer = v4;
      RtlDeleteElementGenericTable(v24, &Buffer);
    }
    goto LABEL_25;
  }
  if ( v26 )
    goto LABEL_38;
  CGenericSet<CWindowData *>::Add(v24, v4);
LABEL_25:
  v27 = RtlIsGenericTableEmpty(v24) == 0;
  if ( v25 != v27 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *((_QWORD *)v4 + 15));
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v27;
    for ( i = WindowListForDesktop->Flink; i != WindowListForDesktop; i = i->Flink )
    {
      if ( (BYTE1(i[38].Flink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)i);
        PostMessageW((HWND)i[2].Blink, 0x321u, v27, 0LL);
      }
    }
  }
  if ( ((v8 ^ v11) & 0x20000000) != 0 )
    CWindowData::NotifyRepresentationChanged(v4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    3u);
LABEL_29:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v7;
}
