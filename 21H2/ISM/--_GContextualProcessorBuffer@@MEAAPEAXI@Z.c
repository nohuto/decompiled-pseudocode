/*
 * XREFs of ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x18000ABF0
 * Callers:
 *     ??_EContextualProcessorBuffer@@OCA@EAAPEAXI@Z @ 0x18004D400 (--_EContextualProcessorBuffer@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ?_Tidy@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXXZ @ 0x1800093D0 (-_Tidy@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextual.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180068408 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@0AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18014A28C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 */

ContextualProcessorBuffer *__fastcall ContextualProcessorBuffer::`scalar deleting destructor'(
        ContextualProcessorBuffer *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  struct std::nothrow_t *v7; // rdx
  _QWORD **v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rdi
  struct std::nothrow_t *v13; // [rsp+40h] [rbp+8h] BYREF
  void *v14; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)this = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 1) = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &ContextualProcessorBuffer::`vftable'{for `IContextualProcessorBufferTarget'};
  *((_QWORD *)this + 3) = &ContextualProcessorBuffer::`vftable'{for `IContextualProcessorBufferCallback'};
  *((_QWORD *)this + 4) = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 20);
  if ( v5 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (void *)*((_QWORD *)this + 15);
  if ( v6 )
  {
    v7 = (struct std::nothrow_t *)((*((_QWORD *)this + 17) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    v13 = v7;
    v14 = v6;
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v14, (unsigned __int64 *)&v13);
      v7 = v13;
      v6 = v14;
    }
    operator delete(v6, v7);
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  v8 = (_QWORD **)*((_QWORD *)this + 13);
  *v8[1] = 0LL;
  v9 = *v8;
  if ( *v8 )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9 + 3);
      std::_Deallocate<16,0>(v9, 32LL);
      v9 = v10;
    }
    while ( v10 );
  }
  operator delete(*((void **)this + 13), (const struct std::nothrow_t *)0x20);
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(*((ContextualProcessorBuffer::InputSample **)this
                                                                                + 9));
    std::_Deallocate<16,0>(v11, 200 * ((*((_QWORD *)this + 11) - v11) / 200));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Tidy((__int64)this + 48);
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xB0);
    else
      free(this);
  }
  return this;
}
