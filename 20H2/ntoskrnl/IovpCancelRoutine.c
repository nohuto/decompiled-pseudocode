/*
 * XREFs of IovpCancelRoutine @ 0x1409D33E0
 * Callers:
 *     IoCancelIrp @ 0x140318CD0 (IoCancelIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     VfIsRuleClassEnabled @ 0x1409C9030 (VfIsRuleClassEnabled.c)
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
