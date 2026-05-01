/*
 * XREFs of ??1?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x18020600C
 * Callers:
 *     _ShellFeedsDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800A8CDB (_ShellFeedsDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ??_GCCortanaWNFService@Cortana@TwinUI@@QEAAPEAXI@Z @ 0x18020625C (--_GCCortanaWNFService@Cortana@TwinUI@@QEAAPEAXI@Z.c)
 */

TwinUI::Cortana::CCortanaWNFService *__fastcall wistd::unique_ptr<TwinUI::Cortana::CCortanaWNFService,wistd::default_delete<TwinUI::Cortana::CCortanaWNFService>>::~unique_ptr<TwinUI::Cortana::CCortanaWNFService,wistd::default_delete<TwinUI::Cortana::CCortanaWNFService>>(
        TwinUI::Cortana::CCortanaWNFService **a1,
        unsigned int a2)
{
  TwinUI::Cortana::CCortanaWNFService *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (TwinUI::Cortana::CCortanaWNFService *)TwinUI::Cortana::CCortanaWNFService::`scalar deleting destructor'(
                                                    result,
                                                    a2);
  return result;
}
