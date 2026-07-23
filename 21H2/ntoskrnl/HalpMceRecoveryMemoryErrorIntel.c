/*
 * XREFs of HalpMceRecoveryMemoryErrorIntel @ 0x1404D069C
 * Callers:
 *     HalpMceRecoveryRequired @ 0x1404D0998 (HalpMceRecoveryRequired.c)
 * Callees:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x1404C252C (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpMceMemoryErrorRecovery @ 0x1404D0498 (HalpMceMemoryErrorRecovery.c)
 */

__int64 __fastcall HalpMceRecoveryMemoryErrorIntel(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  char v3; // di
  unsigned int v5; // r10d
  __int64 v6; // rcx
  char v7; // cl
  __int64 v8; // rbx

  v1 = *(_QWORD *)(a1 + 20);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v5 = -1073741637;
  if ( (v1 & 3) == 1 )
    return v5;
  if ( (unsigned __int8)v2 >> 4 != 3 )
  {
    if ( (unsigned __int8)v2 >> 4 == 5 && (((unsigned __int8)v2 >> 2) & 3) == 0 )
      v3 = (v2 & 3) == 0;
LABEL_9:
    if ( !v3 )
      return v5;
    goto LABEL_10;
  }
  if ( (((unsigned __int8)v2 >> 2) & 3) != 1 || (v2 & 3) != 0 )
    goto LABEL_9;
  v3 = 1;
LABEL_10:
  if ( (v2 & 0x800000000000000LL) != 0 && (v2 & 0x400000000000000LL) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( (*(_QWORD *)(a1 + 56) & 0x1C0LL) == 0x80 )
    {
      v7 = v6 & 0x3F;
      v8 = HalpMcaPhysicalAddressMask & *(_QWORD *)(a1 + 48) & ~((1LL << v7) - 1);
      if ( !HalpHvWheaEnlightenedCpuManager )
        return (unsigned int)HalpMceMemoryErrorRecovery(v3, 1, v8);
      v5 = HalpHvMceConsumedMemoryErrorRecovery(
             *(unsigned int *)(a1 + 16),
             (unsigned int)HalpMcaPhysicalAddressMask & *(_DWORD *)(a1 + 48) & ~((1 << v7) - 1),
             v2,
             (v1 & 2) != 0,
             v1 & 1);
      if ( (v5 & 0x80000000) != 0 )
        return (unsigned int)HalpMceMemoryErrorRecovery(v3, 1, v8);
    }
  }
  return v5;
}
