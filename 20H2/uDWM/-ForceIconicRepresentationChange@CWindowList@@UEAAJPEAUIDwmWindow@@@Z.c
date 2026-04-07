/*
 * XREFs of ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180007CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180012FE4 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180014EA8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180016260 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018AD4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SetWindowTabOwner@CWindowData@@QEAAXPEAUHWND__@@@Z @ 0x180055F3C (-SetWindowTabOwner@CWindowData@@QEAAXPEAUHWND__@@@Z.c)
 *     ?GetWindowTabOwner@@YAPEAUHWND__@@QEAU1@@Z @ 0x180056238 (-GetWindowTabOwner@@YAPEAUHWND__@@QEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
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
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1452u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1442u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v5;
}
