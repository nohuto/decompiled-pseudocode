/*
 * XREFs of KeProfileInterruptWithSource @ 0x14051BB80
 * Callers:
 *     DefaultOverflowHandler @ 0x1404BE740 (DefaultOverflowHandler.c)
 *     EmonOverflowHandler @ 0x1404D38A0 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404DDAB0 (Amd64OverflowHandler.c)
 * Callees:
 *     KiProcessProfileList @ 0x14051BFC0 (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}
