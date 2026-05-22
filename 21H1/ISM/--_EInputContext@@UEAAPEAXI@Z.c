/*
 * XREFs of ??_EInputContext@@UEAAPEAXI@Z @ 0x1800179E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180011654 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180068368 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

InputContext *__fastcall InputContext::`vector deleting destructor'(InputContext *this, __int64 a2, __int64 a3)
{
  char v3; // si
  _QWORD *v5; // rdi
  void *v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  _QWORD **v8; // rcx
  _QWORD *v9; // rcx
  void *v10; // rcx
  const struct std::nothrow_t *v11; // rdx
  _QWORD **v12; // rcx
  _QWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  unsigned __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  void *v20; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  v5 = (_QWORD *)*((_QWORD *)this + 22);
  if ( v5 )
  {
    v16 = v5[4];
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v16);
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v5 + 1, a2, a3);
    operator delete(v5, (const struct std::nothrow_t *)0x78);
  }
  v6 = (void *)*((_QWORD *)this + 17);
  if ( v6 )
  {
    v7 = (const struct std::nothrow_t *)((*((_QWORD *)this + 19) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    v19 = (unsigned __int64)v7;
    v20 = v6;
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v20, &v19);
      v7 = (const struct std::nothrow_t *)v19;
      v6 = v20;
    }
    operator delete(v6, v7);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  v8 = (_QWORD **)*((_QWORD *)this + 15);
  *v8[1] = 0LL;
  v9 = *v8;
  if ( v9 )
  {
    do
    {
      v17 = (_QWORD *)*v9;
      std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x18);
      v9 = v17;
    }
    while ( v17 );
  }
  operator delete(*((void **)this + 15), (const struct std::nothrow_t *)0x18);
  v10 = (void *)*((_QWORD *)this + 6);
  if ( v10 )
  {
    v11 = (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL);
    v19 = (unsigned __int64)v11;
    v20 = v10;
    if ( (unsigned __int64)v11 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v20, &v19);
      v11 = (const struct std::nothrow_t *)v19;
      v10 = v20;
    }
    operator delete(v10, v11);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v12 = (_QWORD **)*((_QWORD *)this + 4);
  *v12[1] = 0LL;
  v13 = *v12;
  if ( *v12 )
  {
    do
    {
      v18 = (_QWORD *)*v13;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13 + 3);
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)0x20);
      v13 = v18;
    }
    while ( v18 );
  }
  operator delete(*((void **)this + 4), (const struct std::nothrow_t *)0x20);
  v14 = *((_QWORD *)this + 2);
  if ( v14 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xB8);
    else
      free(this);
  }
  return this;
}
