/*
 * XREFs of sub_1800FCC00 @ 0x1800FCC00
 * Callers:
 *     sub_18012F552 @ 0x18012F552 (sub_18012F552.c)
 *     sub_18012F56A @ 0x18012F56A (sub_18012F56A.c)
 *     ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA_2 @ 0x18012F5A2 (-dtor$0@-0--VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurren_ea_18012F5A2.c)
 *     sub_18012F5BA @ 0x18012F5BA (sub_18012F5BA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FCC00(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
