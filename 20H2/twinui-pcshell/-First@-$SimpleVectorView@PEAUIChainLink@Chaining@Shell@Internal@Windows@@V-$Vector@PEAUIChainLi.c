/*
 * XREFs of ?First@?$SimpleVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@345@@Z @ 0x18017BA90
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::Chaining::IChainLink___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::Chaining::IChainLink___0_1_0____XWinRT::IntVersionTag_::Do__lambda_63007384cbc26d4c9c9706101aeec82a___lambda_7a28a840d7801b8eb9c1ca3bdd184909___ @ 0x180178474 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_180178474.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,XWinRT::IntVersionTag,1>::First(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v4 = &v5;
  v3[0] = a1 - 16;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::Chaining::IChainLink___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::Chaining::IChainLink___0_1_0____XWinRT::IntVersionTag_::Do__lambda_63007384cbc26d4c9c9706101aeec82a___lambda_7a28a840d7801b8eb9c1ca3bdd184909___(
           (unsigned int *)(a1 + 64),
           *(_QWORD *)(a1 + 56),
           (__int64)v3,
           &v4);
}
