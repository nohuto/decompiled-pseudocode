/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1C0009C28
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0007ED8 (UnInitializeInputComponents.c)
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C019FFD8 (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0009D38 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C0009DA4 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(CTouchProcessor *this)
{
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo(this);
  CInpLockGuard::Uninitialize((CTouchProcessor *)((char *)this + 40));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
}
