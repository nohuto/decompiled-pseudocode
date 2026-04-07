/*
 * XREFs of ?UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z @ 0x18007F5F8
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18007D7D4 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18004E630 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::UnregisterWilFeatureConfigurationChange(wil::details *this, void *a2)
{
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax

  ProcAddress = (FARPROC)g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification;
  if ( g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification
    || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
        ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlUnregisterFeatureConfigurationChangeNotification"),
        (g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification = (void (*)(void *))ProcAddress) != 0LL) )
  {
    ((void (__fastcall *)(wil::details *, void *))ProcAddress)(this, a2);
  }
}
