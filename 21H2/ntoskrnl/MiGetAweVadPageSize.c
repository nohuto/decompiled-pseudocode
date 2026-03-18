/*
 * XREFs of MiGetAweVadPageSize @ 0x14097D244
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiVadPageTableChargeLevel @ 0x14030DA10 (MiVadPageTableChargeLevel.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1402EE0C8 (MiLocateVadEvent.c)
 *     MiGetAwePageSize @ 0x1405AAF90 (MiGetAwePageSize.c)
 *     MiGetAweViewPageSize @ 0x1405AB030 (MiGetAweViewPageSize.c)
 */

__int64 __fastcall MiGetAweVadPageSize(__int64 a1)
{
  __int64 AweViewPageSize; // r8
  __int64 VadEvent; // rax
  __int64 v3; // r9
  __int64 v4; // rcx

  AweViewPageSize = 1LL;
  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) != 0x4200000 )
  {
    VadEvent = MiLocateVadEvent(a1, 256LL);
    AweViewPageSize = MiGetAweViewPageSize(VadEvent + 8);
    if ( !AweViewPageSize )
    {
      v4 = *(_QWORD *)(v3 + 40);
      if ( (*(_DWORD *)(v4 + 8) & 1) == 0 )
        return MiGetAwePageSize(v4);
    }
  }
  return AweViewPageSize;
}
