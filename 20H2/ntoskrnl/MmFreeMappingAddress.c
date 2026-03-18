/*
 * XREFs of MmFreeMappingAddress @ 0x140765490
 * Callers:
 *     SmFpCleanup @ 0x14035A0D8 (SmFpCleanup.c)
 *     PnprFreeMappingReserve @ 0x1408B0100 (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x1408B0584 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x14094B4C0 (EtwpSavePersistedLogger.c)
 *     HalpDmaAllocateMappingResources @ 0x140A64788 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A64908 (HalpDmaAllocateEmergencyResources.c)
 * Callees:
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveMappingNode @ 0x14037A3F0 (MiRemoveMappingNode.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiRemovePteTracker @ 0x14055D590 (MiRemovePteTracker.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmFreeMappingAddress(PVOID BaseAddress, ULONG PoolTag)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // rbp
  ULONG_PTR BugCheckParameter4; // rsi
  _QWORD *PteAddress; // r14
  unsigned __int64 v9; // rbx
  _QWORD *v10; // r12
  unsigned __int64 v11; // rax

  v2 = PoolTag;
  v4 = MiRemoveMappingNode((ULONG_PTR)BaseAddress, *(ULONG_PTR *)&PoolTag);
  v5 = v4;
  if ( *((_DWORD *)v4 + 10) != (_DWORD)v2 )
    KeBugCheckEx(0xDAu, 0x102uLL, (ULONG_PTR)BaseAddress, v2, 0LL);
  v6 = v4[3];
  BugCheckParameter4 = v4[4];
  PteAddress = (_QWORD *)MiGetPteAddress(v6);
  v9 = (unsigned __int64)PteAddress;
  v10 = &PteAddress[BugCheckParameter4];
  if ( PteAddress < v10 )
  {
    do
    {
      if ( (_QWORD *)v9 == PteAddress || (v9 & 0xFFF) == 0 )
      {
        v11 = MiGetPteAddress(v9);
        if ( (MI_READ_PTE_LOCK_FREE(v11) & 0x80u) != 0LL )
          KeBugCheckEx(0xDAu, 0x109uLL, v6, v2, BugCheckParameter4);
      }
      if ( MI_READ_PTE_LOCK_FREE(v9) )
        KeBugCheckEx(0xDAu, 0x103uLL, v6, v2, BugCheckParameter4);
      v9 += 8LL;
    }
    while ( v9 < (unsigned __int64)v10 );
  }
  if ( (dword_140CFB17C & 1) != 0 )
    MiRemovePteTracker(0LL, v6, BugCheckParameter4);
  MiReleasePtes((__int64)&qword_140C4EDC0, PteAddress, BugCheckParameter4);
  ExFreePoolWithTag(v5, 0);
}
