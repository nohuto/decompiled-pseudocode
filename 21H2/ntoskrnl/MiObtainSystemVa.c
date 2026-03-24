/*
 * XREFs of MiObtainSystemVa @ 0x1402B37E0
 * Callers:
 *     MiReservePoolMemory @ 0x1402B2E74 (MiReservePoolMemory.c)
 *     MiExpandSystemCache @ 0x1402B2F2C (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x1402B3298 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8DC4 (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x14075FEA4 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140A4E1C4 (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x140A552A8 (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x1402B3808 (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x1402B407C (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d

  v3 = MiSystemVaToDynamicBitmap((unsigned int)a2, a2, a3, a1);
  return MiObtainDynamicVa(v3, v4);
}
