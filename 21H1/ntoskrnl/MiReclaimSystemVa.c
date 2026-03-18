/*
 * XREFs of MiReclaimSystemVa @ 0x140301E44
 * Callers:
 *     MiObtainDynamicVa @ 0x140301274 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x1403C52AC (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_140C4DF88 <= 0x8000000 )
    return KeSetEvent(&stru_140C4E2C8, 0, 0);
  return result;
}
