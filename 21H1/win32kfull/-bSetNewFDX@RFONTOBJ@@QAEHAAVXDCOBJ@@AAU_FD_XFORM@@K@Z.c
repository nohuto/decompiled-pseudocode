/*
 * XREFs of ?bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z @ 0x209520
 * Callers:
 *     ??0RESETFCOBJ@@QAE@AAVDCOBJ@@AAVRFONTOBJ@@PAU_MAT2@@HK@Z @ 0x842BE (--0RESETFCOBJ@@QAE@AAVDCOBJ@@AAVRFONTOBJ@@PAU_MAT2@@HK@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     ?vReleaseCache@RFONTOBJ@@QAEXXZ @ 0x86BAC (-vReleaseCache@RFONTOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QAEXXZ @ 0xACDB4 (-vDeleteRFONTRef@PFFOBJ@@QAEXXZ.c)
 *     ?bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209285 (-bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z.c)
 */

int __thiscall RFONTOBJ::bSetNewFDX(RFONTOBJ *this, struct XDCOBJ *a2, struct _FD_XFORM *Buf1, struct RFONT *a4)
{
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  struct LFONT *v9; // esi
  int v10; // ecx
  _BYTE v12[12]; // [esp+Ch] [ebp-38h] BYREF
  int v13; // [esp+18h] [ebp-2Ch] BYREF
  int v14; // [esp+20h] [ebp-24h]
  struct _POINTL v15; // [esp+24h] [ebp-20h] BYREF
  int v16; // [esp+2Ch] [ebp-18h]
  int v17; // [esp+30h] [ebp-14h] BYREF
  struct PFE *v18; // [esp+34h] [ebp-10h]
  unsigned int v19; // [esp+38h] [ebp-Ch]
  unsigned int v20; // [esp+3Ch] [ebp-8h]
  struct HLFONT__ *v21; // [esp+40h] [ebp-4h] BYREF

  v21 = *(struct HLFONT__ **)(*(_DWORD *)a2 + 36);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, a2, 516);
  v5 = *(_DWORD *)this;
  v19 = *(_DWORD *)(*(_DWORD *)this + 12) & 0x3001E000;
  v20 = *(_DWORD *)(v5 + 32);
  v15 = *(struct _POINTL *)(v5 + 648);
  v18 = *(struct PFE **)(v5 + 80);
  if ( v5 )
    RFONTOBJ::vReleaseCache(this);
  v17 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v6 = *(_DWORD *)this;
  v7 = 0;
  v14 = 0;
  v16 = *(_DWORD *)(v6 + 84);
  v13 = v16;
  ++*(_DWORD *)(v16 + 48);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  *(_DWORD *)this = 0;
  if ( RFONTOBJ::bFindRFONT(
         this,
         Buf1,
         v19,
         v20,
         (struct PDEVOBJ *)&v21,
         (struct EXFORMOBJ *)v12,
         v18,
         0,
         *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 228),
         0,
         a4) )
  {
    GreAcquireSemaphore(*(_DWORD *)(*(_DWORD *)this + 548));
    v8 = 1;
  }
  else
  {
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v17, *(struct HLFONT__ **)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 300), &v21);
    v9 = (struct LFONT *)v17;
    if ( v17
      && RFONTOBJ::bRealizeFont(
           this,
           a2,
           (struct PDEVOBJ *)&v21,
           (struct tagENUMLOGFONTEXDVW *)(v17 + 280),
           v18,
           Buf1,
           &v15,
           v19,
           v20,
           0,
           0,
           (unsigned int)a4) )
    {
      v10 = *(_DWORD *)this;
      v7 = 1;
      v14 = 1;
      GreAcquireSemaphore(*(_DWORD *)(v10 + 548));
    }
    else
    {
      *(_DWORD *)this = 0;
    }
    v8 = v7;
    if ( v9 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v9);
  }
  if ( v16 && !v7 )
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v13);
  return v8;
}
