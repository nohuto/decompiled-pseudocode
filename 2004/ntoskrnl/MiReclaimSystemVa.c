/*
 * XREFs of MiReclaimSystemVa @ 0x14033E98C
 * Callers:
 *     MiObtainDynamicVa @ 0x14033DDBC (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x1403C621C (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_140C4DE48 <= 0x8000000 )
    return KeSetEvent(&stru_140C4E188, 0, 0);
  return result;
}
