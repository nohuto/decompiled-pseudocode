/*
 * XREFs of MiReclaimSystemVa @ 0x140256F0C
 * Callers:
 *     MiObtainDynamicVa @ 0x14026B354 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x1403D8D00 (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 || (unsigned __int64)qword_140C51888 <= 0x8000000 )
    return KeSetEvent(&stru_140C51C10, 0, 0);
  return result;
}
