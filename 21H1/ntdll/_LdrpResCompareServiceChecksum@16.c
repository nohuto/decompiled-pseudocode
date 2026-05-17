/*
 * XREFs of _LdrpResCompareServiceChecksum@16 @ 0x4B342FDE
 * Callers:
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 * Callees:
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

bool __fastcall LdrpResCompareServiceChecksum(int a1, int a2, int a3, int a4)
{
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  return LdrResGetRCConfig(a1, a2, &v5, 4096, 1) >= 0
      && LdrResGetRCConfig(a3, a4, &v6, 4096, 0) >= 0
      && !memcmp((const void *)(v5 + 28), (const void *)(v6 + 28), 0x10u);
}
