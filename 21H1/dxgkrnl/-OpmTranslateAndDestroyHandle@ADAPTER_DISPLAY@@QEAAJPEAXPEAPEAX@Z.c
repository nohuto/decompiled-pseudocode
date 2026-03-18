/*
 * XREFs of ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C015F730
 * Callers:
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C015F688 (DxgkOpmTranslateAndDestroyHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C015FBF4 (-OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateAndDestroyHandle(DXGADAPTER **this, _QWORD *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD **v11; // rcx
  void **v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v14 + 24) = 6415LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( this[42] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 6416LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( ADAPTER_DISPLAY::OpmValidateAdapterHandle((ADAPTER_DISPLAY *)this, a2) )
  {
    v11 = (_QWORD **)*a2;
    *a3 = (void *)a2[2];
    if ( v11[1] != a2 || (v12 = (void **)a2[1], *v12 != a2) )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = v12;
    operator delete(a2);
    return 0LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v15 + 24) = 6424LL;
    WdLogEvent5_WdAssertion(v15);
    return 3223192844LL;
  }
}
