/*
 * XREFs of ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B
 * Callers:
 *     ?bInitSystemTT@RFONTOBJ@@QAEHAAVXDCOBJ@@@Z @ 0x2078D5 (-bInitSystemTT@RFONTOBJ@@QAEHAAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x2087AC (-vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QAEXXZ @ 0xACDB4 (-vDeleteRFONTRef@PFFOBJ@@QAEXXZ.c)
 *     ?bSimItalic@IFIOBJ@@QAEHXZ @ 0xC52CA (-bSimItalic@IFIOBJ@@QAEHXZ.c)
 *     ?bSetFontXform@PFEOBJ@@QAEHAAVXDCOBJ@@PAUtagLOGFONTW@@PAU_FD_XFORM@@KKQAU_POINTL@@AAVIFIOBJ@@H@Z @ 0xCC820 (-bSetFontXform@PFEOBJ@@QAEHAAVXDCOBJ@@PAUtagLOGFONTW@@PAU_FD_XFORM@@KKQAU_POINTL@@AAVIFIOBJ@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 *     _eftof_c@4 @ 0xEEF63 (_eftof_c@4.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?flEudcFontBoldSimFlags@LFONTOBJ@@QBEKG@Z @ 0x207B2F (-flEudcFontBoldSimFlags@LFONTOBJ@@QBEKG@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209285 (-bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z.c)
 */

