/*
 * XREFs of _GameInputProcessor::GameInputProcessor_::_1_::catch$20 @ 0x18005143F
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800723A0 (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall GameInputProcessor::GameInputProcessor_::_1_::catch_20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x4A,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\ga"
                  "meinputprocessor.cpp",
    a4);
  JUMPOUT(0x180051462LL);
}
