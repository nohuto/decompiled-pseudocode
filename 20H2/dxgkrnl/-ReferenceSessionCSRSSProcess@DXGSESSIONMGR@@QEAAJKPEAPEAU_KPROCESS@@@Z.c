/*
 * XREFs of ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C029DA74
 * Callers:
 *     ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1C0015D40 (-Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z.c)
 *     ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x1C00161C0 (-OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0016830 (-Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1C0017540 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0239DC4 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0259E6C (DxgkIddHandleSetDisplayConfig.c)
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C02B4500 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
        DXGSESSIONMGR *this,
        unsigned int a2,
        struct _KPROCESS **a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  void *v9; // rdi
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  v6 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( (unsigned int)v3 < *((_DWORD *)this + 18)
    && (v8 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v3)) != 0
    && (v9 = *(void **)(v8 + 18632)) != 0LL )
  {
    ObfReferenceObject(v9);
    *a3 = (struct _KPROCESS *)v9;
  }
  else
  {
    v6 = -1073741275;
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v7);
  return v6;
}