void __thiscall RFONTOBJ::vInit(RFONTOBJ *this, struct XDCOBJ *a2, struct PFE *a3, struct _EUDCLOGFONT *a4, int a5)
{
  int v5; // edx
  int v7; // eax
  int v8; // esi
  unsigned int v9; // edx
  int v10; // ebx
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // ecx
  size_t v17; // eax
  int v18; // edx
  unsigned int v19; // ecx
  _DWORD *v20; // edi
  int v21; // edx
  unsigned int v22; // ecx
  struct PFE *v23; // edi
  int v24; // ecx
  unsigned int v25; // edi
  int v26; // ecx
  RFONTOBJ *v27; // edi
  struct PFE *v28; // [esp-14h] [ebp-234h]
  unsigned int v29; // [esp-14h] [ebp-234h]
  struct HLFONT__ *v30; // [esp-8h] [ebp-228h]
  _DWORD v31[3]; // [esp+10h] [ebp-210h] BYREF
  _DWORD v32[2]; // [esp+1Ch] [ebp-204h] BYREF
  int v33; // [esp+24h] [ebp-1FCh]
  struct _POINTL v34; // [esp+28h] [ebp-1F8h] BYREF
  int v35; // [esp+30h] [ebp-1F0h]
  struct PFE *v36; // [esp+34h] [ebp-1ECh]
  int v37; // [esp+38h] [ebp-1E8h]
  int v38[2]; // [esp+3Ch] [ebp-1E4h] BYREF
  int v39; // [esp+44h] [ebp-1DCh] BYREF
  RFONTOBJ *v40; // [esp+48h] [ebp-1D8h]
  struct HLFONT__ *v41; // [esp+4Ch] [ebp-1D4h] BYREF
  int v42; // [esp+50h] [ebp-1D0h]
  struct XDCOBJ *v43; // [esp+54h] [ebp-1CCh]
  unsigned int v44; // [esp+58h] [ebp-1C8h]
  unsigned int v45; // [esp+5Ch] [ebp-1C4h]
  struct tagENUMLOGFONTEXDVW v46; // [esp+60h] [ebp-1C0h] BYREF
  _FD_XFORM Buf1; // [esp+20Ch] [ebp-14h] BYREF

  v43 = a2;
  v5 = *(_DWORD *)a2;
  v7 = *(_DWORD *)(*(_DWORD *)a2 + 172) & 1;
  v36 = a3;
  v35 = v7;
  v41 = *(struct HLFONT__ **)(v5 + 36);
  v30 = *(struct HLFONT__ **)(v5 + 1552);
  v40 = this;
  v44 = (unsigned int)a4;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v39, v30, &v41);
  v8 = v39;
  if ( !v39 )
  {
    *(_DWORD *)this = 0;
    return;
  }
  v9 = v44;
  v10 = 0;
  v11 = 0;
  v45 = 0;
  v12 = *(_DWORD *)(v44 + 4);
  v13 = *((_DWORD *)v36 + 5);
  v42 = v13;
  v32[0] = v13;
  v37 = v12;
  if ( (v12 & 0x4000) != 0 || (*(_BYTE *)v44 & 1) != 0 )
  {
    v14 = (*(_BYTE *)(v13 + 52) & 1) == 0;
    v45 = 0;
    if ( v14 )
    {
      if ( *(_BYTE *)(v39 + 300) )
      {
        v15 = IFIOBJ::bSimItalic((IFIOBJ *)v32);
        v9 = v44;
        LOWORD(v12) = v37;
        if ( v15 )
        {
          v11 = 0x4000;
          v45 = 0x4000;
        }
      }
    }
  }
  if ( ((*((_BYTE *)v41 + 24) & 1) != 0 || *(_DWORD *)(v9 + 24)) && ((v12 & 0x2000) != 0 || (*(_BYTE *)v9 & 0x20) != 0) )
  {
    v11 |= LFONTOBJ::flEudcFontBoldSimFlags((LFONTOBJ *)&v39, *(_WORD *)(v42 + 46));
    v45 = v11;
  }
  v16 = *(_DWORD *)(v42 + 48);
  if ( (v16 & 1) != 0 && *(int *)(v8 + 280) <= 0 )
  {
    v11 |= 0x8000u;
    v45 = v11;
  }
  if ( (v37 & 0x10000) != 0 && (v16 & 0x40) != 0 )
    v45 = v37 & 0x10010000 | v11;
  memset(&v46, 0, sizeof(v46));
  v17 = *(_DWORD *)(v8 + 276);
  if ( v17 >= 0x1A4 )
    v17 = 420;
  memcpy(&v46, (const void *)(v8 + 280), v17);
  v34.x = 0;
  v34.y = 0;
  v46.elfEnumLogfontEx.elfLogFont.lfHeight = *(_DWORD *)(v44 + 12);
  v46.elfEnumLogfontEx.elfLogFont.lfWidth = *(_DWORD *)(v44 + 8);
  v46.elfEnumLogfontEx.elfLogFont.lfOrientation = *(_DWORD *)(v44 + 20);
  v46.elfEnumLogfontEx.elfLogFont.lfEscapement = *(_DWORD *)(v44 + 16);
  memset(&Buf1, 0, sizeof(Buf1));
  if ( (*(_DWORD *)(v42 + 48) & 0x3000010) != 0 )
  {
    v34.x = 1;
    v34.y = 1;
    if ( PFEOBJ::bSetFontXform(
           v43,
           v43,
           &v46.elfEnumLogfontEx.elfLogFont,
           &Buf1,
           0,
           v44,
           &v34,
           (struct _FD_XFORM *)v32,
           (struct DCOBJ *)1) )
    {
      v38[0] = 0;
      v38[1] = 0;
      ftoef_c(v19, v18, Buf1.eXX, v38);
      v20 = (_DWORD *)(v44 + 28);
      mulff3_c(v38, v38, (_DWORD *)(v44 + 28));
      Buf1.eXX = eftof_c(v38);
      ftoef_c(v22, v21, Buf1.eXY, v38);
      mulff3_c(v38, v38, v20);
      Buf1.eXY = eftof_c(v38);
      v39 = _ghsemPublicPFT;
      GreAcquireSemaphore(_ghsemPublicPFT);
      v23 = v36;
      v33 = 0;
      v42 = *(_DWORD *)v36;
      v32[0] = v42;
      ++*(_DWORD *)(v42 + 48);
      SEMOBJ::vUnlock((SEMOBJ *)&v39);
      v31[2] = 0;
      v24 = *(_DWORD *)v43;
      v31[0] = *(_DWORD *)v43 + 240;
      v28 = v23;
      v25 = v45;
      if ( RFONTOBJ::bFindRFONT(
             v40,
             &Buf1,
             v45,
             0,
             (struct PDEVOBJ *)&v41,
             (struct EXFORMOBJ *)v31,
             v28,
             v35,
             *(_DWORD *)(*(_DWORD *)(v24 + 1020) + 228),
             0,
             (struct RFONT *)2) )
      {
        v26 = *(_DWORD *)v40;
      }
      else
      {
        v29 = v25;
        v27 = v40;
        if ( !RFONTOBJ::bRealizeFont(v40, v43, (struct PDEVOBJ *)&v41, &v46, v36, &Buf1, &v34, v29, 0, v35, 0, 2u) )
        {
          *(_DWORD *)v27 = 0;
LABEL_29:
          if ( v42 && !v10 )
            PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v32);
          goto LABEL_33;
        }
        v26 = *(_DWORD *)v27;
        v10 = 1;
        v33 = 1;
      }
      GreAcquireSemaphore(*(_DWORD *)(v26 + 548));
      *(_DWORD *)(*(_DWORD *)v43 + 176) &= ~1u;
      goto LABEL_29;
    }
  }
  *(_DWORD *)v40 = 0;
LABEL_33:
  if ( v8 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v8);
}
