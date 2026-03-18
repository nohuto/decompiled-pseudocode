/*
 * XREFs of ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800D5654
 * Callers:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180033CAC (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x180033F2C (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18005F6E4 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Run@CGlobalMit@@MEAAKXZ @ 0x1800D54B0 (-Run@CGlobalMit@@MEAAKXZ.c)
 *     _lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_ @ 0x1800DB7F0 (_lambda_08f8e6791065478e4a38815f49fd4aba_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMmcssTask::Revert(struct _RTL_CRITICAL_SECTION *this)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo && *(_QWORD *)&DebugInfo[2].Flags )
  {
    ((void (*)(void))this[1].LockSemaphore)();
    *(_QWORD *)&this[1].DebugInfo[2].Flags = 0LL;
  }
  LOBYTE(this[2].DebugInfo) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
}
