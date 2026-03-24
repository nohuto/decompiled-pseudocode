/*
 * XREFs of MiInitializeSystemPtes @ 0x140A4E1C4
 * Callers:
 *     MiInitNucleus @ 0x140A42F34 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     ExGenRandom @ 0x14022C890 (ExGenRandom.c)
 *     MiObtainSystemVa @ 0x1402B37E0 (MiObtainSystemVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x1402B407C (MiSystemVaToDynamicBitmap.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiBuildDynamicRegion @ 0x1403B5F84 (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407867BC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x1407868DC (MiInitializeDynamicBitmap.c)
 *     MiInitializePteInfo @ 0x140A4E918 (MiInitializePteInfo.c)
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

  v0 = qword_140C4FAF8;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 5u, 0LL) )
    return 0LL;
  v2 = MiGetAnyMultiplexedVm(4);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)v2, 6u, 0LL) )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v3 = ((dword_140CFB17C & 2) << 8) | 0x101;
  v4 = v0 + ((0x800000 - (v3 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_140C4E0A0 = v4;
  if ( !(unsigned int)MiInitializePteInfo(
                        (unsigned int)&qword_140C4EF40,
                        9,
                        (int)v4 + 0x100000,
                        9,
                        v0,
                        0x100000000000LL,
                        1) )
    return 0LL;
  dword_140C4EF58 |= 1u;
  qword_140C4EF90 = qword_140C4EAE8;
  AnyMultiplexedVm[184] = AnyMultiplexedVm[184] & 0xF8 | 5;
  if ( (dword_140CFB17C & 2) != 0
    && (unsigned int)MiInitializeDynamicBitmap(&qword_140C4EAD8, v4 + 537919488, 0x200000000LL, 9) != 1 )
  {
    dword_140CFB17C &= ~2u;
  }
  v5 = MiSystemVaToDynamicBitmap(9);
  if ( (unsigned int)MiBuildDynamicRegion(v5, v0, 0x100000000000uLL)
    && (MiObtainSystemVa(v3, 13LL, v6),
        MiFlags |= 0x20000000u,
        qword_140C4EBC8 = 0LL,
        (qword_140C4EBE8 = MiReservePtes((__int64)&qword_140C4EF40, 1u, v7, v8)) != 0) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
