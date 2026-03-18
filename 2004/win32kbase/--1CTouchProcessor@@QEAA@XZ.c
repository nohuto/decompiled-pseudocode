/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1C000AD30
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00078C8 (UnInitializeInputComponents.c)
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C01A2358 (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C000AE48 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C000AEB4 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(CTouchProcessor *this)
{
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo(this);
  CInpLockGuard::Uninitialize((CTouchProcessor *)((char *)this + 40));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
}
