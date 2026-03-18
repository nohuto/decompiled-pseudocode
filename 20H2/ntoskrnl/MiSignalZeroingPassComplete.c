/*
 * XREFs of MiSignalZeroingPassComplete @ 0x1403B2C2C
 * Callers:
 *     MiZeroLargePageThread @ 0x1403B28F0 (MiZeroLargePageThread.c)
 *     MiDeleteZeroThreadContext @ 0x14054E144 (MiDeleteZeroThreadContext.c)
 * Callees:
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 */

char __fastcall MiSignalZeroingPassComplete(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rcx
  signed __int32 v5; // eax

  v4 = *(_QWORD *)(a1 + 232);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 128);
    if ( v5 )
    {
      v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 128), 0xFFFFFFFF);
      if ( v5 == 1 )
        LOBYTE(v5) = KeSignalGate(v4, 1LL, a3, a4);
    }
  }
  return v5;
}
