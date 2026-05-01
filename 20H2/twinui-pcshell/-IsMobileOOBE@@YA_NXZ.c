/*
 * XREFs of ?IsMobileOOBE@@YA_NXZ @ 0x18034BD2C
 * Callers:
 *     ?IsAnyOOBE@@YA_NXZ @ 0x18034B95C (-IsAnyOOBE@@YA_NXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x18005F510 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

char IsMobileOOBE(void)
{
  char v0; // bl
  char v1; // si
  LSTATUS ValueW; // eax
  signed int v3; // ecx
  bool v4; // zf
  unsigned int v5; // eax
  char v6; // di
  char v7; // al
  unsigned int v9; // [rsp+40h] [rbp-18h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-10h] BYREF
  unsigned int pvData; // [rsp+90h] [rbp+38h] BYREF
  DWORD pdwType; // [rsp+98h] [rbp+40h] BYREF
  DWORD pcbData; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v14; // [rsp+A8h] [rbp+50h] BYREF

  v0 = 0;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Shell\\Oobe", 0, 1u, &hKey) )
    return v0;
  RegCloseKey(hKey);
  hKey = 0LL;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Shell\\Oobe", L"Done", &v14) < 0 || (v1 = 1, !v14) )
    v1 = 0;
  pdwType = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Shell\\Oobe",
             L"OobeHeadless",
             0x10000012u,
             &pdwType,
             &pvData,
             &pcbData);
  LOWORD(v3) = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      ValueW = 13;
    v3 = ValueW;
    if ( ValueW <= 0 )
      goto LABEL_16;
  }
  else if ( pdwType == 4 )
  {
    v4 = pvData == 1;
    if ( pvData <= 1 )
    {
LABEL_8:
      v3 = 0;
      v5 = v4;
      goto LABEL_17;
    }
  }
  else if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
  {
    v4 = (_WORD)pvData == 49;
    goto LABEL_8;
  }
  v3 = (unsigned __int16)v3 | 0x80070000;
LABEL_16:
  v5 = pvData;
LABEL_17:
  if ( v3 < 0 || (v6 = 1, !v5) )
    v6 = 0;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Shell\\Oobe", L"EnterpriseProvisioningEnabled", &v9) < 0
    || (v7 = 1, !v9) )
  {
    v7 = 0;
  }
  if ( !v1 && !v6 || v7 )
    return 1;
  return v0;
}
