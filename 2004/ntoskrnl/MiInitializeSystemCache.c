/*
 * XREFs of MiInitializeSystemCache @ 0x1407883F8
 * Callers:
 *     MiObtainSystemCacheView @ 0x1402B94B0 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiQuerySystemBase @ 0x140360E8C (MiQuerySystemBase.c)
 *     InitializeListHeadPte @ 0x1403B2454 (InitializeListHeadPte.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407743DC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140A46E98 (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSystemCache(ULONG_PTR *a1)
{
  __int64 PteAddress; // rax
  __int64 v3; // rbx
  __int64 SystemBase; // rax

  PteAddress = MiGetPteAddress(0xFFFF800000000000uLL);
  InitializeListHeadPte((unsigned __int64)(a1 + 223), PteAddress);
  v3 = 0LL;
  if ( a1 != &MiSystemPartition )
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 904), 2, v3);
  qword_140C4E1A8[0] = 0LL;
  byte_140C4EEB8 = byte_140C4EEB8 & 0xF8 | 2;
  SystemBase = MiQuerySystemBase(2);
  if ( (unsigned int)MiInitializeDynamicRegion(8LL, SystemBase, 0x100000000000LL) )
  {
    v3 = 0x100000000LL;
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 904), 2, v3);
  }
  return 0LL;
}
