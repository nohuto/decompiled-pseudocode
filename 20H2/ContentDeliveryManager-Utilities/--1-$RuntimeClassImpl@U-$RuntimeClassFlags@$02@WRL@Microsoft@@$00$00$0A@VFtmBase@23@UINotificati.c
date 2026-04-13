/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180018A24
 * Callers:
 *     ??_GNotificationManager@ContentManagement@@UEAAPEAXI@Z @ 0x18001A1E0 (--_GNotificationManager@ContentManagement@@UEAAPEAXI@Z.c)
 *     ??_EAppInstallInfoRecordImpl@ContentManagement@@UEAAPEAXI@Z @ 0x180024A70 (--_EAppInstallInfoRecordImpl@ContentManagement@@UEAAPEAXI@Z.c)
 *     ??_GCreativeEventReportedCache@ContentManagement@@UEAAPEAXI@Z @ 0x18003BE90 (--_GCreativeEventReportedCache@ContentManagement@@UEAAPEAXI@Z.c)
 *     ??_ETargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x1800557D0 (--_ETargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1800558A8 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UITargetedContentActionInt.c)
 *     ??_EAppManager@ContentManagement@@UEAAPEAXI@Z @ 0x18005FB70 (--_EAppManager@ContentManagement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 < 0 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release((volatile signed __int32 *)(2 * v2));
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
