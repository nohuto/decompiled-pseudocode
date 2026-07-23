/*
 * XREFs of KeProfileInterruptWithSource @ 0x14051BDC0
 * Callers:
 *     DefaultOverflowHandler @ 0x1404BE980 (DefaultOverflowHandler.c)
 *     EmonOverflowHandler @ 0x1404D3AE0 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404DDCF0 (Amd64OverflowHandler.c)
 * Callees:
 *     KiProcessProfileList @ 0x14051C200 (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}
