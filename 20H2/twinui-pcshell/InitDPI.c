/*
 * XREFs of InitDPI @ 0x18046C908
 * Callers:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x180012974 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001370C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x1801CACDC (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

int InitDPI()
{
  HDC ProcAddress; // rax
  int v1; // ebx
  HMODULE ModuleHandleW; // rax
  HDC v3; // rbx

  ProcAddress = (HDC)qword_1805CACA0;
  v1 = 1;
  if ( qword_1805CACA0 == -1 )
  {
    ModuleHandleW = GetModuleHandleW(L"USER32.DLL");
    if ( ModuleHandleW )
    {
      ProcAddress = (HDC)GetProcAddress(ModuleHandleW, "IsProcessDPIAware");
      qword_1805CACA0 = (__int64)ProcAddress;
    }
    else
    {
      ProcAddress = (HDC)qword_1805CACA0;
    }
  }
  if ( ProcAddress )
  {
    LODWORD(ProcAddress) = ((__int64 (*)(void))ProcAddress)();
    v1 = (int)ProcAddress;
  }
  if ( dword_1805CAC30 == -1 || dword_1805CE6F4 != v1 )
  {
    dword_1805CE6F4 = v1;
    ProcAddress = GetDC(0LL);
    v3 = ProcAddress;
    if ( ProcAddress )
    {
      dword_1805CAC30 = GetDeviceCaps(ProcAddress, 88);
      GetDeviceCaps(v3, 90);
      LODWORD(ProcAddress) = ReleaseDC(0LL, v3);
    }
    else
    {
      dword_1805CAC30 = 96;
    }
  }
  return (int)ProcAddress;
}
