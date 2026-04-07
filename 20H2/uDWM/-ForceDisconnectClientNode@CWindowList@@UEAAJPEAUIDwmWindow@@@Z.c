/*
 * XREFs of ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018AD4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180019D4C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180039EB0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18003EE48 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084818 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CWindowList::ForceDisconnectClientNode(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  struct CWindowData *v6; // rdi
  struct CVisual *RootVisualForDesktop; // rax
  CDesktopManager *v8; // rcx
  int updated; // eax
  int v10; // r8d
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-28h] BYREF
  struct CWindowData *v13[2]; // [rsp+38h] [rbp-20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13[0] = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1622u);
  }
  else
  {
    v6 = v13[0];
    if ( v13[0] )
    {
      CWindowData::ForceDisconnectClientNode(v13[0]);
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)v6 + 15));
      updated = CDesktopManager::UpdateSceneImpl(v8, RootVisualForDesktop);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x162Au);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (unsigned int)&CommitChannel_Disconnect,
            v10,
            1,
            (__int64)v13);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                       + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                          + 16LL));
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v5;
}
