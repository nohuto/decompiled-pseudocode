/*
 * XREFs of MiInitializeSystemCache @ 0x1407A0628
 * Callers:
 *     MiObtainSystemCacheView @ 0x140312500 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiQuerySystemBase @ 0x1402D3F2C (MiQuerySystemBase.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     InitializeListHeadPte @ 0x1403B6444 (InitializeListHeadPte.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407867BC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140A4E6D4 (MiInitializeDynamicRegion.c)
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
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 904), 2u, (_DWORD *)v3);
  qword_140C4E3A8 = 0LL;
  byte_140C4F0B8 = byte_140C4F0B8 & 0xF8 | 2;
  SystemBase = MiQuerySystemBase(2);
  if ( (unsigned int)MiInitializeDynamicRegion(8LL, SystemBase, 0x100000000000LL) )
  {
    v3 = 0x100000000LL;
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 904), 2u, (_DWORD *)v3);
  }
  return 0LL;
}
