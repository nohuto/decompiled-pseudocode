/*
 * XREFs of ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180098A10
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000D8C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18001B3A4 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180051684 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180097D04 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CWindowList::PostActivateLivePreview(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  CWindowData *v7; // rbx
  struct CWindowData *MDIOwner; // rax
  int v9; // eax
  CWindowData *v11; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = (HWND)*((_QWORD *)a2 + 1);
  v11 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v11);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( !*((_DWORD *)a2 + 1) )
    {
      v7 = v11;
      if ( v11 )
      {
        if ( (*((_BYTE *)v11 + 609) & 1) != 0 )
        {
          MDIOwner = CWindowData::GetMDIOwner((HWND *)v11);
          if ( MDIOwner )
            v7 = MDIOwner;
        }
        if ( (*((_DWORD *)v7 + 25) & 0x20000000) != 0 )
          *((_BYTE *)v7 + 611) |= 0x10u;
      }
    }
    v9 = CDesktopManager::PostActivateLivePreview(CDesktopManager::s_pDesktopManagerInstance, a2);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1A0Fu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x19F9u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v6;
}
