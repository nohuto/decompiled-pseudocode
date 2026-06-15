/*
 * XREFs of _CWorkFifo::ScheduleWorkItem_::_1_::catch$22 @ 0x1801088A9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWorkFifo::ScheduleWorkItem_::_1_::catch_22(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x62,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
    (const char *)0x8007000ELL);
  return 0LL;
}
