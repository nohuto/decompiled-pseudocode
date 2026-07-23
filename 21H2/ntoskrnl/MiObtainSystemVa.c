/*
 * XREFs of MiObtainSystemVa @ 0x140231990
 * Callers:
 *     MiReservePoolMemory @ 0x140231024 (MiReservePoolMemory.c)
 *     MiExpandSystemCache @ 0x1402310DC (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x140231448 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8F34 (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x140760064 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140A4F1C4 (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x140A562A8 (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x1402319B8 (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x14023222C (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d

  v3 = MiSystemVaToDynamicBitmap((unsigned int)a2, a2, a3, a1);
  return MiObtainDynamicVa(v3, v4);
}
