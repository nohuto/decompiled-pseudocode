/*
 * XREFs of MiInitializeSystemPtes @ 0x140A4CC24
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiSystemVaToDynamicBitmap @ 0x140250EA8 (MiSystemVaToDynamicBitmap.c)
 *     MiObtainSystemVa @ 0x1402518F4 (MiObtainSystemVa.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 *     MiBuildDynamicRegion @ 0x1403B4904 (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407829DC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 *     MiInitializePteInfo @ 0x140A4D378 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // rbp
  char *AnyMultiplexedVm; // rbx
  char *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 *v5; // rax

  v0 = qword_140C4F978;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 5, 0LL) )
    return 0LL;
  v2 = MiGetAnyMultiplexedVm(4);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)v2, 6, 0LL) )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v3 = ((dword_140CFB17C & 2) << 8) | 0x101;
  v4 = v0 + ((0x800000 - (v3 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_140C4DF20 = v4;
  if ( !(unsigned int)MiInitializePteInfo(
                        (unsigned int)&qword_140C4EDC0,
                        9,
                        (int)v4 + 0x100000,
                        9,
                        v0,
                        0x100000000000LL,
                        1) )
    return 0LL;
  dword_140C4EDD8 |= 1u;
  qword_140C4EE10 = qword_140C4E968;
  AnyMultiplexedVm[184] = AnyMultiplexedVm[184] & 0xF8 | 5;
  if ( (dword_140CFB17C & 2) != 0
    && (unsigned int)MiInitializeDynamicBitmap(&qword_140C4E958, v4 + 537919488, 0x200000000LL, 9) != 1 )
  {
    dword_140CFB17C &= ~2u;
  }
  v5 = MiSystemVaToDynamicBitmap(9);
  if ( (unsigned int)MiBuildDynamicRegion(v5, v0, 0x100000000000uLL)
    && (MiObtainSystemVa(v3, 13),
        MiFlags |= 0x20000000u,
        qword_140C4EA48 = 0LL,
        (qword_140C4EA68 = MiReservePtes((__int64)&qword_140C4EDC0, 1u)) != 0) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
