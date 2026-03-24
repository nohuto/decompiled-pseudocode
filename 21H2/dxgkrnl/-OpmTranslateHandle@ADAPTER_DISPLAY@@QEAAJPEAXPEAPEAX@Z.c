/*
 * XREFs of ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0173D40
 * Callers:
 *     DxgkOpmTranslateHandle @ 0x1C0173C98 (DxgkOpmTranslateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z @ 0x1C00D6190 (-FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateHandle(DXGADAPTER **this, __int64 a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _OPM_HANDLE_MAPPING *OpmAdapterMapping; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v13 + 24) = 6383LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( this[43] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 6384LL;
    WdLogEvent5_WdAssertion(v8);
  }
  OpmAdapterMapping = ADAPTER_DISPLAY::FindOpmAdapterMapping((ADAPTER_DISPLAY *)this, a2);
  if ( OpmAdapterMapping )
  {
    if ( *((_BYTE *)OpmAdapterMapping + 32) )
    {
      return 3221225473LL;
    }
    else
    {
      *a3 = (void *)*((_QWORD *)OpmAdapterMapping + 2);
      return 0LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v14 + 24) = 6393LL;
    WdLogEvent5_WdAssertion(v14);
    return 3223192844LL;
  }
}
