/*
 * XREFs of MiInitializeSystemCache @ 0x14082BCA0
 * Callers:
 *     MiLateInitializeSystemCache @ 0x1403C3BF8 (MiLateInitializeSystemCache.c)
 * Callees:
 *     MiQuerySystemBase @ 0x14025E85C (MiQuerySystemBase.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407F35F8 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140B0673C (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSystemCache(ULONG_PTR *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 SystemBase; // rax

  v2 = a1 + 223;
  v3 = 4LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  v4 = 0LL;
  a1[240] = (ULONG_PTR)(a1 + 239);
  a1[239] = (ULONG_PTR)(a1 + 239);
  a1[244] = (ULONG_PTR)(a1 + 243);
  a1[243] = (ULONG_PTR)(a1 + 243);
  if ( a1 != &MiSystemPartition )
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 2128), 2, v4);
  qword_140C51C30 = 0LL;
  byte_140C53638 = byte_140C53638 & 0xF8 | 2;
  SystemBase = MiQuerySystemBase(3);
  if ( (unsigned int)MiInitializeDynamicRegion(8LL, SystemBase, 0x100000000000LL) )
  {
    v4 = 0x100000000LL;
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 2128), 2, v4);
  }
  return 0LL;
}
