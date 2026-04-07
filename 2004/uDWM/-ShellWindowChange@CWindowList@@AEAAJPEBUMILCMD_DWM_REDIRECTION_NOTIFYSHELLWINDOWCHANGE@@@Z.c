/*
 * XREFs of ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x1800515A8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180011830 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18001E064 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180029B88 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18002BFA4 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180051684 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 */

__int64 __fastcall CWindowList::ShellWindowChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *a2)
{
  HWND v4; // rbp
  unsigned int v5; // ebx
  _QWORD *Element; // rax
  int v7; // eax
  int updated; // eax
  _DWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+38h] [rbp-30h]
  int v12; // [rsp+48h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+78h] [rbp+10h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v5 = 0;
  if ( CWindowList::GetShellWindowForDesktop(this, *(_QWORD *)((char *)a2 + 12)) != v4 )
  {
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
                *(_QWORD *)((char *)a2 + 12));
    if ( Element )
      Element[8] = v4;
    if ( *(_QWORD *)((char *)a2 + 4)
      || (v10[1] = 0,
          v11 = 0LL,
          v10[0] = 1073741880,
          v12 = 1,
          v7 = CDesktopManager::PostActivateLivePreview(
                 CDesktopManager::s_pDesktopManagerInstance,
                 (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)v10),
          v5 = v7,
          v7 >= 0) )
    {
      updated = CWindowList::UpdateDesktopWindowReplacement(this, *(_QWORD *)((char *)a2 + 12));
      v5 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x18EEu);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x18EBu);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v5;
}
