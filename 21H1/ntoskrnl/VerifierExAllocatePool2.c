/*
 * XREFs of VerifierExAllocatePool2 @ 0x1409D19C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B10D0 (ExpPoolFlagsToPoolType.c)
 *     ExAllocatePool2 @ 0x1409B1280 (ExAllocatePool2.c)
 *     VfCheckPoolType @ 0x1409C4D44 (VfCheckPoolType.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __fastcall VerifierExAllocatePool2(__int64 a1, SIZE_T a2, ULONG a3)
{
  __int64 v6; // rcx
  int v8; // ebx
  POOL_TYPE v9; // ebx
  _BYTE v10[4]; // [rsp+40h] [rbp-18h] BYREF
  int v11[5]; // [rsp+44h] [rbp-14h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v11[0] = 0;
  if ( (int)ExpPoolFlagsToPoolType(a1, 0, v11, v10, &v13) < 0 )
    return ExAllocatePool2(v6, a2, a3);
  if ( (MmVerifierData & 0x400000) != 0 && (VfRuleClasses & 0x800000000LL) == 0 && (MmVerifierData & 1) == 0 )
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(v11[0], retaddr, 0);
    v6 = a1;
    return ExAllocatePool2(v6, a2, a3);
  }
  v8 = v11[0];
  VfCheckPoolType(v11[0], retaddr, 0);
  v9 = v8 | 0x80;
  if ( XdvEnabled )
    return (PVOID)pXdvExAllocatePool2(v9, a2, a3, 32, retaddr, (__int64)VeAllocatePoolWithTagPriority);
  else
    return VeAllocatePoolWithTagPriority(v9, a2, a3, HighPoolPriority, retaddr);
}
