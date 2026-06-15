/*
 * XREFs of _CWorkFifo::WorkItem::Initialize_::_1_::catch$4 @ 0x180107DC5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWorkFifo::WorkItem::Initialize_::_1_::catch_4(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x22,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
    (const char *)0x8007000ELL);
  return 0LL;
}
