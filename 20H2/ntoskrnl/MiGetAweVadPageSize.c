/*
 * XREFs of MiGetAweVadPageSize @ 0x1408D88E8
 * Callers:
 *     MiVadPageTableChargeLevel @ 0x14027D200 (MiVadPageTableChargeLevel.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1402506D4 (MiLocateVadEvent.c)
 *     ExGetCallBackBlockRoutine @ 0x140381A60 (ExGetCallBackBlockRoutine.c)
 *     MiGetAweViewPageSize @ 0x14054A9D8 (MiGetAweViewPageSize.c)
 */

_BOOL8 __fastcall MiGetAweVadPageSize(__int64 a1)
{
  __int64 VadEvent; // rax
  unsigned __int64 AweViewPageSize; // rax
  __int64 v3; // r8

  if ( (*(_DWORD *)(a1 + 48) & 0x3100000) == 0x2100000 )
    return 0LL;
  VadEvent = MiLocateVadEvent(a1, 256LL);
  if ( (**(_DWORD **)(VadEvent + 40) & 1) != 0 )
    return 0LL;
  AweViewPageSize = MiGetAweViewPageSize(VadEvent + 8);
  if ( !AweViewPageSize )
    AweViewPageSize = ExGetCallBackBlockRoutine(v3);
  return AweViewPageSize >= 0x200;
}
