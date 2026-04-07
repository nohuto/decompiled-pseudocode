/*
 * XREFs of ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180007D30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18001D644 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800268C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800271F4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002937C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?SetWindowTabOwner@CWindowData@@QEAAXPEAUHWND__@@@Z @ 0x180055BE4 (-SetWindowTabOwner@CWindowData@@QEAAXPEAUHWND__@@@Z.c)
 *     ?GetWindowTabOwner@@YAPEAUHWND__@@QEAU1@@Z @ 0x180055EE0 (-GetWindowTabOwner@@YAPEAUHWND__@@QEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ForceIconicRepresentationChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  CWindowData *v6; // rbx
  char v7; // si
  HWND WindowTabOwner; // rax
  bool v9; // r8
  int v10; // eax
  CWindowData *v12; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v5 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v6 = v12;
    if ( v12 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 224LL))(a2);
      if ( (*((_BYTE *)v6 + 609) & 1) != v7 )
      {
        *((_BYTE *)v6 + 609) ^= (v7 ^ *((_BYTE *)v6 + 609)) & 1;
        WindowTabOwner = GetWindowTabOwner(*((HWND *)v6 + 5));
        CWindowData::SetWindowTabOwner(v6, WindowTabOwner);
        if ( v7 && CWindowData::IsImmersiveWindow(v6) )
          CWindowData::ClearSnapshot(v6, 0, v9, 1);
        v10 = CWindowData::NotifyRepresentationChanged(v6);
        v5 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1446u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1436u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v5;
}
