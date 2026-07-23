/*
 * XREFs of MiInitializeSystemPtes @ 0x140A4F1C4
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiObtainSystemVa @ 0x140231990 (MiObtainSystemVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x14023222C (MiSystemVaToDynamicBitmap.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiBuildDynamicRegion @ 0x1403B60F4 (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x14078697C (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiInitializePteInfo @ 0x140A4F918 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // rbp
  char *AnyMultiplexedVm; // rbx
  char *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned __int64 v8; // r9

  v0 = qword_140C4FB38;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 5, 0LL) )
    return 0LL;
  v2 = MiGetAnyMultiplexedVm(4);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)v2, 6, 0LL) )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v3 = ((dword_140CFB17C & 2) << 8) | 0x101;
  v4 = v0 + ((0x800000 - (v3 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_140C4E0E0 = v4;
  if ( !(unsigned int)MiInitializePteInfo(
                        (unsigned int)&qword_140C4EF80,
                        9,
                        (int)v4 + 0x100000,
                        9,
                        v0,
                        0x100000000000LL,
                        1) )
    return 0LL;
  dword_140C4EF98 |= 1u;
  qword_140C4EFD0 = qword_140C4EB28;
  AnyMultiplexedVm[184] = AnyMultiplexedVm[184] & 0xF8 | 5;
  if ( (dword_140CFB17C & 2) != 0
    && (unsigned int)MiInitializeDynamicBitmap(&qword_140C4EB18, v4 + 537919488, 0x200000000LL, 9) != 1 )
  {
    dword_140CFB17C &= ~2u;
  }
  v5 = MiSystemVaToDynamicBitmap(9);
  if ( (unsigned int)MiBuildDynamicRegion(v5, v0, 0x100000000000uLL)
    && (MiObtainSystemVa(v3, 13LL, v6),
        MiFlags |= 0x20000000u,
        qword_140C4EC08 = 0LL,
        (qword_140C4EC28 = MiReservePtes((__int64)&qword_140C4EF80, 1u, v7, v8)) != 0) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
