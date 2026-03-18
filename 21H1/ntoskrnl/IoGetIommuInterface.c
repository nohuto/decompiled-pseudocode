/*
 * XREFs of IoGetIommuInterface @ 0x1407BEC60
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 IoGetIommuInterface()
{
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  return off_140C009D0[0]();
}
