/*
 * XREFs of ??1?$ComPtr@VChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180032580
 * Callers:
 *     _Windows::Foundation::Collections::Internal::NaiveSplitView_HSTRING_____IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::HashMapOptions_HSTRING_____IInspectable___Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______0_1_0___::Split_::_1_::dtor$0 @ 0x180046DA1 (_Windows--Foundation--Collections--Internal--NaiveSplitView_HSTRING_____IInspectable___Windows--.c)
 *     _Windows::Foundation::Collections::Internal::NaiveSplitView_HSTRING_____IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::HashMapOptions_HSTRING_____IInspectable___Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______0_1_0___::Force_::_1_::dtor$1 @ 0x180046DC5 (_Windows--Foundation--Collections--Internal--NaiveSplitView_HSTRING_____IInspectabl_ea_180046DC5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@U_GUID@@@Collections@Foundation@Windows@@U?$IIterable@U_GUID@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@U_G.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView>::~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<_GUID>,Windows::Foundation::Collections::IIterable<_GUID>,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
