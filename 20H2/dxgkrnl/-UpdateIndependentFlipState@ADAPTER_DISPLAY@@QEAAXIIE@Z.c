/*
 * XREFs of ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C016DDA8
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0104F10 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z @ 0x1C016DE28 (-UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateIndependentFlipState(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (ADAPTER_DISPLAY *)((char *)this + 520), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  DISPLAY_SOURCE::UpdateIndependentFlipStateUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3968 * v4), a3, a4);
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v8);
}
