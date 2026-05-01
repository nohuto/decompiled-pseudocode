/*
 * XREFs of ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800B6614
 * Callers:
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1800B68CC (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     _lambda_0d9fadf3b0a1cd5c1af5e2319cce9b5e_::operator() @ 0x1800B9190 (_lambda_0d9fadf3b0a1cd5c1af5e2319cce9b5e_--operator().c)
 *     _lambda_37391d3a8d7977efb47a51e1fbe097f3_::operator() @ 0x1800BBC34 (_lambda_37391d3a8d7977efb47a51e1fbe097f3_--operator().c)
 * Callees:
 *     ?_FailFast_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z @ 0x1800B6AE4 (-_FailFast_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::FailFast_IfFailedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  void *v7; // [rsp+20h] [rbp-28h]
  char *v8; // [rsp+38h] [rbp-10h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  if ( (int)a4 < 0 )
  {
    LODWORD(v7) = (_DWORD)a4;
    wil::details::in1diag3::_FailFast_HrMsg(this, a2, a3, retaddr, v7, a5, (const char *)&a6, v8);
    JUMPOUT(0x1800B664CLL);
  }
  return (unsigned int)a4;
}
