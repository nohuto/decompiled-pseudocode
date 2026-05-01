/*
 * XREFs of ??0VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@QEAA@W4CollectionChange@234@I@Z @ 0x180179E54
 * Callers:
 *     ??$Make@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@AEAW4CollectionChange@345@AEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@@12@AEAW4CollectionChange@Collections@Foundation@Windows@@AEAI@Z @ 0x1801793FC (--$Make@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@AEAW4CollectionChange@3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::VectorChangedEventArgs::VectorChangedEventArgs(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorChangedEventArgs>::`vftable'{for `Windows::Foundation::Collections::IVectorChangedEventArgs'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorChangedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_DWORD *)(a1 + 32) = a2;
  *(_QWORD *)a1 = &Windows::Foundation::Collections::Internal::VectorChangedEventArgs::`vftable'{for `Windows::Foundation::Collections::IVectorChangedEventArgs'};
  *(_QWORD *)(a1 + 8) = &Windows::Foundation::Collections::Internal::VectorChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  result = a1;
  *(_DWORD *)(a1 + 36) = a3;
  return result;
}
