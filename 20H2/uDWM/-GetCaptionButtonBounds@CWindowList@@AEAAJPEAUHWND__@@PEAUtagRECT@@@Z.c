/*
 * XREFs of ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180006A30
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180032120 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180017B74 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001E870 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18003EEF0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     floor_0 @ 0x18005638A (floor_0.c)
 */

__int64 __fastcall CWindowList::GetCaptionButtonBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int v4; // ebx
  int SyncedWindowDataByHwnd; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  struct CWindowData *v8; // rsi
  unsigned int CurrentStyle; // ebp
  int v10; // edx
  int v11; // r14d
  int v12; // r12d
  __int64 v13; // rcx
  int SystemMetricsForDpi; // r15d
  float v15; // xmm7_4
  float v16; // xmm6_4
  double v17; // xmm0_8
  int v18; // edx
  LONG v19; // edx
  int v21; // ecx
  LONG v22; // ecx
  struct CWindowData *v23; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v23 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v23);
  v7 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1273u);
  }
  else
  {
    v8 = v23;
    if ( v23
      && (LOBYTE(v6) = 1,
          CurrentStyle = CTopLevelWindow::GetCurrentStyle(v23, v6),
          CTopLevelWindow::HasRenderedBorder(CurrentStyle)) )
    {
      v10 = *((_DWORD *)v8 + 24);
      v11 = 0;
      v12 = v10 + 1;
      if ( (CurrentStyle & 0x20) == 0 )
        v12 = v10 - 1;
      v13 = 53LL;
      if ( (CurrentStyle & 2) == 0 )
        v13 = 31LL;
      SystemMetricsForDpi = GetSystemMetricsForDpi(v13, *((unsigned int *)v8 + 81));
      v15 = (float)SystemMetricsForDpi;
      if ( (CurrentStyle & 0x400) != 0 )
        v11 = (int)floor_0((float)(v15 * 2.2272727) + 0.5);
      v16 = v15 * 2.1818182;
      if ( (CurrentStyle & 0x200) != 0 )
        v11 += (int)floor_0(v16 + 0.5);
      if ( (CurrentStyle & 0x100) != 0 )
      {
        if ( (CurrentStyle & 0x800) != 0 )
          v17 = v16;
        else
          v17 = (float)(v15 * 2.2272727);
        v11 += (int)floor_0(v17 + 0.5);
      }
      if ( (CurrentStyle & 0x800) != 0 )
        v11 += (int)floor_0((float)(v15 * 2.2272727) + 0.5);
      a3->top = 0;
      v18 = 0;
      a3->bottom = SystemMetricsForDpi + *((_DWORD *)v8 + 24);
      if ( *((_DWORD *)v8 + 47) - *((_DWORD *)v8 + 45) >= 0 )
        v18 = *((_DWORD *)v8 + 47) - *((_DWORD *)v8 + 45);
      v19 = v18 - v12;
      a3->right = v19;
      a3->left = v19 - v11;
      if ( (CurrentStyle & 0x20000) != 0 && (*((_DWORD *)v8 + 26) & 0x400000) == 0 )
      {
        v21 = 0;
        if ( *((_DWORD *)v8 + 47) - *((_DWORD *)v8 + 45) >= 0 )
          v21 = *((_DWORD *)v8 + 47) - *((_DWORD *)v8 + 45);
        v22 = v21 - v19;
        a3->left = v22;
        if ( v11 >= 0 )
          v4 = v11;
        a3->right = v22 + v4;
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return v7;
}
