/*
 * XREFs of _RtlIsCurrentThread@4 @ 0x4B366920
 * Callers:
 *     <none>
 * Callees:
 *     _ZwCompareObjects@8 @ 0x4B2F3330 (_ZwCompareObjects@8.c)
 */

bool __stdcall RtlIsCurrentThread(int a1)
{
  return a1 == -2 || ZwCompareObjects(-2, a1) >= 0;
}
