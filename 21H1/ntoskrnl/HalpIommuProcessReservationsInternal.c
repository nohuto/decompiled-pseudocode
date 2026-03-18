/*
 * XREFs of HalpIommuProcessReservationsInternal @ 0x1404C47F4
 * Callers:
 *     HalpIommuProcessReservations @ 0x1403A8F48 (HalpIommuProcessReservations.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403B6FE8 (HalpMmAllocateMemoryInternal.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpIommuDetermineReservedPciRid @ 0x1404C3EA4 (HalpIommuDetermineReservedPciRid.c)
 *     HalpIommuProcessMemoryErrata @ 0x1404C4708 (HalpIommuProcessMemoryErrata.c)
 */

__int64 __fastcall HalpIommuProcessReservationsInternal(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, unsigned int *, _QWORD); // rax
  __int64 result; // rax
  _DWORD *MemoryInternal; // rax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD))(a1 + 328);
  v7 = 0;
  result = v2(*(_QWORD *)(a1 + 16), &v7, 0LL);
  if ( (_DWORD)result == -1073741789 )
  {
    MemoryInternal = (_DWORD *)HalpMmAllocateMemoryInternal(8 * v7 + 8, 1u);
    *(_QWORD *)(a1 + 528) = MemoryInternal;
    if ( MemoryInternal )
    {
      *MemoryInternal = v7;
      result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64))(a1 + 328))(
                 *(_QWORD *)(a1 + 16),
                 &v7,
                 *(_QWORD *)(a1 + 528) + 8LL);
      if ( (int)result >= 0 )
      {
        result = HalpIommuProcessMemoryErrata(v7, *(_QWORD *)(a1 + 528) + 8LL, a2);
        if ( (int)result >= 0 )
          return HalpIommuDetermineReservedPciRid(*(unsigned int **)(a1 + 528));
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
