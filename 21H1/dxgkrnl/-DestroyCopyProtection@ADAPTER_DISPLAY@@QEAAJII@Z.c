/*
 * XREFs of ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C020D540
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkHandleVideoParameters @ 0x1C02902A8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0038EA8 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C00391DC (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012B854 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C020E748 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCopyProtection(DXGADAPTER **this, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  DXGCOPYPROTECTION *v20; // rbx
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  DXGCOPYPROTECTION *v24; // rcx
  DXGCOPYPROTECTION **v25; // rax
  _BYTE v27[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 5406LL;
    WdLogEvent5_WdAssertion(v8);
  }
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v12 + 24) = 5409LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentThread = KeGetCurrentThread();
  v14 = *((_QWORD *)Current + 42);
  if ( *(struct _KTHREAD **)(v14 + 16) != CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, CurrentThread);
    *(_QWORD *)(v15 + 24) = 5410LL;
    WdLogEvent5_WdAssertion(v15);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v5, v4, Current);
  v20 = CopyProtection;
  if ( CopyProtection )
  {
    DXGPROCESS::RemoveCopyProtection(Current, (__int64)CopyProtection);
    v24 = *(DXGCOPYPROTECTION **)v20;
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v20 + 8LL) != v20
      || (v25 = (DXGCOPYPROTECTION **)*((_QWORD *)v20 + 1), *v25 != v20) )
    {
      __fastfail(3u);
    }
    *v25 = v24;
    *((_QWORD *)v24 + 1) = v25;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v20);
    ADAPTER_DISPLAY::SetCopyProtection(this, v5);
    DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
    v22 = 0;
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v22 = -1073741811;
    v21[3] = v4;
    v21[4] = Current;
    v21[5] = v5;
    v21[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
  }
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v23);
  return v22;
}
