/*
 * XREFs of ?GetView@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@345@@Z @ 0x180018C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019780 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180019780.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044B28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::GetView(
        _DWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx
  int v5; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  _QWORD *v9; // rbp
  _QWORD *v10; // rcx

  *a2 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v8 = Microsoft::WRL::Details::ModuleBase::module_;
    v6[4] = 1LL;
    *v6 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable';
    v6[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
    v6[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
    if ( v8 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v8 + 8LL))(v8);
    *v7 = &Windows::Foundation::Collections::Internal::SimpleVectorView<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,0>::`vftable';
    v7[1] = &Windows::Foundation::Collections::Internal::SimpleVectorView<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,0>::`vftable'{for `IWeakReferenceSource'};
    v7[2] = &Windows::Foundation::Collections::Internal::SimpleVectorView<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
    v7[5] = a1;
    if ( a1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    *((_DWORD *)v7 + 12) = 0;
    *((_DWORD *)v7 + 13) = a1[22];
  }
  else
  {
    v5 = -2147024882;
    v7 = 0LL;
  }
  v9 = 0LL;
  v10 = v7;
  if ( v5 >= 0 )
  {
    v4 = v7;
    v10 = 0LL;
    v9 = v7;
  }
  if ( v10 )
    ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::Release)();
  if ( v5 >= 0 )
  {
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    *a2 = v4;
  }
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::Release(v4);
  return (unsigned int)v5;
}
