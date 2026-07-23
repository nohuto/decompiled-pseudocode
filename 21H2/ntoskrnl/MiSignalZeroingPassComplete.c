/*
 * XREFs of MiSignalZeroingPassComplete @ 0x1403B41BC
 * Callers:
 *     MiZeroLargePageThread @ 0x1403B3E80 (MiZeroLargePageThread.c)
 *     MiDeleteZeroThreadContext @ 0x14054FE54 (MiDeleteZeroThreadContext.c)
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
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
        return KeSignalGate(v1, 1);
    }
  }
  return result;
}
