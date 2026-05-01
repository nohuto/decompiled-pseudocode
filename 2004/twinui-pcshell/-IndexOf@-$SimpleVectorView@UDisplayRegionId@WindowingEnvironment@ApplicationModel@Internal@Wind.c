/*
 * XREFs of ?IndexOf@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAIPEAE@Z @ 0x18017E690
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits_Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_1_1_0____XWinRT::IntVersionTag_::Do__lambda_d84ee3dd4c938019ede2da56dea9d036___lambda_935e732581706e5406484d9f6e613388___ @ 0x180178B7C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_180178B7C.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,XWinRT::IntVersionTag,1>::IndexOf(
        __int64 a1,
        int a2,
        ...)
{
  __int64 v2; // rdx
  _QWORD v4[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+68h] [rbp+18h] BYREF
  _DWORD *v7; // [rsp+70h] [rbp+20h] BYREF
  va_list va; // [rsp+70h] [rbp+20h]
  _BYTE *v9; // [rsp+78h] [rbp+28h] BYREF
  va_list va1; // [rsp+78h] [rbp+28h]
  va_list va2; // [rsp+80h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v7 = va_arg(va1, _DWORD *);
  va_copy(va2, va1);
  v9 = va_arg(va2, _BYTE *);
  v6 = a2;
  *v7 = 0;
  v5[0] = a1;
  *v9 = 0;
  v2 = *(_QWORD *)(a1 + 72);
  va_copy((va_list)v4, va);
  va_copy((va_list)&v4[1], va1);
  v5[1] = &v6;
  va_copy((va_list)&v5[2], va);
  va_copy((va_list)&v5[3], va1);
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits_Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_1_1_0____XWinRT::IntVersionTag_::Do__lambda_d84ee3dd4c938019ede2da56dea9d036___lambda_935e732581706e5406484d9f6e613388___(
           (unsigned int *)(a1 + 80),
           v2,
           (__int64)v5,
           (__int64)v4);
}
