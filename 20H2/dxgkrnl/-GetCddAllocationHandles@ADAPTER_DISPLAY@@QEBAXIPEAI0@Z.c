/*
 * XREFs of ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C0163D90
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DC870 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C018FE24 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019AD8 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCddAllocationHandles(
        DXGADAPTER **this,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  DXGADAPTER *v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax

  v7 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 1419LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v10 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v15 + 24) = 1420LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( ADAPTER_DISPLAY::IsCddPrimaryStale((ADAPTER_DISPLAY *)this, v7)
    || (v11 = this[14], (v12 = *((_QWORD *)v11 + 496 * v7 + 11)) == 0)
    || (*(_DWORD *)(*(_QWORD *)(v12 + 48) + 4LL) & 0x10) != 0 )
  {
    v13 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(*((_QWORD *)v11 + 496 * v7 + 75) + 16LL);
    v13 = *(_DWORD *)(v12 + 16);
  }
  *a3 = v13;
  *a4 = v10;
}
