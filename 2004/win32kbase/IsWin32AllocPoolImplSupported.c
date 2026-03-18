/*
 * XREFs of IsWin32AllocPoolImplSupported @ 0x1C0080E64
 * Callers:
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     Win32UAFMAllocPool @ 0x1C013E400 (Win32UAFMAllocPool.c)
 *     Win32UAFMAllocPoolNonPaged @ 0x1C013E470 (Win32UAFMAllocPoolNonPaged.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsWin32AllocPoolImplSupported()
{
  if ( qword_1C0252C10 )
    return qword_1C0252C10();
  else
    return 3221225659LL;
}
