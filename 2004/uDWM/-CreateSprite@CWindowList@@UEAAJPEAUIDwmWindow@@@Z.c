/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029020
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18001BB90 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D264 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18001D644 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18001E064 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029200 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002937C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x1800294B0 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x180029888 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800299D0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  struct CWindowData *v6; // r14
  struct CWindowData *v7; // rax
  struct CWindowData **v8; // rcx
  struct CWindowData *Element; // rax
  bool v10; // r8
  struct CWindowData **v11; // rcx
  CAnimationScheduler *v12; // rdi
  char v13; // bl
  char v14; // al
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-28h]
  struct CWindowData *v18; // [rsp+60h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v18);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 2046;
LABEL_31:
    v16 = SyncedWindowData;
    goto LABEL_32;
  }
  v6 = v18;
  if ( v18 )
    goto LABEL_3;
  if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
    goto LABEL_24;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v18);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 2050;
    goto LABEL_31;
  }
  v6 = v18;
  if ( !v18 )
  {
LABEL_24:
    v5 = -2147024890;
    v17 = 2054;
LABEL_26:
    v16 = v5;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v17);
    goto LABEL_18;
  }
LABEL_3:
  if ( (*((_BYTE *)v6 + 608) & 4) != 0 )
    CWindowList::ImmediateDestroySprite(this, v6);
  if ( !(*(unsigned __int8 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2) )
  {
    SyncedWindowData = CWindowData::EnsureClientAreaVisualProxy(v6);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v17 = 2066;
      goto LABEL_31;
    }
  }
  SyncedWindowData = CWindowList::SyncWindowData(this, a2, v6);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 2070;
    goto LABEL_31;
  }
  v7 = *(struct CWindowData **)v6;
  if ( *(struct CWindowData **)(*(_QWORD *)v6 + 8LL) != v6
    || (v8 = (struct CWindowData **)*((_QWORD *)v6 + 1), *v8 != v6) )
  {
LABEL_33:
    __fastfail(3u);
  }
  *v8 = v7;
  *((_QWORD *)v7 + 1) = v8;
  Element = (struct CWindowData *)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                                    (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
                                    *((_QWORD *)v6 + 15));
  if ( Element )
    Element = (struct CWindowData *)((char *)Element + 80);
  if ( !Element )
  {
    v5 = -2147024882;
    v17 = 2082;
    goto LABEL_26;
  }
  v11 = (struct CWindowData **)*((_QWORD *)Element + 1);
  if ( *v11 != Element )
    goto LABEL_33;
  *((_QWORD *)v6 + 1) = v11;
  *(_QWORD *)v6 = Element;
  *v11 = v6;
  *((_QWORD *)Element + 1) = v6;
  CWindowData::ClearSnapshot(v6, 1, v10, 1);
  SyncedWindowData = CWindowList::ClipChange(this, a2);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 2091;
    goto LABEL_31;
  }
  if ( (*((_BYTE *)v6 + 608) & 1) != 0 )
  {
    LOBYTE(v18) = 0;
    v12 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
    v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 288LL))(a2);
    CAnimationScheduler::OnWindowCloakChange(v12, v6, v14, v13, (bool *)&v18);
    if ( !(_BYTE)v18 )
    {
      SyncedWindowData = CWindowList::ShowHide(this, v6, 1);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v17 = 2100;
        goto LABEL_31;
      }
    }
  }
LABEL_18:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
