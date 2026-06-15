/*
 * XREFs of ?get_Size@?$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x140051F90
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer______XWinRT::IntVersionTag_::Do__lambda_359495c150c46b7a3288d1331afae8ac___lambda_bcf747f32486c9d7e7a448b4bbaaf91a___ @ 0x140049564 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_140049564.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,0>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD **v4; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0;
  v3[0] = (_QWORD *)a1;
  v4 = &v5;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer______XWinRT::IntVersionTag_::Do__lambda_359495c150c46b7a3288d1331afae8ac___lambda_bcf747f32486c9d7e7a448b4bbaaf91a___(
           (unsigned int *)(a1 + 48),
           *(_QWORD *)(a1 + 40),
           v3,
           &v4);
}
