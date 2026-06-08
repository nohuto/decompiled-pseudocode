/*
 * XREFs of InvokePTStateChangeHidden @ 0x1C000C244
 * Callers:
 *     PerfControlPTStatesHiddenSwAll @ 0x1C000C350 (PerfControlPTStatesHiddenSwAll.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InvokePTStateChangeHidden(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  if ( *((_BYTE *)a3 + 25) == 1 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(a2 + 24))(
             a1,
             *(_QWORD *)(a2 + 40),
             *a3,
             a3[1],
             a4);
  else
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(a2 + 16))(
             a1,
             *(_QWORD *)(a2 + 48),
             *a3,
             a3[1],
             a4);
}
