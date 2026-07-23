/*
 * XREFs of _LdrpResCompareServiceChecksum@16 @ 0x4B342FDE
 * Callers:
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 * Callees:
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

bool __fastcall LdrpResCompareServiceChecksum(int a1, unsigned int a2, int a3, unsigned int a4)
{
  bool result; // al
  size_t v5; // [esp-4h] [ebp-10h]
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h] BYREF

  result = 0;
  if ( LdrResGetRCConfig(a1, a2, &v6, 4096, 1) >= 0 && LdrResGetRCConfig(a3, a4, &v7, 4096, 0) >= 0 )
  {
    LODWORD(v5) = 16;
    if ( !memcmp((const void *)(v6 + 28), (const void *)(v7 + 28), v5) )
      return 1;
  }
  return result;
}
