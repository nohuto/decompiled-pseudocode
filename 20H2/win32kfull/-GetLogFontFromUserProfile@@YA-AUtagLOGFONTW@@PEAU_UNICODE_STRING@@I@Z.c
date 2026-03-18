/*
 * XREFs of ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0024974
 * Callers:
 *     CreateFontFromUserProfile @ 0x1C0024338 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x1C0024488 (xxxSetNCFonts.c)
 * Callees:
 *     ValidateExternalLogFont @ 0x1C0024B20 (ValidateExternalLogFont.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

struct tagLOGFONTW *__fastcall GetLogFontFromUserProfile(
        struct tagLOGFONTW *__return_ptr retstr,
        struct _UNICODE_STRING *a2,
        unsigned int a3)
{
  LONG lfHeight; // r8d
  bool v7; // cc
  LONG v8; // ebx
  LONG v9; // eax

  memset(retstr, 0, sizeof(struct tagLOGFONTW));
  retstr->lfCharSet = gSystemCPCharSet;
  FastGetProfileValue(a2, 23LL, a3, 0LL, retstr, 92, 0);
  if ( !retstr->lfFaceName[0] )
  {
    *(_OWORD *)retstr->lfFaceName = xmmword_1C02E94E0;
    *(_QWORD *)&retstr->lfFaceName[8] = 0x67006C00440020LL;
    retstr->lfFaceName[12] = 0;
  }
  lfHeight = retstr->lfHeight;
  v7 = retstr->lfHeight <= 0;
  if ( !retstr->lfHeight )
  {
    lfHeight = 8;
    retstr->lfHeight = 8;
    v7 = 0;
  }
  if ( !v7 )
    retstr->lfHeight = (lfHeight * *(unsigned __int16 *)(gpsi + 6998LL) + 36) / -72;
  v8 = 700;
  if ( !retstr->lfWeight )
  {
    v9 = 400;
    if ( a3 == 139 )
      v9 = 700;
    retstr->lfWeight = v9;
  }
  *(_WORD *)&retstr->lfOutPrecision = 0;
  retstr->lfQuality = 0;
  if ( !(unsigned int)ValidateExternalLogFont(retstr) )
  {
    memset(retstr, 0, sizeof(struct tagLOGFONTW));
    retstr->lfCharSet = gSystemCPCharSet;
    *(_OWORD *)retstr->lfFaceName = xmmword_1C02E94E0;
    *(_QWORD *)&retstr->lfFaceName[8] = 0x67006C00440020LL;
    retstr->lfFaceName[12] = 0;
    retstr->lfHeight = 8;
    retstr->lfHeight = (8 * *(unsigned __int16 *)(gpsi + 6998LL) + 36) / -72;
    if ( a3 != 139 )
      v8 = 400;
    retstr->lfWeight = v8;
    *(_WORD *)&retstr->lfOutPrecision = 0;
    retstr->lfQuality = 0;
  }
  return retstr;
}
