/*
 * XREFs of ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x180132A88
 * Callers:
 *     s_sndevtResolveSoundAlias @ 0x1800BCBC0 (s_sndevtResolveSoundAlias.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18000E630 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800DD690 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x180132CFC (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall _GetSoundAlias(
        const unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        HKEY hkey,
        unsigned __int16 *a7)
{
  __int64 result; // rax
  unsigned int Registry; // edi
  const unsigned __int16 *v12; // r15
  const unsigned __int16 *v13; // rcx
  unsigned int pdwType; // [rsp+20h] [rbp-E0h]
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR String1[264]; // [rsp+50h] [rbp-B0h] BYREF

  result = 0LL;
  if ( a1 && a2 && hkey )
  {
    if ( a7 && *a7 )
      *a4 |= 0x80u;
    Registry = 0;
    v12 = (const unsigned __int16 *)&szSystemDefaultSound;
    pcbData = 256;
    if ( lstrcmpW(a1, gszDefaultBeepOldAlias) )
      v12 = a1;
    if ( !RegGetValueW(hkey, gszSchemesRootKey, 0LL, 2u, 0LL, String1, &pcbData)
      && !lstrcmpiW(String1, gszNoSoundsSchemeName) )
    {
      *a4 |= 2u;
    }
    if ( !StringCchLengthW(v12, 0x28uLL, (unsigned __int64 *)&phkResult)
      && (*(char *)a4 >= 0 || !a7 || !*a7 || (Registry = sndQueryRegistry(v13, a7, v12, a2, pdwType, a4, hkey)) == 0)
      && ((*a4 & 0x400000) == 0 || (Registry = sndQueryRegistry(v13, aszExplorer, v12, a2, pdwType, a4, hkey)) == 0) )
    {
      Registry = sndQueryRegistry(v13, aszDefault, v12, a2, pdwType, a4, hkey);
      if ( !Registry )
      {
        phkResult = 0LL;
        pcbData = 260;
        StringCchPrintfW(String1, 260LL, c_szPathFormat, &PSZ_SOUNDS_REGKEY, v12);
        if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, String1, 0, 0x20019u, &phkResult) )
        {
          Registry = RegGetValueW(phkResult, 0LL, PSZ_SOUNDS_SOUND, Registry + 2, 0LL, a2, &pcbData) == 0;
          RegCloseKey(phkResult);
        }
      }
    }
    return Registry;
  }
  return result;
}
