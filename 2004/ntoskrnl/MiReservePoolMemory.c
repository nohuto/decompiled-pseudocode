/*
 * XREFs of MiReservePoolMemory @ 0x14033D428
 * Callers:
 *     MmAllocatePoolMemory @ 0x140258558 (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x14053F8EC (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiObtainSystemVa @ 0x14033DD94 (MiObtainSystemVa.c)
 *     MiObtainDynamicVa @ 0x14033DDBC (MiObtainDynamicVa.c)
 *     MiObtainSessionVa @ 0x14033EA08 (MiObtainSessionVa.c)
 *     MiMarkSystemVaAllocated @ 0x1405387A0 (MiMarkSystemVaAllocated.c)
 */

__int64 __fastcall MiReservePoolMemory(unsigned __int64 a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rdx

  v4 = a3 >> 21;
  if ( a3 >> 21 < 0x100000000LL )
  {
    switch ( a2 )
    {
      case 5:
        return MiObtainDynamicVa(&SListHead[11 * a4 + 4], (unsigned int)v4);
      case 6:
        return MiObtainSystemVa((unsigned int)v4);
      case 1:
        v6 = MiObtainSessionVa((unsigned int)v4);
        if ( v6 )
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 868),
            v4);
        return v6;
      case 15:
        return a1 & -(__int64)((unsigned int)MiMarkSystemVaAllocated(
                                               15,
                                               ((unsigned int)(a1 >> 18) & 0x3FFFFFF8) + 0x40000000,
                                               ((a1 >> 18) & 0x3FFFFFF8) + 0x40000000 + 8 * v4,
                                               1,
                                               1) != 0);
    }
  }
  return 0LL;
}
