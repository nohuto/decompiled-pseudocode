/*
 * XREFs of sub_1800F7330 @ 0x1800F7330
 * Callers:
 *     sub_180129C3A @ 0x180129C3A (sub_180129C3A.c)
 *     sub_180129C52 @ 0x180129C52 (sub_180129C52.c)
 *     ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA_2 @ 0x180129C8A (-dtor$0@-0--VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurren_ea_180129C8A.c)
 *     sub_180129CA2 @ 0x180129CA2 (sub_180129CA2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F7330(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
