/*
 * XREFs of MiNodeCompletedBootZeroing @ 0x1403B0EE8
 * Callers:
 *     MiZeroNodePages @ 0x1403B0220 (MiZeroNodePages.c)
 *     MiZeroBootLargePages @ 0x1403CABF4 (MiZeroBootLargePages.c)
 * Callees:
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 */

__int64 __fastcall MiNodeCompletedBootZeroing(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 6336), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate(a1 + 6344, 1LL, a3, a4);
  return result;
}
