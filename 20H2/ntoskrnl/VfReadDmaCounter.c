/*
 * XREFs of VfReadDmaCounter @ 0x1409D0180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409CD17C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x1409D1A60 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfReadDmaCounter(__int64 a1)
{
  __int64 (__fastcall *RealDmaOperation)(__int64); // rax

  VF_ASSERT_MAX_IRQL();
  RealDmaOperation = (__int64 (__fastcall *)(__int64))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1);
}
