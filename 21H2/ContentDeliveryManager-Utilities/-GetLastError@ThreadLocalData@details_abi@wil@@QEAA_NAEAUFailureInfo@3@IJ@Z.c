/*
 * XREFs of ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x180006A98
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180006B9C (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000CB08 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800CFEF1 (memset_0.c)
 */

char __fastcall wil::details_abi::ThreadLocalData::GetLastError(
        wil::details_abi::ThreadLocalData *this,
        struct wil::FailureInfo *a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r10
  __int64 v6; // rbx
  unsigned int v7; // esi
  __int64 v9; // rcx
  unsigned int v10; // eax

  v5 = *((_QWORD *)this + 3);
  v6 = v5 + 80LL * *((unsigned __int16 *)this + 17);
  v7 = *(_DWORD *)(v6 + 4);
  if ( a3 < v7 )
  {
    if ( !a4 )
    {
      memset_0(a2, 0, 0x90uLL);
      *((_DWORD *)a2 + 2) = v7;
LABEL_4:
      *((_DWORD *)a2 + 1) = *(_DWORD *)(v6 + 8);
      *((_QWORD *)a2 + 6) = *(_QWORD *)(v6 + 16);
      *((_DWORD *)a2 + 14) = *(unsigned __int16 *)(v6 + 24);
      *(_DWORD *)a2 = *(unsigned __int8 *)(v6 + 26);
      *((_QWORD *)a2 + 15) = *(_QWORD *)(v6 + 32);
      *((_QWORD *)a2 + 16) = *(_QWORD *)(v6 + 40);
      *((_QWORD *)a2 + 17) = *(_QWORD *)(v6 + 48);
      *((_QWORD *)a2 + 2) = *(_QWORD *)(v6 + 56);
      return 1;
    }
    v6 = 0LL;
    v9 = v5 + 80LL * *((unsigned __int16 *)this + 16);
    if ( v5 != v9 )
    {
      do
      {
        if ( *(_DWORD *)(v5 + 8) == a4 )
        {
          v10 = *(_DWORD *)(v5 + 4);
          if ( v10 > a3 && (!v6 || v10 < *(_DWORD *)(v6 + 4)) )
            v6 = v5;
        }
        v5 += 80LL;
      }
      while ( v5 != v9 );
      if ( v6 )
      {
        memset_0(a2, 0, 0x90uLL);
        *((_DWORD *)a2 + 2) = *(_DWORD *)(v6 + 4);
        goto LABEL_4;
      }
    }
  }
  return 0;
}
