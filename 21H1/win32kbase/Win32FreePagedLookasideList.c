/*
 * XREFs of Win32FreePagedLookasideList @ 0x1C000CB90
 * Callers:
 *     ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C000BE00 (-vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C000BE2C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C000C588 (MultiUserNtGreCleanup.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0128480 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32FreePagedLookasideList(__int64 a1)
{
  __int64 result; // rax

  if ( qword_1C0258C30 )
    result = qword_1C0258C30();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0258C38;
    if ( qword_1C0258C38 )
      return qword_1C0258C38(a1);
  }
  return result;
}
