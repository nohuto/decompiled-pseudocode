/*
 * XREFs of ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180044D88
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180032120 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180017B74 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001E870 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18003C0E4 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x180093D90 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall CWindowList::GetExtendedFrameBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // esi
  struct CWindowData *v6; // rdi
  CTopLevelWindow *v7; // rcx
  unsigned int CurrentStyle; // eax
  struct _MARGINS v10; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v11);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x12CCu);
  }
  else
  {
    v6 = v11;
    if ( v11 )
    {
      *a3 = *((struct tagRECT *)v11 + 3);
      v7 = (CTopLevelWindow *)*((_QWORD *)v6 + 48);
      v10 = 0LL;
      if ( v7 )
      {
        CTopLevelWindow::GetOutsideMargins(v7, &v10);
      }
      else
      {
        CurrentStyle = CTopLevelWindow::GetCurrentStyle((__int64)v6);
        CTopLevelWindow::CalculateOutsideMargins(v6, CurrentStyle, &v10);
      }
      a3->left += v10.cxLeftWidth;
      a3->top += v10.cyTopHeight;
      a3->right -= v10.cxRightWidth;
      a3->bottom -= v10.cyBottomHeight;
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return v5;
}
