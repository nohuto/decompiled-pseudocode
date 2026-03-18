/*
 * XREFs of ?OnThreadExit@InkFeedbackServer@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00F82B4
 * Callers:
 *     ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00F8240 (-OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InkFeedbackServer::OnThreadExit(InkFeedbackServer **this, const struct tagTHREADINFO *a2)
{
  InkFeedbackServer *i; // rbx

  for ( i = *this; i != (InkFeedbackServer *)this; i = *(InkFeedbackServer **)i )
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)i - 1) + 24LL))((__int64)i - 8, *(_QWORD *)a2);
}
