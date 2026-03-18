/*
 * XREFs of Win32AllocPagedLookasideList @ 0x1C0072710
 * Callers:
 *     ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C0072240 (-InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C00726A4 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     InitQEntryLookaside @ 0x1C0291870 (InitQEntryLookaside.c)
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocPagedLookasideList(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v9; // eax

  v4 = 0LL;
  if ( qword_1C0250C40 )
    v9 = qword_1C0250C40();
  else
    v9 = -1073741637;
  if ( v9 < 0 )
    return 0LL;
  if ( qword_1C0250C48 )
    return qword_1C0250C48(a1, a2, a3, a4);
  return v4;
}
