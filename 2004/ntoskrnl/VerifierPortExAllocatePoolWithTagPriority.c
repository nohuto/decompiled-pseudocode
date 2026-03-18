/*
 * XREFs of VerifierPortExAllocatePoolWithTagPriority @ 0x1409E1D20
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14028C680 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

PVOID __fastcall VerifierPortExAllocatePoolWithTagPriority(POOL_TYPE a1, SIZE_T a2, ULONG a3, EX_POOL_PRIORITY a4)
{
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
    return (PVOID)((__int64 (__fastcall *)(_QWORD))pXdvExAllocatePoolWithTagPriority)(a1 | 0x80u);
  else
    return ExAllocatePoolWithTagPriority(a1, a2, a3, a4);
}
