/*
 * XREFs of _lambda_ec703c986ad76684d6e21ab1fd48d19c_::operator() @ 0x180008B50
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ec703c986ad76684d6e21ab1fd48d19c___::Run @ 0x180008B40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ec703c986ad76684d6e21ab1fd48d19c___--Run.c)
 * Callees:
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x180008C6C (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009468 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x180135950 (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x1801372DC (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 */

void __fastcall lambda_ec703c986ad76684d6e21ab1fd48d19c_::operator()(__int64 a1)
{
  AtmosCheck *v2; // rcx
  bool *v3; // rdx
  AtmosCheck *v4; // rax
  const WCHAR *v5; // r8
  char v6; // cl
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  int v8; // eax
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(AtmosCheck **)a1;
  v3 = *(bool **)(a1 + 24);
  if ( *((_BYTE *)v2 + 209) )
  {
    **(_DWORD **)(a1 + 16) = AtmosCheck::PerformLicenseCheckForAllEndpoints(v2, v3);
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 99LL) && AtmosCheck::CheckInstalledAppServicesAvailable(*(AtmosCheck **)a1) )
      *(_BYTE *)(*(_QWORD *)a1 + 99LL) = 1;
  }
  else
  {
    **(_DWORD **)(a1 + 16) = AtmosCheck::PerformLicenseCheckInternalLegacy(v2, v3);
    if ( **(int **)(a1 + 16) >= 0 )
    {
      v4 = *(AtmosCheck **)a1;
      v5 = L"AudioSrvLicenseResult";
      pcbData = 4;
      v6 = *((_BYTE *)v4 + 100);
      pvData = 0;
      if ( !v6 )
        v5 = L"AudioDGLicenseResult";
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
        v5,
        0x10u,
        0LL,
        &pvData,
        &pcbData);
      if ( pvData < 0 )
      {
        **(_DWORD **)(a1 + 8) = pvData;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) = pvData;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = pvData;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) = pvData;
      }
      v7 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a1 + 56LL);
      EnterCriticalSection(v7);
      v8 = *(_DWORD *)(*(_QWORD *)a1 + 184LL);
      if ( (v8 == 5 || v8 == 8) && !*(_BYTE *)(*(_QWORD *)a1 + 99LL) )
      {
        *(_BYTE *)(*(_QWORD *)a1 + 99LL) = 1;
        **(_BYTE **)(a1 + 24) = 1;
      }
      if ( v7 )
        LeaveCriticalSection(v7);
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)a1 + 100LL) )
    AtmosCheck::UpdateLicenseRefreshTimer(*(PVOID *)a1);
}
