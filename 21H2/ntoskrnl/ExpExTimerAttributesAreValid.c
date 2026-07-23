/*
 * XREFs of ExpExTimerAttributesAreValid @ 0x14029A570
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x14026E680 (ExAllocateTimerInternal2.c)
 *     NtCreateTimer2 @ 0x1406ABC10 (NtCreateTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpExTimerAttributesAreValid(int a1)
{
  return (a1 & 0x8000000E) == a1 && ((a1 & 6) == 0 || (a1 & 8) == 0);
}
