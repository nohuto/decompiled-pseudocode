/*
 * XREFs of IoGetIommuInterface @ 0x1407D0960
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 IoGetIommuInterface()
{
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  return off_140C009D0[0]();
}
