/*
 * XREFs of MiReclaimSystemVa @ 0x14032DB68
 * Callers:
 *     MiObtainDynamicVa @ 0x14025191C (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x1403C8CAC (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_140C4DEC8 <= 0x8000000 )
    return KeSetEvent(&stru_140C4E208, 0, 0);
  return result;
}
