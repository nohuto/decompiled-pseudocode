/*
 * XREFs of KeProfileInterruptWithSource @ 0x1405166D0
 * Callers:
 *     DefaultOverflowHandler @ 0x1404B9850 (DefaultOverflowHandler.c)
 *     EmonOverflowHandler @ 0x1404CE930 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404D8B10 (Amd64OverflowHandler.c)
 * Callees:
 *     KiProcessProfileList @ 0x140516B10 (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}
