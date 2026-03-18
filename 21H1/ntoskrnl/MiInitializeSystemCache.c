/*
 * XREFs of MiInitializeSystemCache @ 0x140782A74
 * Callers:
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiQuerySystemBase @ 0x1403233BC (MiQuerySystemBase.c)
 *     InitializeListHeadPte @ 0x1403AC7D4 (InitializeListHeadPte.c)
 *     MiInitializeSystemWorkingSetList @ 0x140771FCC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140A4163C (MiInitializeDynamicRegion.c)
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
  qword_140C4E2E8[0] = 0LL;
  byte_140C4EFF8 = byte_140C4EFF8 & 0xF8 | 2;
  SystemBase = MiQuerySystemBase(2);
  if ( (unsigned int)MiInitializeDynamicRegion(8LL, SystemBase, 0x100000000000LL) )
  {
    v3 = 0x100000000LL;
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 904), 2, v3);
  }
  return 0LL;
}
