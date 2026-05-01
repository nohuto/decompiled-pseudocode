/*
 * XREFs of ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x180370010
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x180207874 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___ @ 0x18036E3A8 (CreationThreadDispatcher--RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___.c)
 */

void __fastcall AccessibilityExperienceManager::OnDeviceRemoval(
        AccessibilityExperienceManager *this,
        const struct DeviceInfo *a2)
{
  if ( a2 && (*((_DWORD *)a2 + 1) & 0x4000) != 0 && (*((_DWORD *)this + 80))-- == 1 )
  {
    SHRegSetBOOL((HKEY)this, L"Software\\Microsoft\\Input\\EC", L"ECHardware", 0);
    CreationThreadDispatcher::RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___(
      *((_QWORD *)this + 17),
      (volatile int *)this - 40);
  }
}
