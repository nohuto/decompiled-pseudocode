/*
 * XREFs of DpiLdaLinkDeviceToChain @ 0x1C02D69D0
 * Callers:
 *     DpiAddDevice @ 0x1C017DE10 (DpiAddDevice.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E4A0 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C00E103C (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiLdaLinkDeviceToChain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(v2 + 40);
  v5 = *(_QWORD *)(v4 + 56);
  if ( *(_QWORD *)v5 != v5 )
  {
    do
    {
      if ( *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 4
        || *(_DWORD *)(v5 + 500) != *(_DWORD *)(v2 + 500) )
      {
        goto LABEL_20;
      }
      if ( !*(_QWORD *)(v2 + 168) )
      {
        v6 = *(_QWORD *)(v5 + 168);
        *(_QWORD *)(v2 + 168) = v6;
        ++*(_DWORD *)(v6 + 104);
        v7 = *(_QWORD *)(v5 + 1456);
        *(_QWORD *)(v2 + 1456) = v7;
        ++*(_DWORD *)(v7 + 8);
        a1 = *(_QWORD *)(v5 + 1464);
        *(_QWORD *)(v2 + 1464) = a1;
        ++*(_DWORD *)(a1 + 8);
      }
      if ( *(_BYTE *)(v2 + 508) == 1 )
      {
        v8 = v2;
        v9 = v5;
      }
      else
      {
        if ( *(_BYTE *)(v5 + 508) != 1 )
          goto LABEL_20;
        v8 = v5;
        v9 = v2;
      }
      if ( *(_BYTE *)(v9 + 508) == 1 || *(_DWORD *)(v8 + 2736) >= *(_DWORD *)(v8 + 504) )
      {
        v3 = -1071774666;
        v10 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v10 + 24) = -1071774666LL;
        WdLogEvent5_WdError(v10);
        return v3;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v5 + 484) )
        DpiCheckForOutstandingD3Requests(v5);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
      *(_QWORD *)(v9 + 2728) = *(_QWORD *)(v8 + 24);
      *(_DWORD *)(v9 + 2736) = *(_DWORD *)(v8 + 2736);
      *(_QWORD *)(*(_QWORD *)(v8 + 2728) + 8LL * (unsigned int)(*(_DWORD *)(v8 + 2736))++) = *(_QWORD *)(v9 + 24);
      if ( *(_BYTE *)(v9 + 1152) )
        *(_BYTE *)(*(_QWORD *)(v2 + 168) + 108LL) = 1;
      if ( *(_BYTE *)(v5 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
      KeLeaveCriticalRegion();
LABEL_20:
      v5 = *(_QWORD *)v5;
    }
    while ( *(_QWORD *)v5 != *(_QWORD *)(v4 + 56) );
  }
  return v3;
}
