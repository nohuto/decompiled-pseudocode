/*
 * XREFs of ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x180065E70
 * Callers:
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x1800545C0 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x18013249C (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18000E630 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringLengthWorkerW_1 @ 0x180065F50 (StringLengthWorkerW_1.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 */

char __fastcall IsAPOClsidRegistered(HKEY hKey, STRSAFE_PCNZWCH psz)
{
  size_t v2; // rax
  STRSAFE_PCNZWCH v3; // r11
  HRESULT v5; // r8d
  size_t pcchLength[2]; // [rsp+30h] [rbp-C8h] BYREF
  WCHAR SubKey[80]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = 0LL;
  v3 = psz;
  pcchLength[0] = 0LL;
  if ( psz )
  {
    v5 = StringLengthWorkerW_1(psz, 0x27uLL, pcchLength);
    v2 = pcchLength[0];
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v5 < 0
    || v2 != 38
    || (int)StringCchPrintfW(SubKey, 75LL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects", v3) < 0
    || RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, (PHKEY)pcchLength) )
  {
    return 0;
  }
  RegCloseKey((HKEY)pcchLength[0]);
  return 1;
}
