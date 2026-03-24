/*
 * XREFs of ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0174054
 * Callers:
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C0173FAC (DxgkOpmTranslateAndDestroyHandle.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z @ 0x1C00D6190 (-FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateAndDestroyHandle(DXGADAPTER **this, __int64 a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _OPM_HANDLE_MAPPING *OpmAdapterMapping; // rax
  __int64 v10; // rdx
  struct _OPM_HANDLE_MAPPING *v11; // rcx
  struct _OPM_HANDLE_MAPPING **v12; // rdx
  void **v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v15 + 24) = 6424LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( this[43] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 6425LL;
    WdLogEvent5_WdAssertion(v8);
  }
  OpmAdapterMapping = ADAPTER_DISPLAY::FindOpmAdapterMapping((ADAPTER_DISPLAY *)this, a2);
  v11 = OpmAdapterMapping;
  if ( OpmAdapterMapping )
  {
    v12 = *(struct _OPM_HANDLE_MAPPING ***)OpmAdapterMapping;
    *a3 = (void *)*((_QWORD *)OpmAdapterMapping + 2);
    if ( v12[1] != OpmAdapterMapping || (v13 = (void **)*((_QWORD *)OpmAdapterMapping + 1), *v13 != v11) )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = (struct _OPM_HANDLE_MAPPING *)v13;
    operator delete(v11);
    return 0LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(0LL, v10);
    *(_QWORD *)(v16 + 24) = 6434LL;
    WdLogEvent5_WdAssertion(v16);
    return 3223192844LL;
  }
}
