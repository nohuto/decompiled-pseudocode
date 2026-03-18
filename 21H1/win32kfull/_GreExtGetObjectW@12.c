/*
 * XREFs of _GreExtGetObjectW@12 @ 0x4B144
 * Callers:
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _NtGdiExtGetObjectW@12 @ 0x4B04E (_NtGdiExtGetObjectW@12.c)
 *     ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8 (-_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z.c)
 *     ?ProcessAlphaBitmap@@YGPAUHBITMAP__@@PAU1@@Z @ 0x77B00 (-ProcessAlphaBitmap@@YGPAUHBITMAP__@@PAU1@@Z.c)
 *     _GetWindowNCMetrics@4 @ 0x91522 (_GetWindowNCMetrics@4.c)
 *     _GetScaledLogFontForDpi@12 @ 0x91944 (_GetScaledLogFontForDpi@12.c)
 *     _xxxCreateCaret@16 @ 0xAA702 (_xxxCreateCaret@16.c)
 *     _EraseBitmap@4 @ 0xB0A62 (_EraseBitmap@4.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _CreateCompatiblePublicDC@8 @ 0xBCDD4 (_CreateCompatiblePublicDC@8.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     _UserSetAltScaleFont@8 @ 0xDAC76 (_UserSetAltScaleFont@8.c)
 *     _CreateFontFromUserProfile@12 @ 0xDAD68 (_CreateFontFromUserProfile@12.c)
 *     ?SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z @ 0x1452C0 (-SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z.c)
 *     _CreateScaledFont@28 @ 0x155260 (_CreateScaledFont@28.c)
 *     ?xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z @ 0x182097 (-xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z.c)
 *     ?GetCursorHeight@@YGHXZ @ 0x1A07A4 (-GetCursorHeight@@YGHXZ.c)
 *     ?DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z @ 0x1A8C6A (-DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 * Callees:
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     _GreGetDIBitsInternal@36 @ 0x4B3C0 (_GreGetDIBitsInternal@36.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?cjGetBrushOrPen@@YGJPAXH0@Z @ 0x1FD0B9 (-cjGetBrushOrPen@@YGJPAXH0@Z.c)
 *     ?cjGetLogicalColorSpace@@YGHPAXH0@Z @ 0x21BD9C (-cjGetLogicalColorSpace@@YGHPAXH0@Z.c)
 */

int __fastcall GreExtGetObjectW(struct HLFONT__ *a1, int a2, _DWORD *a3)
{
  int v3; // ebx
  size_t v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  struct LFONT *v8; // esi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  unsigned int v12; // edx
  bool v13; // cf
  int DIBitsInternal; // eax
  char *v15; // ecx
  int v16; // eax
  int v17; // edx
  _DWORD *v18; // edx
  int v20; // edx
  int v21; // eax
  int v22; // [esp+0h] [ebp-1Ch]
  void *v23; // [esp+4h] [ebp-18h]
  int v24; // [esp+10h] [ebp-Ch]
  struct HLFONT__ *v25; // [esp+14h] [ebp-8h] BYREF
  char *v26; // [esp+18h] [ebp-4h] BYREF

  v25 = a1;
  v3 = 0;
  v26 = (char *)a2;
  v4 = 0;
  switch ( ((unsigned int)a1 >> 16) & 0x1F )
  {
    case 5u:
      if ( !a3 )
        return 24;
      if ( a2 >= 24 )
      {
        LOBYTE(a2) = 5;
        v5 = (_DWORD *)HmgShareLockCheck(a1, a2);
        v6 = v5;
        if ( v5 )
        {
          if ( (v5[18] & 0x4100000) == 0 )
            goto LABEL_6;
          *a3 = 0;
          a3[1] = v5[8];
          a3[2] = v5[9];
          if ( (v5[19] & 0x800) != 0 )
          {
            a3[1] = v5[119];
            a3[2] = v5[120];
          }
          v4 = 24;
          v9 = LOWORD(gaulConvert[v5[15]]);
          *((_WORD *)a3 + 9) = v9;
          v10 = v9;
          v11 = v9 * v6[8];
          a3[5] = 0;
          v24 = v10;
          a3[3] = ((v11 + 15) >> 3) & 0xFFFFFFFE;
          *((_WORD *)a3 + 8) = 1;
          if ( (*((_WORD *)v6 + 32) || !v6[31]) && (v6[18] & 0x100000) == 0 )
            goto LABEL_6;
          v12 = v6[11];
          if ( v12 < 0x10000 || v12 > (unsigned int)_MmHighestUserAddress )
            v12 = 0;
          a3[5] = v12;
          v13 = (unsigned int)v26 < 0x54;
          a3[3] = ((v24 * v6[8] + 31) >> 3) & 0xFFFFFFFC;
          if ( v13 )
            goto LABEL_6;
          v26 = (char *)(a3 + 6);
          a3[6] = 40;
          *((_WORD *)a3 + 19) = 0;
          DIBitsInternal = GreGetDIBitsInternal(0, 0, 0, 0, a3 + 6, 0, 0, 0x54u);
          v15 = v26;
          if ( DIBitsInternal )
          {
            v4 = 84;
            if ( (v6[18] & 0x100000) != 0 )
              *((_DWORD *)v26 + 5) = 0;
          }
          v16 = v6[22];
          if ( v16 )
          {
            v17 = *(_DWORD *)(v16 + 16);
            if ( (v17 & 2) != 0 )
            {
              v18 = a3;
              a3[16] = **(_DWORD **)(v16 + 76);
              a3[17] = *(_DWORD *)(*(_DWORD *)(v16 + 76) + 4);
              v3 = *(_DWORD *)(*(_DWORD *)(v16 + 76) + 8);
              goto LABEL_34;
            }
            if ( (v17 & 8) != 0 )
              *((_DWORD *)v15 + 4) = 0;
          }
          v18 = a3;
          a3[16] = 0;
          a3[17] = 0;
LABEL_34:
          v18[18] = v3;
          v18[19] = v6[30];
          v18[20] = v6[34];
LABEL_6:
          DEC_SHARE_REF_CNT(v6);
        }
      }
      break;
    case 8u:
      v4 = 2;
      if ( a3 )
      {
        if ( a2 >= 2 )
        {
          v26 = (char *)_ghsemPalette;
          GreAcquireSemaphore(_ghsemPalette);
          LOBYTE(v20) = 8;
          v21 = HmgShareLockCheck(v25, v20);
          if ( v21 )
          {
            *(_WORD *)a3 = *(_WORD *)(v21 + 20);
            DEC_SHARE_REF_CNT(v21);
          }
          else
          {
            v4 = 0;
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v26);
        }
        else
        {
          return 0;
        }
      }
      break;
    case 9u:
      return cjGetLogicalColorSpace(a3, v22, v23);
    case 0xAu:
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v25, a1, 0);
      v8 = v25;
      if ( v25 )
      {
        v4 = *((_DWORD *)v25 + 69);
        if ( a3 )
        {
          if ( (unsigned int)v26 < v4 )
            v4 = (size_t)v26;
          memcpy(a3, (char *)v25 + 280, v4);
        }
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v8);
      }
      return v4;
    case 0x10u:
      return cjGetBrushOrPen(a3, v22, v23);
    default:
      return v4;
  }
  return v4;
}
