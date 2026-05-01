/*
 * XREFs of ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x180370870
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1802124BC (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___ @ 0x18036EC68 (CreationThreadDispatcher--RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___.c)
 */

void __fastcall AccessibilityExperienceManager::OnDeviceArrival(
        AccessibilityExperienceManager *this,
        const struct DeviceInfo *a2)
{
  if ( a2 && (*((_DWORD *)a2 + 1) & 0x4000) != 0 && ++*((_DWORD *)this + 80) == 1 )
  {
    SHRegSetBOOL((HKEY)this, L"Software\\Microsoft\\Input\\EC", L"ECHardware", 1);
    CreationThreadDispatcher::RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___(
      *((_QWORD *)this + 17),
      (volatile int *)this - 40);
  }
}
