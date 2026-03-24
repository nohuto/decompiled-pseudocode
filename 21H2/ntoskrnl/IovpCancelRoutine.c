/*
 * XREFs of IovpCancelRoutine @ 0x1409D03D0
 * Callers:
 *     IoCancelIrp @ 0x1402BB2C0 (IoCancelIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     VfIsRuleClassEnabled @ 0x1409C6020 (VfIsRuleClassEnabled.c)
 */

__int64 __fastcall IovpCancelRoutine(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 (__fastcall *v6)(__int64, __int64); // rax

  if ( (MmVerifierData & 0x6A0000) == 0 && !VfIsRuleClassEnabled(0x23u)
    || !a1
    || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) + 64LL)
    || (v6 = (__int64 (__fastcall *)(__int64, __int64))pXdvDriverCancel) == 0LL )
  {
    v6 = a3;
  }
  return v6(a1, a2);
}
