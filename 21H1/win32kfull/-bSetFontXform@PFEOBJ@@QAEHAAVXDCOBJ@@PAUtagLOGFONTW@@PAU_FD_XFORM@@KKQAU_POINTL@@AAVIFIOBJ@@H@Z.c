/*
 * XREFs of ?bSetFontXform@PFEOBJ@@QAEHAAVXDCOBJ@@PAUtagLOGFONTW@@PAU_FD_XFORM@@KKQAU_POINTL@@AAVIFIOBJ@@H@Z @ 0xCC820
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??0RESETFCOBJ@@QAE@AAVDCOBJ@@AAVRFONTOBJ@@PAU_MAT2@@HK@Z @ 0x842BE (--0RESETFCOBJ@@QAE@AAVDCOBJ@@AAVRFONTOBJ@@PAU_MAT2@@HK@Z.c)
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 * Callees:
 *     ?bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z @ 0x67D4A (-bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z @ 0x247772 (-bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z.c)
 */

int __thiscall PFEOBJ::bSetFontXform(
        PFEOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGFONTW *a3,
        struct _FD_XFORM *a4,
        struct IFIOBJ *a5,
        unsigned int a6,
        struct _POINTL *const a7,
        struct _FD_XFORM *a8,
        struct DCOBJ *a9)
{
  int v9; // edi
  int NtoD_Win31; // eax
  FLOATL eYX; // ecx
  FLOATL eYY; // edx
  struct _POINTL *v14; // [esp+0h] [ebp-18h]
  struct _POINTL *v15; // [esp+4h] [ebp-14h]
  _BYTE v16[12]; // [esp+Ch] [ebp-Ch] BYREF

  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v16, a2, 516);
  v9 = 1;
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 228) == 1 )
    NtoD_Win31 = bGetNtoD_Win31(
                   &a3->lfHeight,
                   a4,
                   a8,
                   (struct tagLOGFONTW *)a2,
                   a5,
                   (struct DCOBJ *)a7,
                   a9,
                   v14,
                   (int)v15);
  else
    NtoD_Win31 = bGetNtoD(a8, (struct tagLOGFONTW *)a2, (struct IFIOBJ *)a7, (struct DCOBJ *)v14, v15);
  if ( !NtoD_Win31 )
    return 0;
  eYX = a4->eYX;
  if ( eYX )
  {
    eYX ^= 0x80000000;
    a4->eYX = eYX;
  }
  eYY = a4->eYY;
  if ( eYY )
  {
    eYY ^= 0x80000000;
    a4->eYY = eYY;
  }
  if ( (*(_DWORD *)(a8->eXX + 48) & 0x1000000) != 0 )
  {
    a4->eXX = eYY;
    a4->eXY = eYX;
    if ( eYX )
      a4->eXY = eYX ^ 0x80000000;
  }
  return v9;
}
