/*
 * XREFs of MiReclaimSystemVa @ 0x140232338
 * Callers:
 *     MiObtainDynamicVa @ 0x1402319B8 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x1403C99EC (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_140C4E088 <= 0x8000000 )
    return KeSetEvent(&stru_140C4E3C8, 0, 0);
  return result;
}
