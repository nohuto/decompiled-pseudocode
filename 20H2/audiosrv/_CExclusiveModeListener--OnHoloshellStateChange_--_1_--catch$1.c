/*
 * XREFs of _CExclusiveModeListener::OnHoloshellStateChange_::_1_::catch$1 @ 0x18010D6E1
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DC554 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CExclusiveModeListener::OnHoloshellStateChange_::_1_::catch_1(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 200),
    321LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}
