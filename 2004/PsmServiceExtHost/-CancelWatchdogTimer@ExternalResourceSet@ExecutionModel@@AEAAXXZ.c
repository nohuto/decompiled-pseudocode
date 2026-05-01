/*
 * XREFs of ?CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800033F4
 * Callers:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18000335C (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180073880 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::CancelWatchdogTimer(ExecutionModel::ExternalResourceSet *this)
{
  __int64 v2; // rax

  if ( (unsigned int)TpSetTimerEx(*((_QWORD *)this + 168), 0LL, 0LL, 0LL) )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 338) &= ~8u;
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(v2 + 16))(this);
  }
}
