/*
 * XREFs of MiSignalZeroingPassComplete @ 0x1403B404C
 * Callers:
 *     MiZeroLargePageThread @ 0x1403B3D10 (MiZeroLargePageThread.c)
 *     MiDeleteZeroThreadContext @ 0x14054FC14 (MiDeleteZeroThreadContext.c)
 * Callees:
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 */

__int64 __fastcall MiSignalZeroingPassComplete(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 232);
  if ( v4 )
  {
    result = *(unsigned int *)(v4 + 128);
    if ( (_DWORD)result )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 128), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return KeSignalGate(v4, 1LL, a3, a4);
    }
  }
  return result;
}
