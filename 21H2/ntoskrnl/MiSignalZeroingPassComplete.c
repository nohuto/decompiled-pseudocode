/*
 * XREFs of MiSignalZeroingPassComplete @ 0x1403C6CDC
 * Callers:
 *     MiZeroLargePageThread @ 0x1403C6B00 (MiZeroLargePageThread.c)
 *     MiDeleteZeroContext @ 0x1405B2670 (MiDeleteZeroContext.c)
 * Callees:
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 */

__int64 __fastcall MiSignalZeroingPassComplete(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 232);
  if ( v1 )
  {
    result = *(unsigned int *)(v1 + 128);
    if ( (_DWORD)result )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 128), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return KeSignalGate((_DWORD *)v1, 1);
    }
  }
  return result;
}
