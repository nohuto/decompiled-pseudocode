/*
 * XREFs of ??0AudioStateMonitorManager@@QEAA@XZ @ 0x18001F604
 * Callers:
 *     ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x18001DC68 (--$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000F720 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
AudioStateMonitorManager *__fastcall AudioStateMonitorManager::AudioStateMonitorManager(AudioStateMonitorManager *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rcx

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &AudioStateMonitorManager::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 16), 0, 0);
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 8) = v2;
  v3 = v2;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
  *((_QWORD *)this + 10) = v4;
  *((_QWORD *)this + 12) = v4 + 16;
  v5 = 16LL;
  do
  {
    *v4++ = v3;
    --v5;
  }
  while ( v5 );
  *((_QWORD *)this + 11) = v4;
  *((_QWORD *)this + 13) = 7LL;
  *((_QWORD *)this + 14) = 8LL;
  *((_DWORD *)this + 14) = 1065353216;
  return this;
}
