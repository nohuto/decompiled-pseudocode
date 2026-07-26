/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C00A3E28
 * Callers:
 *     ndisCopyPeriodicReceiveNbl @ 0x1C00A1D74 (ndisCopyPeriodicReceiveNbl.c)
 *     ndisLWM5IndicateReceive @ 0x1C00C44E0 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
