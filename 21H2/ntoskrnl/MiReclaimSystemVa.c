/*
 * XREFs of MiReclaimSystemVa @ 0x1402B4188
 * Callers:
 *     MiObtainDynamicVa @ 0x1402B3808 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x1403C984C (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_140C4E048 <= 0x8000000 )
    return KeSetEvent(&stru_140C4E388, 0, 0);
  return result;
}
