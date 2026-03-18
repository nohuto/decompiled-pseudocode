/*
 * XREFs of ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x180258900
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802507EC (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     ?ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z @ 0x1802588AC (-ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x180258BA0 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x180258D60 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicInteropTaskQueue::ClearMessage(CHolographicInteropTaskQueue *this, struct MESSAGE *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a2 + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  memset_0(a2, 0, 0x40uLL);
}
