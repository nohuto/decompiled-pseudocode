/*
 * XREFs of MiObtainSystemVa @ 0x14026B32C
 * Callers:
 *     MiExpandSystemCache @ 0x14024280C (MiExpandSystemCache.c)
 *     MiReservePoolMemory @ 0x14024D0D4 (MiReservePoolMemory.c)
 *     MiExpandPtes @ 0x14026A818 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x1403C736C (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x1407621C0 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140B06A84 (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x140B092AC (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x14026B354 (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x14026CF08 (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d

  v3 = MiSystemVaToDynamicBitmap((unsigned int)a2, a2, a3, a1);
  return MiObtainDynamicVa(v3, v4);
}
