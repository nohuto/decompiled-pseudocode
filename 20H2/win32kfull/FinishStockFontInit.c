/*
 * XREFs of FinishStockFontInit @ 0x1C00234B0
 * Callers:
 *     FinishStockFontReinit @ 0x1C00233E0 (FinishStockFontReinit.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012AFF0 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C001C994 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C001CCB4 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00201BC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0026E20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008D09C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreCreateFontIndirectW @ 0x1C008F8E0 (GreCreateFontIndirectW.c)
 */

void __fastcall FinishStockFontInit(unsigned int c)
{
  __int64 v2; // rbx
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __m128i v5; // xmm2
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // edx
  struct PFF *v9; // r15
  __int64 i; // rsi
  __int64 v11; // rdi
  struct _FONTHASH **v12; // [rsp+40h] [rbp-39h] BYREF
  INT a[4]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v14; // [rsp+60h] [rbp-19h]
  __int128 v15; // [rsp+70h] [rbp-9h]
  __int128 v16; // [rsp+80h] [rbp+7h]
  __int128 v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+A0h] [rbp+27h]
  int v19; // [rsp+A8h] [rbp+2Fh]
  unsigned int v20; // [rsp+E8h] [rbp+6Fh] BYREF
  struct PFF *v21; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
  {
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v22, (struct HLFONT__ *)gahStockObjects[17], 0LL);
    v2 = v22;
    if ( v22 )
    {
      *(_DWORD *)(v22 + 276) = -((c * *(_DWORD *)(v22 + 276) + 36) / 0x48);
      v3 = *(_OWORD *)(v2 + 292);
      v4 = *(_OWORD *)(v2 + 308);
      v19 = *(_DWORD *)(v2 + 364);
      v5 = *(__m128i *)(v2 + 276);
      v14 = v3;
      v6 = *(_OWORD *)(v2 + 324);
      v15 = v4;
      v7 = *(_OWORD *)(v2 + 340);
      v16 = v6;
      v18 = *(_QWORD *)(v2 + 356);
      *(_QWORD *)&a[2] = v5.m128i_i64[1];
      v17 = v7;
      a[0] = EngMulDiv(_mm_cvtsi128_si32(v5), 96, c);
      a[1] = EngMulDiv(v5.m128i_i32[1], 96, c);
      gahStockObjects96[17] = (void *)GreCreateFontIndirectW(a, 8LL);
    }
    if ( c > 0x6C )
    {
      FinishStockFontInitInternal(
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
        0);
      v8 = 1;
    }
    else
    {
      if ( (dword_1C0339BF0 & 2) != 0 )
        FinishStockFontInitInternal(
          L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
          0);
      v8 = 0;
    }
    FinishStockFontInitInternal(
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\SmallFont",
      v8);
    v21 = 0LL;
    v20 = 0;
    v12 = gpPFTPublic;
    if ( !gppfeMapperDefault )
    {
      if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                           (PUBLIC_PFTOBJ *)&v12,
                           L"\\SystemRoot\\System32\\winsrv.dll",
                           &v20,
                           2u,
                           &v21,
                           0LL,
                           0) )
      {
        if ( v20 )
        {
          v9 = v21;
          if ( v21 )
          {
            for ( i = 0LL; (unsigned int)i < v20; i = (unsigned int)(i + 1) )
            {
              if ( gppfeMapperDefault )
                break;
              v11 = *((_QWORD *)v9 + i + 27);
              if ( v11
                && !_wcsicmp(
                      (const wchar_t *)(*(_QWORD *)(v11 + 32) + *(int *)(*(_QWORD *)(v11 + 32) + 16LL)),
                      L"SYSTEM") )
              {
                gppfeMapperDefault = (struct PFE *)v11;
              }
            }
          }
        }
      }
    }
    if ( !gahStockObjects[16] )
      bSetStockFont(gahStockObjects[13], 16, 0);
    DcAttrDefault[37] = gahStockObjects[13];
    if ( v2 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v2);
  }
}
