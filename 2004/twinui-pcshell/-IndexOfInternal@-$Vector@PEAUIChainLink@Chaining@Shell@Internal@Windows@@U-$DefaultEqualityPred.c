/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@IPEAUIChainLink@Chaining@Shell@25@PEAIPEAE@Z @ 0x18017EA30
 * Callers:
 *     ?IndexOf@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIChainLink@Chaining@Shell@25@PEAIPEAE@Z @ 0x18017E710 (-IndexOf@-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate@PE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$?RUITreeNode@ComposableShell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITreeNode@ComposableShell@Internal@Windows@@0PEA_N@Z @ 0x18014291C (--$-RUITreeNode@ComposableShell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITreeNode@Co.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x18014317C (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x18017F510 (-Localize@ReferencedGitCookie@-$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@det.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        __m128i *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int *a5,
        _BYTE *a6)
{
  int v9; // edi
  unsigned int i; // esi
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __m128i v16; // [rsp+30h] [rbp-10h]
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+30h] BYREF
  bool v18; // [rsp+80h] [rbp+40h] BYREF

  v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1;
  v18 = 0;
  v9 = 0;
  for ( i = 0; i < a3; ++i )
  {
    if ( v9 < 0 )
      return (unsigned int)v9;
    v11 = 0LL;
    v17 = 0LL;
    v16 = *a2;
    v9 = 0;
    v12 = v16.m128i_i64[0];
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v16, 8)) )
    {
      v9 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::Chaining::IChainLink>::ReferencedGitCookie::Localize(
             v16.m128i_i64[0],
             &v15);
    }
    else
    {
      v15 = v16.m128i_i64[0];
      if ( !v16.m128i_i64[0] )
        goto LABEL_9;
      (*(void (**)(void))(*(_QWORD *)v16.m128i_i64[0] + 8LL))();
    }
    if ( v9 >= 0 )
    {
      v12 = v15;
LABEL_9:
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v12;
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>((__int64 *)&v17);
      v17 = v11;
    }
    if ( v9 >= 0 )
    {
      v9 = XWinRT::InterfaceEquals::operator()<Windows::Internal::ComposableShell::ITreeNode>(v13, a4, v11, &v18);
      if ( v9 >= 0 && v18 )
      {
        *a6 = 1;
        *a5 = i;
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>((__int64 *)&v17);
        return (unsigned int)v9;
      }
    }
    XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>((__int64 *)&v17);
    ++a2;
  }
  return (unsigned int)v9;
}
