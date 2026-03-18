/*
 * XREFs of VerifierKeSynchronizeExecution @ 0x1409DE6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x1409DA51C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409DF28C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeSynchronizeExecution(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140C2A6EC;
  v6 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 160LL);
  LOBYTE(v6) = *(_BYTE *)(a1 + 93);
  ViKeRaiseIrqlSanityChecks(v6, 0LL);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvKeSynchronizeExecution)(a1, a2, a3);
}
