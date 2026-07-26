/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C00A42E8
 * Callers:
 *     ndisCopyPeriodicReceiveNbl @ 0x1C00A2234 (ndisCopyPeriodicReceiveNbl.c)
 *     ndisLWM5IndicateReceive @ 0x1C00C49A0 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
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
