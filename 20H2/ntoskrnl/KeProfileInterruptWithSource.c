/*
 * XREFs of KeProfileInterruptWithSource @ 0x14051A0A0
 * Callers:
 *     DefaultOverflowHandler @ 0x1404BCD70 (DefaultOverflowHandler.c)
 *     EmonOverflowHandler @ 0x1404D1ED0 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404DC0A0 (Amd64OverflowHandler.c)
 * Callees:
 *     KiProcessProfileList @ 0x14051A4E0 (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}
