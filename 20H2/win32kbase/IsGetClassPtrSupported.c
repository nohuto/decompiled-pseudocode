/*
 * XREFs of IsGetClassPtrSupported @ 0x1C00B9818
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00B0834 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetClassPtrSupported()
{
  if ( qword_1C0250708 )
    return qword_1C0250708();
  else
    return 3221225659LL;
}
