/*
 * XREFs of MiObtainSystemVa @ 0x14030124C
 * Callers:
 *     MiReservePoolMemory @ 0x1403008E0 (MiReservePoolMemory.c)
 *     MiExpandSystemCache @ 0x140300998 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x140300D04 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B4BA4 (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x14074881C (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140A4112C (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x140A4D920 (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x140301274 (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x140301D30 (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d

  v3 = MiSystemVaToDynamicBitmap((unsigned int)a2, a2, a3, a1);
  return MiObtainDynamicVa(v3, v4);
}
