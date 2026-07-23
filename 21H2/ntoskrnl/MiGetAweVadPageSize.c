/*
 * XREFs of MiGetAweVadPageSize @ 0x1408D6208
 * Callers:
 *     MiVadPageTableChargeLevel @ 0x1402C0320 (MiVadPageTableChargeLevel.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140309104 (MiLocateVadEvent.c)
 *     ExGetCallBackBlockRoutine @ 0x140381CB0 (ExGetCallBackBlockRoutine.c)
 *     MiGetAweViewPageSize @ 0x14054C718 (MiGetAweViewPageSize.c)
 */

_BOOL8 __fastcall MiGetAweVadPageSize(__int64 a1)
{
  __int64 VadEvent; // rax
  unsigned __int64 AweViewPageSize; // rax
  __int64 v3; // r8

  if ( (*(_DWORD *)(a1 + 48) & 0x3100000) == 0x2100000 )
    return 0LL;
  VadEvent = MiLocateVadEvent(a1);
  if ( (**(_DWORD **)(VadEvent + 40) & 1) != 0 )
    return 0LL;
  AweViewPageSize = MiGetAweViewPageSize(VadEvent + 8);
  if ( !AweViewPageSize )
    AweViewPageSize = ExGetCallBackBlockRoutine(v3);
  return AweViewPageSize >= 0x200;
}
