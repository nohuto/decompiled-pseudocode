/*
 * XREFs of ?IsSameAsTarget@ShellGesturesTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x18017EF90
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn ShellGesturesTarget::IsSameAsTarget(
        ShellGesturesTarget *this,
        const struct tagMsgRoutingInfo *a2,
        void *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    32LL,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\shell"
             "gesturestarget.cpp",
    a4);
  JUMPOUT(0x18017EFAALL);
}
