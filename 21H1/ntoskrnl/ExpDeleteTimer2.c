/*
 * XREFs of ExpDeleteTimer2 @ 0x14070AFF0
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableTimer2 @ 0x14035B750 (KeDisableTimer2.c)
 */

char __fastcall ExpDeleteTimer2(__int64 a1)
{
  return KeDisableTimer2(a1, 1, 1, 0LL);
}
