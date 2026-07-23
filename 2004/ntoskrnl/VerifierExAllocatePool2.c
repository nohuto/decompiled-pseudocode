/*
 * XREFs of VerifierExAllocatePool2 @ 0x1409D19D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B1010 (ExpPoolFlagsToPoolType.c)
 *     ExAllocatePool2 @ 0x1409B1280 (ExAllocatePool2.c)
 *     VfCheckPoolType @ 0x1409C4D54 (VfCheckPoolType.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __fastcall VerifierExAllocatePool2(__int64 a1, SIZE_T a2, ULONG a3)
{
  __int64 v6; // rcx
  PVOID result; // rax
  unsigned int v8; // ebx
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
  v8 = v11[0] & 0xFFFFFFE7;
  VfCheckPoolType(v11[0] & 0xFFFFFFE7, retaddr, 0);
  v9 = v8 | 0x80;
  if ( XdvEnabled )
    result = (PVOID)pXdvExAllocatePool2(v9, a2, a3, 32, retaddr, (__int64)VeAllocatePoolWithTagPriority);
  else
    result = VeAllocatePoolWithTagPriority(v9, a2, a3, HighPoolPriority, retaddr);
  if ( !result && (a1 & 0x20) != 0 )
    RtlRaiseStatus(-1073741670);
  return result;
}
