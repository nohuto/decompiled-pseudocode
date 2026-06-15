/*
 * XREFs of ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180046DF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800B967C (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B9B50 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800BAF68 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18013DA38 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::PreADGTermination(CAudioSrv *this)
{
  int v1; // ebx
  __int64 v2; // rcx
  _QWORD *v3; // rax
  size_t cchDest; // [rsp+40h] [rbp-C0h] BYREF
  STRSAFE_LPWSTR v5; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v6[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszDest[1024]; // [rsp+60h] [rbp-A0h] BYREF

  EnterCriticalSection(&g_csVadList);
  v6[1] = &g_csVadList;
  if ( qword_18019EA00 )
  {
    v5 = pszDest;
    cchDest = 1024LL;
    v1 = StringCchPrintfExW(
           pszDest,
           0x400uLL,
           &v5,
           &cchDest,
           0x800u,
           L"AudioSrv active Stream on AudioDG terminating: ");
    if ( v1 >= 0 )
    {
      v2 = g_VADServerList;
      for ( v6[0] = g_VADServerList; v2; v2 = v6[0] )
      {
        v3 = (_QWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v2, v2);
        v1 = StringCchPrintfExW(v5, cchDest, &v5, &cchDest, 0x800u, L"%p ", *v3);
        if ( v1 )
          break;
        ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v2, v6);
      }
      if ( v1 >= 0 )
        MicrosoftTelemetryAssertTriggeredArgs(v2, (unsigned int)v1, 0LL);
      if ( v1 == -2147024774 )
        MicrosoftTelemetryAssertTriggeredArgs(v2, 2147942522LL, 0LL);
    }
  }
  LeaveCriticalSection(&g_csVadList);
}
