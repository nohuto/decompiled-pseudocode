/*
 * XREFs of ?GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180017490
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180039584 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800172E4 (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044B1C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044B28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetRelatedProcessesFromGameConfigStore(__int64 a1, __int128 *a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // edi
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  HRESULT ApartmentType; // eax
  int v13; // ecx
  WCHAR *v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  const struct std::nothrow_t *v19; // rdx
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v22; // [rsp+70h] [rbp+30h] BYREF
  WCHAR *pAptType; // [rsp+78h] [rbp+38h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+88h] [rbp+48h] BYREF

  v22 = 0;
  v20 = *a2;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, &v20, 22LL);
  v7 = v6;
  if ( (_WORD)v6 == 2 )
  {
    v8 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    *a3 = 0LL;
    v9 = 0;
    v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      v10[4] = 1LL;
      *v10 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable';
      v10[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
      v10[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v11 = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable';
      v11[1] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
      v11[2] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
      *((_DWORD *)v11 + 10) = 0;
      *((_DWORD *)v11 + 11) = 0;
      *((_DWORD *)v11 + 12) = 0;
      v11[7] = 0LL;
      ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, &pAptQualifier);
      v13 = (int)pAptType;
      if ( ApartmentType < 0 )
        v13 = 1;
      LODWORD(pAptType) = v13;
      if ( v13 == 3 || !v13 )
      {
        *((_DWORD *)v11 + 18) = 1;
        *((_DWORD *)v11 + 20) = 0;
      }
      else
      {
        *((_DWORD *)v11 + 18) = 0;
        InitializeSRWLock((PSRWLOCK)v11 + 10);
      }
      *((_DWORD *)v11 + 22) = 0;
      *((_DWORD *)v11 + 24) = 0;
    }
    else
    {
      v9 = -2147024882;
      v11 = 0LL;
    }
    if ( v9 >= 0 )
    {
      *a3 = (__int64)v11;
      v11 = 0LL;
    }
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    if ( v9 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v15 = (WCHAR *)operator new[]((unsigned int)v22 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
  pAptType = v15;
  if ( !v15 )
  {
    v9 = -2147024882;
    v16 = 2147942414LL;
    v17 = 509LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v16);
    goto LABEL_33;
  }
  v20 = *a2;
  v18 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, WCHAR *, int *))(*(_QWORD *)a1 + 64LL))(
          a1,
          &v20,
          22LL,
          v15,
          &v22);
  v9 = v18;
  if ( v18 < 0 )
  {
    v17 = 511LL;
LABEL_30:
    v16 = (unsigned int)v18;
    goto LABEL_31;
  }
  v18 = DeserializeRelatedProcessArray(v15, v22, a3);
  v9 = v18;
  if ( v18 < 0 )
  {
    v17 = 512LL;
    goto LABEL_30;
  }
  v9 = 0;
LABEL_33:
  if ( v15 )
    operator delete(v15, v19);
  return (unsigned int)v9;
}
