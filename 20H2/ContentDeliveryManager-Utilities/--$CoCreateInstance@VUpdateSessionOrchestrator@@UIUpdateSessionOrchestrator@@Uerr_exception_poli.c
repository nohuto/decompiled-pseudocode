/*
 * XREFs of ??$CoCreateInstance@VUpdateSessionOrchestrator@@UIUpdateSessionOrchestrator@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIUpdateSessionOrchestrator@@Uerr_exception_policy@wil@@@0@K@Z @ 0x180019FA0
 * Callers:
 *     ??R_lambda_760a63f25e541b58840fe190f8bb149e_@@QEBAJAEAV?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@Windows@@@Z @ 0x180011838 (--R_lambda_760a63f25e541b58840fe190f8bb149e_@@QEBAJAEAV-$CBasicResult@W4SVUpgradeOfferedState@Co.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
LPVOID *__fastcall wil::CoCreateInstance<UpdateSessionOrchestrator,IUpdateSessionOrchestrator,wil::err_exception_policy>(
        LPVOID *a1)
{
  HRESULT Instance; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  Instance = CoCreateInstance(
               &GUID_b91d5831_b1bd_4608_8198_d72e155020f7,
               0LL,
               4u,
               &GUID_07f3afac_7c8a_4ce7_a5e0_3d24ee8a77e0,
               a1);
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)Instance);
    JUMPOUT(0x18001A011LL);
  }
  return a1;
}
