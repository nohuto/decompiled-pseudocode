/*
 * XREFs of sub_1800B4430 @ 0x1800B4430
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _Cnd_do_broadcast_at_thread_exit @ 0x18012538C (_Cnd_do_broadcast_at_thread_exit.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B4430(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  Cnd_do_broadcast_at_thread_exit();
  j__o_free(a1);
  return 0LL;
}
