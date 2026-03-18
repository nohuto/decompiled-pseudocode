/*
 * XREFs of ?GetLogFontFromUserProfile@@YG?AUtagLOGFONTW@@PAU_UNICODE_STRING@@I@Z @ 0xDAE42
 * Callers:
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     _CreateFontFromUserProfile@12 @ 0xDAD68 (_CreateFontFromUserProfile@12.c)
 * Callees:
 *     _ValidateExternalLogFont@4 @ 0xDAF6C (_ValidateExternalLogFont@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

struct tagLOGFONTW *__userpurge GetLogFontFromUserProfile@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagLOGFONTW *__return_ptr retstr,
        struct _UNICODE_STRING *a4,
        unsigned int a5)
{
  WCHAR *lfFaceName; // edi
  LONG lfHeight; // ecx

  memset(retstr, 0, sizeof(struct tagLOGFONTW));
  retstr->lfCharSet = gSystemCPCharSet;
  FastGetProfileValue(a2, 23, a1, 0, retstr, 92, 0);
  lfFaceName = retstr->lfFaceName;
  if ( !retstr->lfFaceName[0] )
  {
    qmemcpy(retstr->lfFaceName, L"MS Shell Dlg", 0x1Au);
    lfFaceName = retstr->lfFaceName;
  }
  lfHeight = retstr->lfHeight;
  if ( !retstr->lfHeight )
  {
    retstr->lfHeight = 8;
    lfHeight = 8;
  }
  if ( lfHeight > 0 )
    retstr->lfHeight = (lfHeight * *(unsigned __int16 *)(_gpsi + 6242) + 36) / -72;
  if ( !retstr->lfWeight )
    retstr->lfWeight = a1 != 139 ? 400 : 700;
  *(_WORD *)&retstr->lfOutPrecision = 0;
  retstr->lfQuality = 0;
  if ( !ValidateExternalLogFont(retstr) )
  {
    memset(retstr, 0, sizeof(struct tagLOGFONTW));
    retstr->lfCharSet = gSystemCPCharSet;
    qmemcpy(lfFaceName, L"MS Shell Dlg", 0x1Au);
    retstr->lfHeight = 8;
    retstr->lfHeight = (8 * *(unsigned __int16 *)(_gpsi + 6242) + 36) / -72;
    retstr->lfWeight = a1 == 139 ? 700 : 400;
    *(_WORD *)&retstr->lfOutPrecision = 0;
    retstr->lfQuality = 0;
  }
  return retstr;
}
