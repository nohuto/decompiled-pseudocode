/*
 * XREFs of ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F3A94
 * Callers:
 *     DxgkEndDisplayCalloutBatch @ 0x1C01F3A78 (DxgkEndDisplayCalloutBatch.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1C030CE78 (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::EndDisplayCalloutBatch(ADAPTER_DISPLAY *this)
{
  unsigned int v2; // esi
  DXGADAPTER *v4; // rcx
  struct _LUID *v5; // rdx
  __int64 v6; // r11
  _BYTE v7[16]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 8815LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 8815LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (ADAPTER_DISPLAY *)((char *)this + 536), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( !*((_BYTE *)this + 584) )
  {
    WdLogSingleEntry1(1LL, 8820LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_DisplayCalloutBatchStarted", 8820LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_BYTE *)this + 584) = 0;
  if ( *((ADAPTER_DISPLAY **)this + 74) != (ADAPTER_DISPLAY *)((char *)this + 592) )
  {
    DXGGLOBAL_GetGlobal();
    v4 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v8 = 0LL;
    DXGADAPTER::IsAdapterSessionized(v4, v5, 0LL, &v8);
    v2 = DXGDISPLAYCALLOUTQUEUE::SubmitBatch((DXGDISPLAYCALLOUTQUEUE *)(v6 + 1872), (struct _LIST_ENTRY *)this + 37, v8);
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return v2;
}
