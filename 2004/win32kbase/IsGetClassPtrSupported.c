/*
 * XREFs of IsGetClassPtrSupported @ 0x1C0059AF8
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C004FD24 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetClassPtrSupported()
{
  if ( qword_1C0252708 )
    return qword_1C0252708();
  else
    return 3221225659LL;
}
