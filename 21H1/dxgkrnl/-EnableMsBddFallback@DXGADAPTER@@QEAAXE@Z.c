/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0208D1C
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C02C3400 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C02C35AC (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009F98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C013ECC4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::EnableMsBddFallback(PERESOURCE ***this, __int64 a2)
{
  char v2; // di
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = a2;
  if ( this[18] != (PERESOURCE **)KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 8491LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 8492LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)this) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 8494LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( v2 )
  {
    *((_DWORD *)this + 50) = 1;
  }
  else
  {
    if ( this[335] )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v11 + 24) = 8506LL;
      WdLogEvent5_WdAssertion(v11);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(this[334], 0LL);
    *((_DWORD *)this + 50) = 3;
  }
}
