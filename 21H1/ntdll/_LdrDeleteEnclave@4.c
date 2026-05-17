/*
 * XREFs of _LdrDeleteEnclave@4 @ 0x4B32DD00
 * Callers:
 *     _RtlCreateUserStack@24 @ 0x4B2F2050 (_RtlCreateUserStack@24.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

int __stdcall LdrDeleteEnclave(char a1)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  return NtFreeVirtualMemory(-1, (int)&a1, (int)&v2, 0x8000);
}
