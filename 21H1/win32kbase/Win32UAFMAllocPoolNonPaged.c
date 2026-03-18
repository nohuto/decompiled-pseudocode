/*
 * XREFs of Win32UAFMAllocPoolNonPaged @ 0x1C01447C0
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32AllocPoolImplSupported @ 0x1C008D834 (IsWin32AllocPoolImplSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32UAFMAllocPoolNonPaged(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // r9

  v6 = IsWin32AllocPoolImplSupported();
  v7 = 0LL;
  if ( v6 < 0 )
    return 0LL;
  if ( qword_1C0258C58 )
    return qword_1C0258C58(544LL, a1, a2, a3);
  return v7;
}
