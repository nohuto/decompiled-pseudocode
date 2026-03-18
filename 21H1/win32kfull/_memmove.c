/*
 * XREFs of _memmove @ 0xF92A1
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z @ 0x327EE (-ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 *     ?ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z @ 0x49B40 (-ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z.c)
 *     ?vSrcCopyS32D32Identity@@YGXPAUBLTINFO@@@Z @ 0x52550 (-vSrcCopyS32D32Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QAEHPAU_RECTL@@0H@Z @ 0x98D9E (-bSubtractComplex@RGNOBJ@@QAEHPAU_RECTL@@0H@Z.c)
 *     _RemoveProcessFromJob@4 @ 0x9D65E (_RemoveProcessFromJob@4.c)
 *     ?vSrcCopyS24D24Identity@@YGXPAUBLTINFO@@@Z @ 0xAAD26 (-vSrcCopyS24D24Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4Identity@@YGXPAUBLTINFO@@@Z @ 0xBFDC2 (-vSrcCopyS4D4Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?RemoveEntry@?$CSortedVector@PAXPAX@NSInstrumentation@@AAEXI@Z @ 0xCDFCA (-RemoveEntry@-$CSortedVector@PAXPAX@NSInstrumentation@@AAEXI@Z.c)
 *     ?bGetRegString@@YG_NPAXPBGPAGK@Z @ 0xDBEA6 (-bGetRegString@@YG_NPAXPBGPAGK@Z.c)
 *     _BuildAndLoadLinkedFontRoutine@24 @ 0xDCCFE (_BuildAndLoadLinkedFontRoutine@24.c)
 *     ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C (-bAppendSysDirectory@@YGHPAGPBGI@Z.c)
 *     ?Insert@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIABQAU_FONTFILEVIEW@@@Z @ 0xDE3D8 (-Insert@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIABQAU_FONTFILEVIEW@@@Z.c)
 *     ?Insert@?$CSortedVector@KK@NSInstrumentation@@QAE_NABK0@Z @ 0xDEA66 (-Insert@-$CSortedVector@KK@NSInstrumentation@@QAE_NABK0@Z.c)
 *     _ConvertToAndFromWideChar@24 @ 0xDFDA8 (_ConvertToAndFromWideChar@24.c)
 *     vProcessEntry @ 0xE2E66 (vProcessEntry.c)
 *     ?vSrcAlignCopyMemory@@YGXPAE0K@Z @ 0xFBF0A (-vSrcAlignCopyMemory@@YGXPAE0K@Z.c)
 *     _NtUserUserHandleGrantAccess@12 @ 0x16B080 (_NtUserUserHandleGrantAccess@12.c)
 *     ?_RemoveListenerCore@Edgy@@YGXAAUtagEDGY_DATA@@PAUtagEDGY_LISTENER@@@Z @ 0x16EEB8 (-_RemoveListenerCore@Edgy@@YGXAAUtagEDGY_DATA@@PAUtagEDGY_LISTENER@@@Z.c)
 *     _NtGdiPlgBlt@44 @ 0x1EE276 (_NtGdiPlgBlt@44.c)
 *     ?vSrcCopyS1D1RtoL@@YGXPAUBLTINFO@@@Z @ 0x22F886 (-vSrcCopyS1D1RtoL@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YGXPAUBLTINFO@@@Z @ 0x2308A5 (-vSrcCopyS8D8IdentityLtoR@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YGXPAUBLTINFO@@@Z @ 0x2308FB (-vSrcCopyS8D8IdentityRtoL@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YGXPAUBLTINFO@@@Z @ 0x230B4E (-vSrcCopyS16D16Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?WriteAbsolute8@@YGHPBEPAEH0@Z @ 0x2320D5 (-WriteAbsolute8@@YGHPBEPAEH0@Z.c)
 *     ?WriteAbsolute4@@YGHPBEPAEH0@Z @ 0x2334B3 (-WriteAbsolute4@@YGHPBEPAEH0@Z.c)
 *     ?Insert@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAX0@Z @ 0x249EE0 (-Insert@-$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAX0@Z.c)
 *     _bInitStockFontsInternal@4 @ 0x2922C4 (_bInitStockFontsInternal@4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  return _memmove(a1, Src, Size);
}
