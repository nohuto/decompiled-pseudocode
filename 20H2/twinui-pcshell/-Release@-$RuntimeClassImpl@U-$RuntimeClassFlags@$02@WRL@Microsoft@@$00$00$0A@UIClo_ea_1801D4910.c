/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D4910
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800F4670 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceMa.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800F4680 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundat.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800F4690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHos_ea_1800F4690.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800F46A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClo_ea_1800F46A0.c)
 *     ??$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VPriorityBoostHelper@@@12@$$QEAPEAVCSingleViewShellExperience@@@Z @ 0x1801D20F4 (--$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ??1?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1801D2AD8 (--1-$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1801D2B9C (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ?Release@PriorityBoostHelper@@UEAAKXZ @ 0x1801D49A0 (-Release@PriorityBoostHelper@@UEAAKXZ.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801D49AC (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801EE77C (--$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091EB0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 48);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
