/*
 * XREFs of ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328
 * Callers:
 *     _GreGetCharSet@4 @ 0x496EA (_GreGetCharSet@4.c)
 *     _GreGetTextFaceW@16 @ 0x49888 (_GreGetTextFaceW@16.c)
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     ??0RESETFCOBJ@@QAE@AAVDCOBJ@@AAVRFONTOBJ@@PAU_MAT2@@HK@Z @ 0x842BE (--0RESETFCOBJ@@QAE@AAVDCOBJ@@AAVRFONTOBJ@@PAU_MAT2@@HK@Z.c)
 *     _NtGdiQueryFontAssocInfo@4 @ 0x84476 (_NtGdiQueryFontAssocInfo@4.c)
 *     _GreGetOutlineTextMetricsInternalW@16 @ 0x85F6E (_GreGetOutlineTextMetricsInternalW@16.c)
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 *     ?lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z @ 0xC330A (-lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z.c)
 *     _GreMarkDeletableFont@4 @ 0xDAFD8 (_GreMarkDeletableFont@4.c)
 *     _FinishStockFontInit@4 @ 0xDBAB4 (_FinishStockFontInit@4.c)
 *     ?dwGetFontLanguageInfo@@YGKAAVXDCOBJ@@@Z @ 0x1EB996 (-dwGetFontLanguageInfo@@YGKAAVXDCOBJ@@@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z @ 0x206DB5 (-ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x2087AC (-vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z @ 0x209520 (-bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     <none>
 */

LFONTOBJ *__thiscall LFONTOBJ::LFONTOBJ(LFONTOBJ *this, struct HLFONT__ *a2, struct HLFONT__ **a3)
{
  struct HLFONT__ *v3; // ebx
  LFONTOBJ *v4; // edi
  int v5; // eax
  struct HLFONT__ *HDEV; // esi
  int v8; // edi
  struct HLFONT__ **v9; // eax
  struct HLFONT__ *v10; // eax
  int v11; // edi
  int v12; // edi
  struct LFONT *v13; // [esp-8h] [ebp-14h]

  v3 = a2;
  v4 = this;
  v5 = HmgShareLock(a2, 10);
  *(_DWORD *)v4 = v5;
  if ( v5 && (*(_BYTE *)(v5 + 20) & 1) != 0 )
  {
    HDEV = (struct HLFONT__ *)UserGetHDEV();
    v13 = *(struct LFONT **)v4;
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 16);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v13);
    a2 = HDEV;
    *(_DWORD *)this = 0;
    v9 = a3;
    if ( !a3 )
      v9 = &a2;
    v10 = *v9;
    if ( v10 )
    {
      v11 = v8 - 4;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            v3 = (struct HLFONT__ *)*((_DWORD *)v10 + 226);
        }
        else
        {
          v3 = (struct HLFONT__ *)*((_DWORD *)v10 + 225);
        }
      }
      else
      {
        v3 = (struct HLFONT__ *)*((_DWORD *)v10 + 224);
      }
      v4 = this;
      *(_DWORD *)this = HmgShareLock(v3, 10);
    }
    else
    {
      return this;
    }
  }
  return v4;
}
