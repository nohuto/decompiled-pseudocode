/*
 * XREFs of ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C02FE728
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C02FC570 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C02FDB60 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001A644 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013AD94 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

void __fastcall BLTQUEUE::SetVisibilityIfDeferred(BLTQUEUE *this)
{
  struct DXGADAPTER *Adapter; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rax

  if ( _InterlockedExchange((volatile __int32 *)this + 236, 0) )
  {
    Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
    v3 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
           *((ADAPTER_DISPLAY **)Adapter + 337),
           *((unsigned int *)this + 62),
           1u,
           0x4000,
           0);
    v6 = v3;
    if ( v3 < 0 )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
      v7[3] = *((unsigned int *)this + 62);
      v7[4] = Adapter;
      v7[5] = v6;
      WdLogEvent5_WdError(v7);
    }
  }
}
