/*
 * XREFs of IsWin32AllocPoolImplSupported @ 0x1C003C684
 * Callers:
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     Win32UAFMAllocPool @ 0x1C013C0B0 (Win32UAFMAllocPool.c)
 *     Win32UAFMAllocPoolNonPaged @ 0x1C013C120 (Win32UAFMAllocPoolNonPaged.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsWin32AllocPoolImplSupported()
{
  if ( qword_1C0250C10 )
    return qword_1C0250C10();
  else
    return 3221225659LL;
}
