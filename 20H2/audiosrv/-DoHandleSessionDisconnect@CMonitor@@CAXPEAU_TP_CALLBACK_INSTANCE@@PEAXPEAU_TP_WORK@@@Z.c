/*
 * XREFs of ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180100650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x1801003EC (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 */

void __fastcall CMonitor::DoHandleSessionDisconnect(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  CMonitor *v3; // rdi
  struct _TP_WORK *v5; // rcx
  __int64 v6; // rcx

  v3 = (CMonitor *)Context[1];
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids);
  }
  CMonitor::AbortMonitor(v3);
  v5 = (struct _TP_WORK *)Context[2];
  if ( v5 )
    CloseThreadpoolWork(v5);
  v6 = Context[1];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  operator delete(Context, (const struct std::nothrow_t *)0x18);
}
