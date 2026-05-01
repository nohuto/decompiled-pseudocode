/*
 * XREFs of ?RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ @ 0x1803C5D2C
 * Callers:
 *     ??$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803C49FC (--$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x18008E588 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E5F0 (_Init_thread_header.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x18014D4A4 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F674 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall CAppTransitionManager::RuntimeClassInitialize(CAppTransitionManager *this)
{
  int inited; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  inited = CObjectWithThreadUseDetection::InitApartmentId((CAppTransitionManager *)((char *)this + 120));
  if ( inited < 0 )
  {
    v3 = 21LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  if ( dword_1805CF78C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CF78C);
    if ( dword_1805CF78C == -1 )
    {
      xmmword_1805CF4C0 = xmmword_180542498;
      xmmword_1805CF4D0 = 0LL;
      Init_thread_footer(&dword_1805CF78C);
    }
  }
  inited = CImmersiveShellComponent::RegisterServiceInformation(
             (CAppTransitionManager *)((char *)this + 24),
             (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_1805CF4C0,
             1LL);
  if ( inited < 0 )
  {
    v3 = 27LL;
    goto LABEL_3;
  }
  return 0LL;
}
