/*
 * XREFs of ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C003A0FC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01142B4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0211790 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESS::RemoveCopyProtection(DXGPROCESS *this, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 42) + 16LL) != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 685LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = a2 + 24;
  v5 = -a2;
  v6 = v4 & -(__int64)(v5 != 0);
  v7 = *(_QWORD *)v6;
  if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *(_QWORD **)((v4 & -(__int64)(v5 != 0)) + 8), *v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
}
