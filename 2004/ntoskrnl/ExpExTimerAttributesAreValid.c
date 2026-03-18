/*
 * XREFs of ExpExTimerAttributesAreValid @ 0x140267654
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x140275B20 (ExAllocateTimerInternal2.c)
 *     NtCreateTimer2 @ 0x14060EB30 (NtCreateTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpExTimerAttributesAreValid(int a1)
{
  return (a1 & 0x8000000E) == a1 && ((a1 & 6) == 0 || (a1 & 8) == 0);
}
