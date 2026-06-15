/*
 * XREFs of _CExclusiveModeListener::OnHmdRemoved_::_1_::catch$9 @ 0x18010D505
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CExclusiveModeListener::OnHmdRemoved_::_1_::catch_9(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0xFA,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}
