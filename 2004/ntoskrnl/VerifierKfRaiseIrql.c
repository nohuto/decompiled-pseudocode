/*
 * XREFs of VerifierKfRaiseIrql @ 0x1409D8A90
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x1409D44FC (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D926C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKfRaiseIrql(char a1)
{
  __int64 (__fastcall *v1)(__int64); // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 (__fastcall *)(__int64))pXdvKfRaiseIrql;
  if ( KeAreInterruptsEnabled() )
  {
    ++dword_140C2A5E4;
    v3 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(retaddr, 152LL);
  }
  LOBYTE(v3) = a1;
  v4 = ViKeRaiseIrqlSanityChecks(v3, 0LL);
  LOBYTE(v5) = a1;
  result = v1(v5);
  if ( v4 )
    *(_WORD *)(v4 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
