/*
 * XREFs of VfGetDmaAlignment @ 0x1409C9030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     VF_ASSERT_IRQL @ 0x1409C70DC (VF_ASSERT_IRQL.c)
 *     ViGetRealDmaOperation @ 0x1409CBA40 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfGetDmaAlignment(__int64 a1)
{
  __int64 (__fastcall *RealDmaOperation)(__int64); // rax

  VF_ASSERT_IRQL(0);
  RealDmaOperation = (__int64 (__fastcall *)(__int64))ViGetRealDmaOperation(a1);
  if ( RealDmaOperation )
    return RealDmaOperation(a1);
  else
    return 1LL;
}
