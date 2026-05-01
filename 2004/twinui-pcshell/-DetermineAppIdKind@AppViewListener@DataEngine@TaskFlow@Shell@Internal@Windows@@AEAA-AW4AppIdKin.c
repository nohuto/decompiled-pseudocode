/*
 * XREFs of ?DetermineAppIdKind@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AW4AppIdKind@Activities@Data@56@PEBG@Z @ 0x180043EE4
 * Callers:
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x180043E3C (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$FailedToRetreiveAppIdInfo@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x1802381AC (--$FailedToRetreiveAppIdInfo@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::DetermineAppIdKind(
        __int64 a1,
        const WCHAR *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  void *v6; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1;
  v6 = 0LL;
  if ( SHCreateItemInKnownFolder(&FOLDERID_AppsFolder, 0x4100u, a2, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &v6) < 0 )
  {
    v2 = 2;
  }
  else
  {
    LODWORD(v4) = 0;
    v5 = (*(__int64 (__fastcall **)(void *, void *, __int64 *))(*(_QWORD *)v6 + 144LL))(
           v6,
           &PKEY_AppUserModel_HostEnvironment,
           &v4);
    if ( v5 < 0 )
    {
      TaskFlowDataEngineTelemetry::FailedToRetreiveAppIdInfo<long &>(&v5);
      v2 = -1;
    }
    else
    {
      v2 = (unsigned int)(v4 - 1) > 1;
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  return v2;
}
