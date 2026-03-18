/*
 * XREFs of ?Startup@@YAJXZ @ 0x180031354
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180030F80 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x180031494 (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ.c)
 *     ?EnsureD2DFactory@CD2DFactory@@QEAAJXZ @ 0x1800317F0 (-EnsureD2DFactory@CD2DFactory@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z @ 0x18020EDC4 (-RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z.c)
 */

__int64 Startup(void)
{
  CD2DFactory *v0; // rcx
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ebx
  bool v5; // al
  unsigned int v6; // ecx
  bool v7; // al
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  _SYSTEM_INFO SystemInfo; // [rsp+40h] [rbp-C0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+70h] [rbp-90h] BYREF

  GetSystemInfo(&SystemInfo);
  VersionInformation.dwOSVersionInfoSize = 284;
  GetVersionExW(&VersionInformation);
  QueryPerformanceFrequency(&g_qpcFrequency);
  hKey = 0LL;
  g_qpcFrequencyPerMillisecond.QuadPart = g_qpcFrequency.QuadPart / 1000;
  CCommonRegistryData::InitializeDWMKeysFromRegistry();
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 1u, &hKey) )
  {
    v10 = 0;
    RegReadDWORD(hKey, L"UseD3DDebugLayer", &v10);
    v10 = 0;
    v5 = RegReadDWORD(hKey, L"Force10Level9", &v10);
    v6 = CCommonRegistryData::m_fForce10Level9;
    if ( v5 )
      v6 = v10;
    v10 = 0;
    CCommonRegistryData::m_fForce10Level9 = v6;
    v7 = RegReadDWORD(hKey, L"Force10OnWDDM1_0", &v10);
    v8 = CCommonRegistryData::m_fForce10OnWDDM1_0;
    if ( v7 )
      v8 = v10;
    CCommonRegistryData::m_fForce10OnWDDM1_0 = v8;
  }
  v0 = (CD2DFactory *)hKey;
  if ( hKey )
    RegCloseKey(hKey);
  v1 = CD2DFactory::EnsureD2DFactory(v0);
  v3 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0x66u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0xEEu, 0LL);
  }
  return v3;
}
