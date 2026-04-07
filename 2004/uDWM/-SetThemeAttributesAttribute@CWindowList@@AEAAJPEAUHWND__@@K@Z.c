/*
 * XREFs of ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180040DDC
 * Callers:
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180040D60 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180012178 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18001B3A4 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::SetThemeAttributesAttribute(CWindowList *this, HWND a2, int a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rcx
  int v7; // eax
  CWindowData *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v9);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1214u);
  }
  else
  {
    v6 = v9;
    if ( v9 )
    {
      if ( *((_DWORD *)v9 + 89) != a3 )
      {
        *((_DWORD *)v9 + 89) = a3;
        v7 = CWindowData::OnWindowStyleUpdated(v6);
        v5 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x121Fu);
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return v5;
}
