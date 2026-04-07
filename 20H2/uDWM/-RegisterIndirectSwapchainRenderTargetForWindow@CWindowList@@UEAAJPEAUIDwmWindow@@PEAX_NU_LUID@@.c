/*
 * XREFs of ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x180098700
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018AD4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800949CC (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 */

__int64 __fastcall CWindowList::RegisterIndirectSwapchainRenderTargetForWindow(
        CWindowList *this,
        struct IDwmWindow *a2,
        HANDLE hObject,
        char a4,
        struct _LUID a5)
{
  int SyncedWindowData; // eax
  unsigned int v10; // ebx
  CTopLevelWindow *v11; // rcx
  int v12; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v10 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1559u);
    goto LABEL_8;
  }
  if ( !v15 || (v11 = (CTopLevelWindow *)*((_QWORD *)v15 + 48)) == 0LL )
  {
    v10 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467261, 0x155Cu);
LABEL_8:
    if ( hObject )
      CloseHandle(hObject);
    goto LABEL_10;
  }
  v12 = CTopLevelWindow::RegisterIndirectSwapChainRenderTarget(v11, hObject, a4, a5);
  v10 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x1563u);
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v10;
}
