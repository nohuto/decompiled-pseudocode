/*
 * XREFs of ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18009931C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800317E0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180014EA8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180017B74 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180088D38 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180089740 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180095010 (McTemplateU0p_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CWindowList::SetIconicThumbnail(
        CWindowList *this,
        int a2,
        const struct MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  __int64 v8; // rcx
  HWND v9; // rsi
  int SyncedWindowDataByHwnd; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  char IsImmersiveWindow; // al
  unsigned int v14; // r9d
  unsigned int v15; // eax
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+40h] [rbp-28h] BYREF
  CWindowData *v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = *(HWND *)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v8, (__int64)&UdwmProcessSetIconicThumbnail_Start, *(_QWORD *)((char *)a3 + 4));
  v18 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v9, &v18);
  v12 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v18 )
    {
      IsImmersiveWindow = CWindowData::IsImmersiveWindow(v18);
      v14 = *((_DWORD *)a3 + 3);
      if ( IsImmersiveWindow )
        v15 = CImmersiveIconicBitmapRegistry::BitmapReceived(
                *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 38),
                (HWND *)v18,
                a2,
                v14,
                *((_DWORD *)a3 + 4),
                (_DWORD *)a4->ViewBase,
                a4->ViewSize);
      else
        v15 = CIconicBitmapRegistry::BitmapReceived(
                *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 37),
                (HWND *)v18,
                a2,
                v14,
                *((_DWORD *)a3 + 4),
                a4->ViewBase,
                a4->ViewSize,
                *((_DWORD *)a3 + 5));
      v12 = v15;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0p_EtwEventWriteTransfer(v11, (__int64)&UdwmProcessSetIconicThumbnail_Stop, (__int64)v9);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x10DEu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v12;
}
