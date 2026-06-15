/*
 * XREFs of ??1?$MakeAllocator@VCDuckingManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18000E694
 * Callers:
 *     _CWindowsPolicyManager::RuntimeClassInitialize_::_1_::dtor$7 @ 0x180040A63 (_CWindowsPolicyManager--RuntimeClassInitialize_--_1_--dtor$7.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$3 @ 0x18004144D (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager___&_CProcess____::_1_::dtor$0 @ 0x180041902 (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CW.c)
 *     _TSSession::Create_::_1_::dtor$3 @ 0x180041E3B (_TSSession--Create_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CDuckingManager>::~MakeAllocator<CDuckingManager>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
