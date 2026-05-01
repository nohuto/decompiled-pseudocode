/*
 * XREFs of ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801F4680
 * Callers:
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F46EC (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z @ 0x1801F4F20 (-SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z.c)
 * Callees:
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1801F3D38 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility(
        CortanaStoreAppExperienceManager *this,
        unsigned __int8 a2)
{
  unsigned int v2; // ebx
  TaskbarHelpers *v4; // rax
  HMONITOR v5; // rdx
  HWND TrayWindowForMonitor; // rax

  v2 = a2;
  if ( *((_BYTE *)this + 312) != a2 )
  {
    v4 = (TaskbarHelpers *)MonitorFromRect((LPCRECT)((char *)this + 296), 1u);
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v4, v5);
    PostMessageW(TrayWindowForMonitor, 0x4F6u, v2, 0LL);
    *((_BYTE *)this + 312) = v2;
  }
  return 0LL;
}
