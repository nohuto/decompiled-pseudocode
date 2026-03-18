/*
 * XREFs of MiReservePoolMemory @ 0x140324708
 * Callers:
 *     MmAllocatePoolMemory @ 0x1402CB684 (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x1405432BC (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiObtainSystemVa @ 0x1402518F4 (MiObtainSystemVa.c)
 *     MiObtainDynamicVa @ 0x14025191C (MiObtainDynamicVa.c)
 *     MiObtainSessionVa @ 0x1403247C0 (MiObtainSessionVa.c)
 *     MiMarkSystemVaAllocated @ 0x14053C170 (MiMarkSystemVaAllocated.c)
 */

__int64 __fastcall MiReservePoolMemory(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rdx

  v4 = a3 >> 21;
  if ( a3 >> 21 < 0x100000000LL )
  {
    switch ( (_DWORD)a2 )
    {
      case 5:
        return MiObtainDynamicVa((__int64 *)&SListHead[11 * a4 + 4], v4, 5);
      case 6:
        return MiObtainSystemVa((unsigned int)v4, 6);
      case 1:
        v6 = MiObtainSessionVa((unsigned int)v4, a2);
        if ( v6 )
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 868),
            v4);
        return v6;
      case 0xF:
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
