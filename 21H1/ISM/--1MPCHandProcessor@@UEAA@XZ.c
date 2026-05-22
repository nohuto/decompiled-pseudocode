/*
 * XREFs of ??1MPCHandProcessor@@UEAA@XZ @ 0x18007D688
 * Callers:
 *     ??_GMPCHandProcessor@@UEAAPEAXI@Z @ 0x18007DBE0 (--_GMPCHandProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18007AE10 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

void __fastcall MPCHandProcessor::~MPCHandProcessor(MPCHandProcessor *this)
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rdx
  _QWORD *v3; // rdi
  std::_Ref_count_base *v4; // rcx
  _QWORD *v5; // rdi
  std::_Ref_count_base *v6; // rcx

  *(_QWORD *)this = &MPCHandProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCHandProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  v2 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 582);
  if ( v2 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v2);
  v3 = (_QWORD *)*((_QWORD *)this + 581);
  if ( v3 )
  {
    v4 = (std::_Ref_count_base *)v3[3];
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    operator delete(v3, (const struct std::nothrow_t *)0x20);
  }
  v5 = (_QWORD *)*((_QWORD *)this + 580);
  if ( v5 )
  {
    v6 = (std::_Ref_count_base *)v5[3];
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    operator delete(v5, (const struct std::nothrow_t *)0x20);
  }
  *((_DWORD *)this + 1157) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
}
