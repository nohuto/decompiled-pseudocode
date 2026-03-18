/*
 * XREFs of Win32FreePagedLookasideList @ 0x1C00851C0
 * Callers:
 *     ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C0084430 (-vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008445C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C0084BB8 (MultiUserNtGreCleanup.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0120150 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32FreePagedLookasideList(__int64 a1)
{
  __int64 result; // rax

  if ( qword_1C0250C70 )
    result = qword_1C0250C70();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0250C78;
    if ( qword_1C0250C78 )
      return qword_1C0250C78(a1);
  }
  return result;
}
