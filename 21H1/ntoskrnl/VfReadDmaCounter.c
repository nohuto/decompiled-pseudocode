/*
 * XREFs of VfReadDmaCounter @ 0x1409CA150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409C714C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x1409CBA30 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfReadDmaCounter(__int64 a1)
{
  __int64 (__fastcall *RealDmaOperation)(__int64); // rax

  VF_ASSERT_MAX_IRQL();
  RealDmaOperation = (__int64 (__fastcall *)(__int64))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1);
}
