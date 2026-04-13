/*
 * XREFs of ?GetRuntimeClassName@?$SimpleVectorView@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18005DF50
 * Callers:
 *     ?GetRuntimeClassName@?$SimpleVectorView@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180061460 (-GetRuntimeClassName@-$SimpleVectorView@PEAVAppInstallInfoRecord@ContentManagement@_ea_180061460.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,XWinRT::IntVersionTag,1>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.Collections.IVectorView`1<ContentManagement.AppInstallInfoRecord>",
           0x54u,
           a2);
}
