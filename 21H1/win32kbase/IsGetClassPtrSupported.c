/*
 * XREFs of IsGetClassPtrSupported @ 0x1C002D4B4
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C002D084 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetClassPtrSupported()
{
  if ( qword_1C02586C8 )
    return qword_1C02586C8();
  else
    return 3221225659LL;
}
