/*
 * XREFs of __KillTimer@8 @ 0x15630A
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

int __fastcall _KillTimer(unsigned int a1, int a2)
{
  return FindTimer(a1, a2, 0, 1, 0);
}
