/*
 * XREFs of ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x180043E3C
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18003E6E0 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180016018 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800163A0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?DetermineAppIdKind@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AW4AppIdKind@Activities@Data@56@PEBG@Z @ 0x180043EE4 (-DetermineAppIdKind@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AW4AppIdKin.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _alloca_probe @ 0x1800EEE40 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$FailedToRetreiveAppIdInfo@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x1802381AC (--$FailedToRetreiveAppIdInfo@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x180239244 (-EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18046B804 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetAppIdInfoForApplicationView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        DWORD a4)
{
  void *v4; // rsp
  int v7; // edi
  __int64 v8; // rcx
  char *v10; // rbx
  unsigned __int16 **v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  signed int LastError; // eax
  signed int v15; // [rsp+20h] [rbp-E0h] BYREF
  void *v16; // [rsp+28h] [rbp-D8h] BYREF
  DWORD dwSize; // [rsp+30h] [rbp-D0h] BYREF
  void *v18; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR ExeName[264]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v20[2088]; // [rsp+250h] [rbp+150h] BYREF

  v4 = alloca(4784LL);
  v16 = 0LL;
  v7 = -1;
  if ( (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)a3 + 136LL))(a3, &v16) >= 0 )
  {
    v7 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::DetermineAppIdKind(v8, v16);
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_3;
  v10 = (char *)OpenProcess(0x1000u, 0, a4);
  if ( (unsigned __int64)(v10 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_10;
  if ( (int)CallerIdentity::GetProcessAppIdWithAppResolverFallback(v10, &v16, v11) >= 0 )
  {
    v7 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::DetermineAppIdKind(v12, v16);
    goto LABEL_13;
  }
  dwSize = 260;
  memset_0(ExeName, 0, 0x208uLL);
  if ( !QueryFullProcessImageNameW(v10, 0, ExeName, &dwSize) )
  {
LABEL_10:
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v15 = LastError;
    TaskFlowDataEngineTelemetry::FailedToRetreiveAppIdInfo<long &>(&v15);
    goto LABEL_13;
  }
  memset_0(v20, 0, 0x1048uLL);
  EncodeCommonRelativePath(v20, v13, ExeName);
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v18,
    (__int64)v20,
    -1LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &v16,
    v18);
  v7 = 2;
LABEL_13:
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
LABEL_3:
  *(_DWORD *)a2 = v7;
  *(_QWORD *)(a2 + 8) = v16;
  return a2;
}
