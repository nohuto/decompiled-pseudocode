/*
 * XREFs of MiObtainSystemVa @ 0x1402518F4
 * Callers:
 *     MiExpandPtes @ 0x1402531D4 (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x14031DC84 (MiExpandSystemCache.c)
 *     MiReservePoolMemory @ 0x140324708 (MiReservePoolMemory.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B83C4 (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x140758F7C (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140A4CC24 (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x140A53CA0 (MiMapBBTMemory.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x140250EA8 (MiSystemVaToDynamicBitmap.c)
 *     MiObtainDynamicVa @ 0x14025191C (MiObtainDynamicVa.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, int a2)
{
  __int64 *v2; // rax
  unsigned int v3; // edx
  unsigned int v4; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v4, v3);
}
