/*
 * XREFs of MiStoreGraphicsProtectionInVad @ 0x1408C6FB4
 * Callers:
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x140234EA0 (RtlFindMostSignificantBit.c)
 */

CCHAR __fastcall MiStoreGraphicsProtectionInVad(__int64 a1, unsigned int a2)
{
  CCHAR result; // al

  if ( (a2 & 0x20000) != 0 )
  {
    *(_DWORD *)(a1 + 48) |= 0x2000000u;
    a2 &= ~0x20000u;
  }
  if ( (a2 & 0x40000) != 0 )
  {
    *(_DWORD *)(a1 + 48) |= 0x4000000u;
    a2 &= ~0x40000u;
  }
  result = RtlFindMostSignificantBit((unsigned __int64)a2 >> 11);
  *(_DWORD *)(a1 + 48) ^= (*(_DWORD *)(a1 + 48) ^ (result << 27)) & 0x38000000;
  return result;
}
