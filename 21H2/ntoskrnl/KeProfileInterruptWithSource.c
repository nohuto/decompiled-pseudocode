/*
 * XREFs of KeProfileInterruptWithSource @ 0x140571540
 * Callers:
 *     DefaultOverflowHandler @ 0x14050FCB0 (DefaultOverflowHandler.c)
 *     EmonOverflowHandler @ 0x140520920 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x14052C290 (Amd64OverflowHandler.c)
 * Callees:
 *     KiProcessProfileList @ 0x140571980 (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}
