/*
 * XREFs of ?wil_details_RtlRegisterFeatureConfigurationChangeNotification@@YAJP6AXPEAX@Z0PEA_KPEAPEAX@Z @ 0x18004E3E8
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18004E464 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18004E630 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_RtlRegisterFeatureConfigurationChangeNotification(
        void (*a1)(void *),
        void *a2,
        unsigned __int64 *a3,
        void **a4)
{
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax

  ProcAddress = (FARPROC)g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification;
  if ( g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification )
    return ((__int64 (__fastcall *)(void (*)(void *), void *, _QWORD, void **))ProcAddress)(a1, a2, 0LL, a4);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlRegisterFeatureConfigurationChangeNotification");
  g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification = (int (*)(void (*)(void *), void *, unsigned __int64 *, void **))ProcAddress;
  if ( ProcAddress )
    return ((__int64 (__fastcall *)(void (*)(void *), void *, _QWORD, void **))ProcAddress)(a1, a2, 0LL, a4);
  else
    return 3221225785LL;
}
