/*
 * XREFs of ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800B4BE4
 * Callers:
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1800B4E9C (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     _lambda_53f3455ee66d5917e81d6db14c30cb4c_::operator() @ 0x1800B77D8 (_lambda_53f3455ee66d5917e81d6db14c30cb4c_--operator().c)
 * Callees:
 *     ?_FailFast_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z @ 0x1800B50B4 (-_FailFast_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z.c)
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
    JUMPOUT(0x1800B4C1CLL);
  }
  return (unsigned int)a4;
}
