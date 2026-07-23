/*
 * XREFs of HalpReadStdCmosData @ 0x1404D63C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x14023430C (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpReadStdCmosData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned __int8 v7; // al

  v4 = a1 + a3;
  v5 = a1;
  HalpAcquireCmosSpinLock(a1, a2, a3);
  v6 = 0LL;
  while ( v5 < v4 )
  {
    __outbyte(0x70u, v5);
    v7 = __inbyte(0x71u);
    ++v5;
    *(_BYTE *)(v6 + a2) = v7;
    v6 = (unsigned int)(v6 + 1);
  }
  _InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return (unsigned int)v6;
}
