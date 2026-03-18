/*
 * XREFs of MiInitializeSystemPtes @ 0x140A4112C
 * Callers:
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 *     MiObtainSystemVa @ 0x14030124C (MiObtainSystemVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x140301D30 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1403AC314 (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x140771FCC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 *     MiInitializePteInfo @ 0x140A41880 (MiInitializePteInfo.c)
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

  v0 = qword_140C4FA38;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 5, 0LL) )
    return 0LL;
  v2 = MiGetAnyMultiplexedVm(4);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)v2, 6, 0LL) )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v3 = ((dword_140CFB17C & 2) << 8) | 0x101;
  v4 = v0 + ((0x800000 - (v3 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_140C4DFE0 = v4;
  if ( !(unsigned int)MiInitializePteInfo(
                        (unsigned int)&qword_140C4EE80,
                        9,
                        (int)v4 + 0x100000,
                        9,
                        v0,
                        0x100000000000LL,
                        1) )
    return 0LL;
  dword_140C4EE98 |= 1u;
  qword_140C4EED0 = qword_140C4EA28;
  AnyMultiplexedVm[184] = AnyMultiplexedVm[184] & 0xF8 | 5;
  if ( (dword_140CFB17C & 2) != 0
    && (unsigned int)MiInitializeDynamicBitmap(&qword_140C4EA18, v4 + 537919488, 0x200000000LL, 9) != 1 )
  {
    dword_140CFB17C &= ~2u;
  }
  v5 = MiSystemVaToDynamicBitmap(9);
  if ( (unsigned int)MiBuildDynamicRegion(v5, v0, 0x100000000000uLL)
    && (MiObtainSystemVa(v3, 13LL, v6),
        MiFlags |= 0x20000000u,
        qword_140C4EB08 = 0LL,
        (qword_140C4EB28 = MiReservePtes((__int64)&qword_140C4EE80, 1LL)) != 0) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
