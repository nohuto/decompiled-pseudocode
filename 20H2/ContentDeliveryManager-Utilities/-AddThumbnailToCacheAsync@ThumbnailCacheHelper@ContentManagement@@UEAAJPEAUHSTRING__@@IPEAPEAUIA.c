/*
 * XREFs of ?AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18000EA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncAction@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@VComTaskPoolHandler@Internal@Windows@@V_lambda_c9aa0fd23ae4b9ff361376eb433e5573_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@$$QEAV_lambda_c9aa0fd23ae4b9ff361376eb433e5573_@@@Z @ 0x180018A68 (--$MakeAsyncAction@U-$AsyncCausalityOptions@$1-AddThumbnailToCacheAsyncActionName@ContentManagem.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync(
        ContentManagement::ThumbnailCacheHelper *this,
        HSTRING a2,
        int a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  unsigned int v6; // edi
  HRESULT v8; // eax
  int v9; // ebx
  HSTRING v10; // rbx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+40h] [rbp-20h]
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF
  char v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  HSTRING newString; // [rsp+88h] [rbp+28h] BYREF

  v6 = 0;
  *a4 = 0LL;
  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v15 = 0LL;
  LOBYTE(v16) = 0;
  v8 = WindowsDuplicateString(a2, &newString);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = (unsigned int)v8;
    v13 = 166LL;
  }
  else
  {
    v10 = newString;
    WindowsDeleteString(0LL);
    string = v10;
    v18 = 0;
    LOBYTE(v16) = 1;
    v19 = a3;
    v9 = Windows::Internal::MakeAsyncAction<Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>,Windows::Internal::ComTaskPoolHandler,_lambda_c9aa0fd23ae4b9ff361376eb433e5573_>(
           &v14,
           a4,
           v11,
           &string,
           -2LL,
           0x8000000001LL,
           0,
           0LL,
           v16);
    if ( string )
      WindowsDeleteString(string);
    if ( v9 >= 0 )
      return v6;
    v12 = (unsigned int)v9;
    v13 = 189LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v12);
  return (unsigned int)v9;
}
