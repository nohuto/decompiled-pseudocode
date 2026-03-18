/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C033FB4C
 * Callers:
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02FEF50 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1C03083C4 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0310230 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C033FC10 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall DXGSYNCOBJECT::GetDxgAdapterSyncObject(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTERSYNCOBJECT **a3)
{
  struct ADAPTER_RENDER *v5; // rax

  *a3 = 0LL;
  if ( (*((_DWORD *)this + 51) & 4) != 0 )
    return DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, a3);
  if ( !a2 || (v5 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 39), v5 == a2) )
  {
    *a3 = (DXGSYNCOBJECT *)((char *)this + 296);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry4(2LL, this, v5, a2, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
      (__int64)this,
      *((_QWORD *)this + 39),
      (__int64)a2,
      -1073741811LL,
      0LL);
    return 3221225485LL;
  }
}
