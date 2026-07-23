/*
 * XREFs of HalpMceRecoveryMemoryErrorAmd @ 0x1404D05B0
 * Callers:
 *     HalpMceRecoveryRequired @ 0x1404D0998 (HalpMceRecoveryRequired.c)
 * Callees:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x1404C252C (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpMceMemoryErrorRecovery @ 0x1404D0498 (HalpMceMemoryErrorRecovery.c)
 */

__int64 __fastcall HalpMceRecoveryMemoryErrorAmd(__int64 a1)
{
  __int64 v1; // rax
  char v2; // di
  __int64 v3; // r10
  __int64 v4; // rbx
  int v5; // edx

  v1 = *(_QWORD *)(a1 + 20);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0LL;
  v5 = -1073741637;
  if ( (v1 & 3) != 1 && ((v3 & 0x80000000000LL) != 0 || (v1 & 3) == 0) )
  {
    if ( (v3 & 0x400000000000000LL) != 0 )
    {
      v2 = 1;
      v4 = *(_QWORD *)(a1 + 48) & ~((1LL << (HIBYTE(*(_QWORD *)(a1 + 48)) & 0x3F)) - 1) & 0xFFFFFFFFFFFFFFLL;
    }
    if ( !HalpHvWheaEnlightenedCpuManager )
      return (unsigned int)HalpMceMemoryErrorRecovery(1, v2, v4);
    v5 = HalpHvMceConsumedMemoryErrorRecovery(*(unsigned int *)(a1 + 16), v4, v3, (v1 & 2) != 0, v1 & 1);
    if ( v5 < 0 )
      return (unsigned int)HalpMceMemoryErrorRecovery(1, v2, v4);
  }
  return (unsigned int)v5;
}
