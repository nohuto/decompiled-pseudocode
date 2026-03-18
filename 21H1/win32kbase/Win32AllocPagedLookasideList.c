/*
 * XREFs of Win32AllocPagedLookasideList @ 0x1C001F320
 * Callers:
 *     ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C001EE50 (-InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C001F2B4 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     InitQEntryLookaside @ 0x1C029AE28 (InitQEntryLookaside.c)
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocPagedLookasideList(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v9; // eax

  v4 = 0LL;
  if ( qword_1C0258C00 )
    v9 = qword_1C0258C00();
  else
    v9 = -1073741637;
  if ( v9 < 0 )
    return 0LL;
  if ( qword_1C0258C08 )
    return qword_1C0258C08(a1, a2, a3, a4);
  return v4;
}
