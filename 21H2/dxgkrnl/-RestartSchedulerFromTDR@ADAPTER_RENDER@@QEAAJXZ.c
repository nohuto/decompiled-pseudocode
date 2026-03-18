/*
 * XREFs of ?RestartSchedulerFromTDR@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02C47E4
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C452C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::RestartSchedulerFromTDR(ADAPTER_RENDER *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 79);
  if ( !v2 )
  {
    WdLogSingleEntry1(1LL, 2567LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVidSchGlobal", 2567LL, 0LL, 0LL, 0LL, 0LL);
    v2 = *((_QWORD *)this + 79);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 78) + 8LL) + 752LL))(v2, 1LL);
}
