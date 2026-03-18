/*
 * XREFs of CreateFontFromUserProfile @ 0x1C0024338
 * Callers:
 *     UserSetFont @ 0x1C00242BC (UserSetFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D642C (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreSetLFONTOwner @ 0x1C0024440 (GreSetLFONTOwner.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0024974 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GreMarkDeletableFont @ 0x1C0025288 (GreMarkDeletableFont.c)
 *     GreCreateFontIndirectW @ 0x1C008F8E0 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

struct HLFONT__ *__fastcall CreateFontFromUserProfile(struct _UNICODE_STRING *a1, _DWORD *a2, unsigned int a3)
{
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  struct HLFONT__ *FontIndirectW; // rbx
  _OWORD v13[6]; // [rsp+20h] [rbp-89h] BYREF
  struct tagLOGFONTW v14; // [rsp+80h] [rbp-29h] BYREF

  memset(v13, 0, 0x5CuLL);
  if ( !a2 )
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v14, a1, a3);
    a2 = v13;
    v7 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v13[0] = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    v8 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v13[1] = v7;
    v9 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v13[2] = v8;
    v10 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v13[3] = v9;
    *(_QWORD *)&v9 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    LODWORD(LogFontFromUserProfile) = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v13[4] = v10;
    *(_QWORD *)&v13[5] = v9;
    DWORD2(v13[5]) = (_DWORD)LogFontFromUserProfile;
  }
  FontIndirectW = (struct HLFONT__ *)GreCreateFontIndirectW(a2, 128LL);
  if ( FontIndirectW )
  {
    memset(&v14, 0, sizeof(v14));
    if ( (unsigned int)GreExtGetObjectW((HBRUSH)FontIndirectW) && v14.lfHeight == *a2 )
    {
      GreSetLFONTOwner(FontIndirectW, 0LL);
    }
    else
    {
      GreMarkDeletableFont(FontIndirectW);
      GreDeleteObject(FontIndirectW);
      return 0LL;
    }
  }
  return FontIndirectW;
}
