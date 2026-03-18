/*
 * XREFs of RtlCultureNameToLCID @ 0x1407950A0
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1403B3ED8 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140793540 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x140794D60 (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14097C470 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14097C79C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x14097CBA8 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x14097CDDC (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14097CF20 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x14097D2D0 (_RtlMuiRegAddLIPParent.c)
 * Callees:
 *     DownLevelLanguageNameToLangID @ 0x1403B4330 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     __report_rangecheckfailure @ 0x1404B0ECC (__report_rangecheckfailure.c)
 */

bool __fastcall RtlCultureNameToLCID(unsigned __int16 *a1, _DWORD *a2)
{
  char v2; // di
  size_t v4; // r8
  const void *v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int16 v8; // ax
  _WORD v10[88]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      v4 = *a1;
      if ( (_WORD)v4 )
      {
        v5 = (const void *)*((_QWORD *)a1 + 1);
        if ( v5 )
        {
          if ( (unsigned int)(v4 + 2) <= 0x55 )
          {
            v6 = *a1;
            memmove(v10, v5, v4);
            v7 = v6 >> 1;
            if ( v7 >= 85 )
              _report_rangecheckfailure();
            v10[v7] = 0;
            v8 = DownLevelLanguageNameToLangID(v10, 2);
            *a2 = v8;
            return v8 != 0;
          }
        }
      }
    }
  }
  return v2;
}
