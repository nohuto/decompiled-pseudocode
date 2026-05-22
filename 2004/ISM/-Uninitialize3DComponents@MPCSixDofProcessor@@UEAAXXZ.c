/*
 * XREFs of ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x18018F330
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18007A960 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

void __fastcall MPCSixDofProcessor::Uninitialize3DComponents(MPCSixDofProcessor *this)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rdx
  _QWORD *v9; // rdi
  std::_Ref_count_base *v10; // rcx
  _QWORD *v11; // rdi
  std::_Ref_count_base *v12; // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 619);
  *((_QWORD *)this + 619) = 0LL;
  if ( v1 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v1);
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 620);
  *((_QWORD *)this + 620) = 0LL;
  if ( v3 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v3);
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 621);
  *((_QWORD *)this + 621) = 0LL;
  if ( v4 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v4);
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 622);
  *((_QWORD *)this + 622) = 0LL;
  if ( v5 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v5);
  v6 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 623);
  *((_QWORD *)this + 623) = 0LL;
  if ( v6 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v6);
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 624);
  *((_QWORD *)this + 624) = 0LL;
  if ( v7 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v7);
  v8 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 625);
  *((_QWORD *)this + 625) = 0LL;
  if ( v8 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v8);
  v9 = (_QWORD *)*((_QWORD *)this + 626);
  *((_QWORD *)this + 626) = 0LL;
  if ( v9 )
  {
    v10 = (std::_Ref_count_base *)v9[3];
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    operator delete(v9, (const struct std::nothrow_t *)0x20);
  }
  v11 = (_QWORD *)*((_QWORD *)this + 627);
  *((_QWORD *)this + 627) = 0LL;
  if ( v11 )
  {
    v12 = (std::_Ref_count_base *)v11[3];
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    operator delete(v11, (const struct std::nothrow_t *)0x20);
  }
  MPCInputProviderBase::Uninitialize3DComponents(this);
}
