/*
 * XREFs of ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002060
 * Callers:
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000200C (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C0042670 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013F778 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0212F34 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02BA058 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
        DXGADAPTER **this,
        const struct DXGDEVICE *a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  bool result; // al
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v7 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v7 + 24) = 6042LL;
    WdLogEvent5_WdAssertion(v7);
  }
  result = ((unsigned int)v4 < *((_DWORD *)this + 20)
         || (v8 = WdLogNewEntry5_WdAssertion(),
             *(_QWORD *)(v8 + 24) = 6043LL,
             WdLogEvent5_WdAssertion(v8),
             (unsigned int)v4 < *((_DWORD *)this + 20)))
        && a2 == *((const struct DXGDEVICE **)this[14] + 496 * v4 + 88);
  return result;
}
