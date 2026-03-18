/*
 * XREFs of ?Open@CCompositionSurface@@MEAAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1C0017DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::Open(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax

  if ( !DXGGLOBAL::m_pGlobal )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v7 + 24) = 2219LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38033) + 304LL))(a4) )
  {
    *(_QWORD *)(a1 + 40) = a4;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
  }
  return 0LL;
}
