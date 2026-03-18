/*
 * XREFs of ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0165620
 * Callers:
 *     DxgkEndDisplayCalloutBatch @ 0x1C0165604 (DxgkEndDisplayCalloutBatch.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0011FD8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1C026771C (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::EndDisplayCalloutBatch(ADAPTER_DISPLAY *this)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _LUID *v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  DXGADAPTER *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v8 + 24) = 8649LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (ADAPTER_DISPLAY *)((char *)this + 456), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( !*((_BYTE *)this + 496) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v9 + 24) = 8654LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((_BYTE *)this + 496) = 0;
  if ( *((ADAPTER_DISPLAY **)this + 63) != (ADAPTER_DISPLAY *)((char *)this + 504) )
  {
    v10 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v15 = 0LL;
    DXGADAPTER::IsAdapterSessionized(v10, v5, 0LL, &v15);
    Global = DXGGLOBAL::GetGlobal(v12, v11);
    v2 = DXGDISPLAYCALLOUTQUEUE::SubmitBatch(
           (struct DXGGLOBAL *)((char *)Global + 1584),
           (struct _LIST_ENTRY *)((char *)this + 504),
           v15);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, (__int64)v5);
  return v2;
}
