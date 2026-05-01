/*
 * XREFs of ??$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VPriorityBoostHelper@@@12@$$QEAPEAVCSingleViewShellExperience@@@Z @ 0x1801AEA74
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B15CC (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B1530 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClo_ea_1801B1530.c)
 *     ??0PriorityBoostHelper@@QEAA@PEAVCSingleViewShellExperience@@@Z @ 0x1801D58FC (--0PriorityBoostHelper@@QEAA@PEAVCSingleViewShellExperience@@@Z.c)
 */

PriorityBoostHelper **__fastcall Microsoft::WRL::Details::Make<PriorityBoostHelper,CSingleViewShellExperience *>(
        PriorityBoostHelper **a1,
        struct CSingleViewShellExperience **a2)
{
  PriorityBoostHelper *v4; // rax
  PriorityBoostHelper *v5; // rdi

  *a1 = 0LL;
  v4 = (PriorityBoostHelper *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = PriorityBoostHelper::PriorityBoostHelper(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
