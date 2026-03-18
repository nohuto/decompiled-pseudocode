/*
 * XREFs of VerifierExAllocatePoolWithTagPriority @ 0x1409D20A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14028C680 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1409C4D54 (VfCheckPoolType.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithTagPriority(
        __int32 PoolType,
        ULONG_PTR BugCheckParameter3,
        ULONG Tag,
        __int32 Priority)
{
  POOL_TYPE v9; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (VfRuleClasses & 0x800000000LL) != 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, Tag);
    v9 = PoolType | 0x80;
    if ( XdvEnabled )
      return (PVOID)pXdvExAllocatePoolWithTagPriority(
                      v9,
                      BugCheckParameter3,
                      Tag,
                      Priority,
                      retaddr,
                      (__int64)VeAllocatePoolWithTagPriority);
    else
      return VeAllocatePoolWithTagPriority(v9, BugCheckParameter3, Tag, (EX_POOL_PRIORITY)Priority, retaddr);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0);
    return ExAllocatePoolWithTagPriority((POOL_TYPE)PoolType, BugCheckParameter3, Tag, (EX_POOL_PRIORITY)Priority);
  }
}
