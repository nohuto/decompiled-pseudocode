/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002A568
 * Callers:
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180013874 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x18002A050 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 *     ?CreateMUID@ShellFeedsAvailabilityHelpers@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E1F48 (-CreateMUID@ShellFeedsAvailabilityHelpers@@YAJAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180138A1C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180138BA4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x18013A230 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180140BB8 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x180196E50 (-CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x1801F7CD4 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 *     ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x180215830 (-ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z.c)
 *     ?GetSourceAppIdViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x180282494 (-GetSourceAppIdViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA-AW4ViewGro.c)
 *     ?LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z @ 0x180291C44 (-LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18045EF70 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18002BFC4 (__local_stdio_printf_options.c)
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  size_t v6; // rbx
  unsigned __int64 *v7; // rax
  int v8; // eax
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v4 = 0;
    v6 = a2 - 1;
    v7 = _local_stdio_printf_options();
    v8 = __stdio_common_vswprintf(*v7 | 1, Buffer, v6, a3, 0LL, va);
    if ( v8 < 0 || v8 > v6 )
    {
      Buffer[v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v8 == v6 )
    {
      Buffer[v6] = 0;
    }
  }
  return (unsigned int)v4;
}
