/*
 * XREFs of MiNodeCompletedBootZeroing @ 0x1403B1058
 * Callers:
 *     MiZeroNodePages @ 0x1403B0390 (MiZeroNodePages.c)
 *     MiZeroBootLargePages @ 0x1403CAD94 (MiZeroBootLargePages.c)
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 */

__int64 __fastcall MiNodeCompletedBootZeroing(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 6336), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate(a1 + 6344, 1);
  return result;
}
