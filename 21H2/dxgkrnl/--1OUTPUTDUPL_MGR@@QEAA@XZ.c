/*
 * XREFs of ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C02985D8
 * Callers:
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C004A6D0 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C02993C8 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C00464A0 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0299438 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(OUTPUTDUPL_MGR **this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  OUTPUTDUPL_MGR *v5; // rcx
  OUTPUTDUPL_MGR *v6; // rcx
  OUTPUTDUPL_MGR *v7; // rcx

  if ( this[4] != (OUTPUTDUPL_MGR *)(this + 4) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 881LL;
    WdLogEvent5_WdAssertion(v3);
  }
  OUTPUTDUPL_MGR::DestroySourceContextLists((OUTPUTDUPL_MGR *)this);
  v5 = this[3];
  if ( v5 )
  {
    operator delete(v5);
    this[3] = 0LL;
  }
  v6 = this[7];
  if ( v6 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v6, v4);
    this[7] = 0LL;
  }
  v7 = this[8];
  if ( v7 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v7, v4);
    this[8] = 0LL;
  }
}
