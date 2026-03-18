/*
 * XREFs of _UmfdFontManagement@28 @ 0x24A78E
 * Callers:
 *     _AtmDrvFontManagementRedirector@28 @ 0x1FCF46 (_AtmDrvFontManagementRedirector@28.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontManagementRequest@@QAE@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z @ 0x24A62E (--0FontManagementRequest@@QAE@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z.c)
 *     ?GetDrvType@FontManagementRequest@@UBE?AW4FontDriverType@@XZ @ 0x24A6D8 (-GetDrvType@FontManagementRequest@@UBE-AW4FontDriverType@@XZ.c)
 */

int __stdcall UmfdFontManagement(
        struct _SURFOBJ *a1,
        struct _FONTOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7)
{
  unsigned int DrvType; // eax
  _DWORD v9[17]; // [esp+0h] [ebp-44h] BYREF

  FontManagementRequest::FontManagementRequest((FontManagementRequest *)v9, a1, a2, a3, a4, a5, a6, a7);
  DrvType = FontManagementRequest::GetDrvType(v9);
  if ( UmfdClientSendAndWaitForCompletion(DrvType, (int)v9) >= 0 )
    return v9[13];
  else
    return -1;
}
