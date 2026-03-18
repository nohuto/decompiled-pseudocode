/*
 * XREFs of IsWin32AllocPoolImplSupported @ 0x1C008D834
 * Callers:
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     Win32UAFMAllocPool @ 0x1C0144750 (Win32UAFMAllocPool.c)
 *     Win32UAFMAllocPoolNonPaged @ 0x1C01447C0 (Win32UAFMAllocPoolNonPaged.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsWin32AllocPoolImplSupported()
{
  if ( qword_1C0258BD0 )
    return qword_1C0258BD0();
  else
    return 3221225659LL;
}
