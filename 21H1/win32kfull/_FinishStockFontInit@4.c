/*
 * XREFs of _FinishStockFontInit@4 @ 0xDBAB4
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SG_NXZ @ 0xD6894 (-AddInitialFonts@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     _FinishStockFontReinit@4 @ 0xD9D62 (_FinishStockFontReinit@4.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0x46590 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     _GreCreateFontIndirectW@8 @ 0x89CD6 (_GreCreateFontIndirectW@8.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDBA9E (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     ?FinishStockFontInitInternal@@YGXPBGH@Z @ 0xDBCEC (-FinishStockFontInitInternal@@YGXPBGH@Z.c)
 *     ?bSetStockFont@@YGHPAXHH@Z @ 0xDBF22 (-bSetStockFont@@YGHPAXHH@Z.c)
 *     _vInitEmergencyStockFont@4 @ 0x29229C (_vInitEmergencyStockFont@4.c)
 */

void __userpurge FinishStockFontInit(const unsigned __int16 *a1@<edi>, int a2@<esi>, unsigned int c)
{
  struct LFONT *v3; // esi
  const void *v4; // esi
  void *FontIndirectW; // eax
  const unsigned __int16 *v6; // [esp-8h] [ebp-68h]
  int v7; // [esp-8h] [ebp-68h]
  int v8; // [esp-4h] [ebp-64h]
  int v9; // [esp-4h] [ebp-64h]
  INT a[23]; // [esp+0h] [ebp-60h] BYREF
  int v11; // [esp+5Ch] [ebp-4h] BYREF

  if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread() )
  {
    v8 = a2;
    v6 = a1;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v11, (struct HLFONT__ *)gahStockObjects[17], 0);
    v3 = (struct LFONT *)v11;
    if ( v11 )
    {
      v4 = (const void *)(v11 + 280);
      *(_DWORD *)(v11 + 280) = -((c * *(_DWORD *)(v11 + 280) + 36) / 0x48);
      qmemcpy(a, v4, sizeof(a));
      a[0] = EngMulDiv(a[0], 96, c);
      a[1] = EngMulDiv(a[1], 96, c);
      FontIndirectW = (void *)GreCreateFontIndirectW((int)a, 8);
      v3 = (struct LFONT *)v11;
      gahStockObjects96[17] = FontIndirectW;
    }
    if ( c > 0x6C || (dword_274064 & 2) != 0 )
      FinishStockFontInitInternal(a1, v8);
    FinishStockFontInitInternal(v6, v8);
    vInitEmergencyStockFont();
    if ( !gahStockObjects[16] )
      bSetStockFont(0, v7, v9);
    DcAttrDefault[75] = gahStockObjects[13];
    if ( v3 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
  }
}
