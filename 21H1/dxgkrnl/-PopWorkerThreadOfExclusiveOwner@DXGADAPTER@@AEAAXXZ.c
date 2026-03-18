/*
 * XREFs of ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x1C00117DC
 * Callers:
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0011D6C (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     ?DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z @ 0x1C015A470 (-DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::PopWorkerThreadOfExclusiveOwner(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _ERESOURCE *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 2989LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !this[23] )
  {
    v6 = WdLogNewEntry5_WdCriticalError(v3, v2);
    *(_QWORD *)(v6 + 24) = 275LL;
    *(_QWORD *)(v6 + 32) = 17LL;
    *(_QWORD *)(v6 + 40) = this;
    *(_OWORD *)(v6 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  v4 = this[24];
  this[24] = 0LL;
  this[23] = v4;
}
