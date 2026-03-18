/*
 * XREFs of KeProfileInterruptWithSource @ 0x140516080
 * Callers:
 *     DefaultOverflowHandler @ 0x1404B9170 (DefaultOverflowHandler.c)
 *     EmonOverflowHandler @ 0x1404CE480 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404D8600 (Amd64OverflowHandler.c)
 * Callees:
 *     KiProcessProfileList @ 0x1405164C0 (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}
