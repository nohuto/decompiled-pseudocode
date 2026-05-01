/*
 * XREFs of ??$MakeAndInitialize@VCApplicationViewBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803CC31C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803CC400 (-CreateInstance@-$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIPWSLayoutItemInternal@@UIPenWorkspaceLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180227BF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180227BF0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationViewBroker,IUnknown,>(_QWORD *a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _DWORD *v5; // rcx
  volatile int *v6; // rdx

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 3) = 1;
    *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewBroker>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v4 = &CApplicationViewBroker::`vftable';
    v4[2] = 0LL;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v5, &GUID_d4351e8c_208e_4c24_88ac_6e2add5f4bb1) )
    {
      *a1 = v4;
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    }
    else
    {
      v1 = -2147467262;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(
      (__int64)v4,
      v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
