/*
 * XREFs of ?Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800DAD80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800B8ACC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B8FA0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x1800DAE04 (-CaptureState@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSrvTelemetryProvider::Callback(const struct _GUID *a1, int a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  CVADServer **v4; // rax
  __int64 v5; // rcx
  _QWORD *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    EnterCriticalSection(&g_csVadList);
    v6[1] = &g_csVadList;
    v3 = (_QWORD *)g_VADServerList;
    v6[0] = (_QWORD *)g_VADServerList;
    while ( v3 )
    {
      v4 = (CVADServer **)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                            v2,
                            (__int64)v3);
      CVADServer::CaptureState(*v4);
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v5, v6);
      v3 = v6[0];
    }
    LeaveCriticalSection(&g_csVadList);
  }
}
