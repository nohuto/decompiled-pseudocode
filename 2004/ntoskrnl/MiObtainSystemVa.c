/*
 * XREFs of MiObtainSystemVa @ 0x14033DD94
 * Callers:
 *     MiReservePoolMemory @ 0x14033D428 (MiReservePoolMemory.c)
 *     MiExpandSystemCache @ 0x14033D4E0 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x14033D84C (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B54A4 (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x14074A39C (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140A46988 (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x140A53620 (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x14033DDBC (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x14033E878 (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d

  v3 = MiSystemVaToDynamicBitmap((unsigned int)a2, a2, a3, a1);
  return MiObtainDynamicVa(v3, v4);
}
