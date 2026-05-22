/*
 * XREFs of ??1MPCGamepadProcessor@@UEAA@XZ @ 0x180191DB8
 * Callers:
 *     ??_GMPCGamepadProcessor@@UEAAPEAXI@Z @ 0x180192140 (--_GMPCGamepadProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18007AE10 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

void __fastcall MPCGamepadProcessor::~MPCGamepadProcessor(MPCGamepadProcessor *this)
{
  _QWORD *v2; // rdi
  std::_Ref_count_base *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rdx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 645);
  if ( v2 )
  {
    v3 = (std::_Ref_count_base *)v2[3];
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    operator delete(v2, (const struct std::nothrow_t *)0x20);
  }
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 644);
  if ( v4 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v4);
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 643);
  if ( v5 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v5);
  v6 = (void *)*((_QWORD *)this + 582);
  if ( v6 )
    operator delete(v6, (const struct std::nothrow_t *)0x58);
  v7 = *((_QWORD *)this + 581);
  if ( v7 )
  {
    *((_QWORD *)this + 581) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 580);
  if ( v8 )
  {
    *((_QWORD *)this + 580) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *((_DWORD *)this + 1159) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase((MPCGamepadProcessor *)((char *)this + 8));
}
