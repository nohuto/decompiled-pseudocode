/*
 * XREFs of HalpMceMemoryErrorRecovery @ 0x1404CB328
 * Callers:
 *     HalpMceRecoveryMemoryErrorAmd @ 0x1404CB440 (HalpMceRecoveryMemoryErrorAmd.c)
 *     HalpMceRecoveryMemoryErrorIntel @ 0x1404CB52C (HalpMceRecoveryMemoryErrorIntel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpMceMemoryErrorRecovery(char a1, char a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rax

  v3 = -1073741823;
  v4 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->HalReserved[6] + 32LL);
  if ( v4 )
  {
    if ( a1 )
      *(_DWORD *)v4 |= 9u;
    if ( a2 )
    {
      *(_DWORD *)v4 |= 5u;
      *(_QWORD *)(v4 + 8) = a3;
    }
    return 0;
  }
  return v3;
}
