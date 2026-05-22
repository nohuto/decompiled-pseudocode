/*
 * XREFs of ??0MPCMouseProcessor@@QEAA@XZ @ 0x180020090
 * Callers:
 *     ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18001F4C0 (--$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x18002AA2C (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x18002AA5C (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x180086748 (-Reset@RayStabilizer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
MPCMouseProcessor *__fastcall MPCMouseProcessor::MPCMouseProcessor(MPCMouseProcessor *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  RayStabilizer *v5; // rcx

  v2 = (_QWORD *)((char *)this + 8);
  MPCInputProviderBase::MPCInputProviderBase((MPCMouseProcessor *)((char *)this + 16));
  *((_DWORD *)this + 1161) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IRawInputProvider'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMouseProcessorForwarding,MPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MPCMouseProcessor::`vftable'{for `IRawInputProvider'};
  *v2 = &MPCMouseProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMouseProcessorForwarding,MPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCMouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &MPCMouseProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_QWORD *)this + 581) = 0LL;
  *((_QWORD *)this + 582) = 0LL;
  *((_QWORD *)this + 583) = 0LL;
  *((_QWORD *)this + 584) = 0LL;
  *((_QWORD *)this + 585) = 0LL;
  memset_0((char *)this + 4688, 0, 0x60CuLL);
  *((_DWORD *)this + 1174) = 1548;
  *((_WORD *)this + 3118) = 1;
  *((_QWORD *)this + 780) = 0LL;
  *((_QWORD *)this + 781) = 0LL;
  *((_QWORD *)this + 782) = 0LL;
  *((_QWORD *)this + 783) = 0LL;
  *((_QWORD *)this + 784) = 0LL;
  *((_QWORD *)this + 785) = 0LL;
  *((_QWORD *)this + 786) = 0LL;
  *((_QWORD *)this + 787) = 0LL;
  *((_DWORD *)this + 1576) = 0;
  *((_QWORD *)this + 789) = 0LL;
  *((_WORD *)this + 3160) = 0;
  *(_QWORD *)((char *)this + 6324) = 0LL;
  *(_QWORD *)((char *)this + 6332) = 0LL;
  *((_DWORD *)this + 1585) = 0;
  *((_QWORD *)this + 793) = 0LL;
  *((_QWORD *)this + 794) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 793) = v3;
  *((_BYTE *)this + 6360) = 0;
  *(_QWORD *)((char *)this + 6364) = 0LL;
  *((_DWORD *)this + 1593) = 0;
  *((_QWORD *)this + 797) = 0LL;
  *((_QWORD *)this + 798) = 0LL;
  *((_WORD *)this + 3196) = 0;
  *((_DWORD *)this + 1599) = 0;
  *((_QWORD *)this + 800) = 0LL;
  memset_0((char *)this + 6408, 0, 0x7F0uLL);
  *((_DWORD *)this + 1608) = 2032;
  if ( *((_DWORD *)this + 111) != 1 )
  {
    *((_DWORD *)this + 111) = 1;
    RayStabilizer::CalculateMaximumSize((MPCMouseProcessor *)((char *)this + 400));
    RayStabilizer::Reset(v5);
  }
  return this;
}
