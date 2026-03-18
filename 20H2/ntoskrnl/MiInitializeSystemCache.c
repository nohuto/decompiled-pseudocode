/*
 * XREFs of MiInitializeSystemCache @ 0x140796108
 * Callers:
 *     MiObtainSystemCacheView @ 0x140299AE0 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiQuerySystemBase @ 0x140331C8C (MiQuerySystemBase.c)
 *     InitializeListHeadPte @ 0x1403B4DC4 (InitializeListHeadPte.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407829DC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140A4D134 (MiInitializeDynamicRegion.c)
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
  qword_140C4E228[0] = 0LL;
  byte_140C4EF38 = byte_140C4EF38 & 0xF8 | 2;
  SystemBase = MiQuerySystemBase(2);
  if ( (unsigned int)MiInitializeDynamicRegion(8LL, SystemBase, 0x100000000000LL) )
  {
    v3 = 0x100000000LL;
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 904), 2, v3);
  }
  return 0LL;
}
