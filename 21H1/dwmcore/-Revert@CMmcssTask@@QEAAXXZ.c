/*
 * XREFs of ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800CD8E4
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180041F64 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18008CAC8 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18008CC18 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?Run@CGlobalMit@@MEAAKXZ @ 0x1800CD740 (-Run@CGlobalMit@@MEAAKXZ.c)
 *     _lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_ @ 0x1800D3C00 (_lambda_08f8e6791065478e4a38815f49fd4aba_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
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
