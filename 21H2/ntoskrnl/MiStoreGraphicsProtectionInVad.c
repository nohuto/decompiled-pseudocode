/*
 * XREFs of MiStoreGraphicsProtectionInVad @ 0x14096B508
 * Callers:
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x14023BD00 (RtlFindMostSignificantBit.c)
 */

CCHAR __fastcall MiStoreGraphicsProtectionInVad(__int64 a1, unsigned int a2)
{
  CCHAR result; // al

  if ( (a2 & 0x20000) != 0 )
  {
    *(_DWORD *)(a1 + 48) |= 0x4000000u;
    a2 &= ~0x20000u;
  }
  if ( (a2 & 0x40000) != 0 )
  {
    *(_DWORD *)(a1 + 48) |= 0x8000000u;
    a2 &= ~0x40000u;
  }
  result = RtlFindMostSignificantBit((unsigned __int64)a2 >> 11);
  *(_DWORD *)(a1 + 48) ^= (*(_DWORD *)(a1 + 48) ^ (result << 28)) & 0x70000000;
  return result;
}
