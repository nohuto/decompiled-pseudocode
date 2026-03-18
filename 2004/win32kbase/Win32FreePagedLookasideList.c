/*
 * XREFs of Win32FreePagedLookasideList @ 0x1C0021AD0
 * Callers:
 *     ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C0020D40 (-vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0020D6C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C00214C8 (MultiUserNtGreCleanup.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01224A0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32FreePagedLookasideList(__int64 a1)
{
  __int64 result; // rax

  if ( qword_1C0252C70 )
    result = qword_1C0252C70();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0252C78;
    if ( qword_1C0252C78 )
      return qword_1C0252C78(a1);
  }
  return result;
}
