/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DD50
 * Callers:
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x18004D830 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 *     ??1?$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004DCA0 (--1-$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@.c)
 *     ??$MakeAndInitialize@VActivityToastNotificationCallback@ToastNotification@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180050474 (--$MakeAndInitialize@VActivityToastNotificationCallback@ToastNotification@@UIUnknown@@$$V@Detail.c)
 *     ??_G?$CTaskWrapper@V_lambda_59b29f73bafad90ed73b9c1b0cf40ac2_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180051080 (--_G-$CTaskWrapper@V_lambda_59b29f73bafad90ed73b9c1b0cf40ac2_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180051230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmB_ea_180051230.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180051250 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmB_ea_180051250.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1800512A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmB_ea_1800512A0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x1800512C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmB_ea_1800512C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 9);
  if ( v1 < 0 )
  {
    do
LABEL_8:
      v5 = *(_DWORD *)(2 * v1 + 0x10);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v5 - 1, v5) );
    v2 = v5 - 1;
LABEL_10:
    if ( !v2 )
    {
      if ( a1 )
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v2 = v1 - 1;
      v4 = _InterlockedCompareExchange64(a1 + 9, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_10;
      if ( v4 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v2;
}
