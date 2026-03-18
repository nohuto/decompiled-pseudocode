/*
 * XREFs of ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C001A694
 * Callers:
 *     DxgkQueryModeListCacheLuid @ 0x1C0159CC0 (DxgkQueryModeListCacheLuid.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::QueryModeListCacheLuid(DXGADAPTER **this, unsigned int a2, struct _LUID *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGADAPTER *v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v10 + 24) = 6161LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 6162LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_BYTE *)this + 252) )
    return 3221225473LL;
  v8 = this[14];
  if ( !*((_BYTE *)v8 + 3968 * v4 + 1092) )
    return 3221225473LL;
  *a3 = *(struct _LUID *)((char *)v8 + 3968 * v4 + 1096);
  return 0LL;
}
