/*
 * XREFs of _RtlIsCurrentProcess@4 @ 0x4B3668F0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwCompareObjects@8 @ 0x4B2F3330 (_ZwCompareObjects@8.c)
 */

bool __stdcall RtlIsCurrentProcess(int a1)
{
  return a1 == -1 || ZwCompareObjects(-1, a1) >= 0;
}
