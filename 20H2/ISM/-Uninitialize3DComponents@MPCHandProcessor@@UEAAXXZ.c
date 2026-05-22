/*
 * XREFs of ?Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x18007F0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18007A8C0 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

void __fastcall MPCHandProcessor::Uninitialize3DComponents(MPCHandProcessor *this)
{
  _QWORD *v1; // rdi
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rdi
  std::_Ref_count_base *v5; // rcx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rdx

  v1 = (_QWORD *)*((_QWORD *)this + 577);
  *((_QWORD *)this + 577) = 0LL;
  if ( v1 )
  {
    v3 = (std::_Ref_count_base *)v1[3];
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    operator delete(v1, (const struct std::nothrow_t *)0x20);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 578);
  *((_QWORD *)this + 578) = 0LL;
  if ( v4 )
  {
    v5 = (std::_Ref_count_base *)v4[3];
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    operator delete(v4, (const struct std::nothrow_t *)0x20);
  }
  v6 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 579);
  *((_QWORD *)this + 579) = 0LL;
  if ( v6 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v6);
  MPCInputProviderBase::Uninitialize3DComponents(this);
}
