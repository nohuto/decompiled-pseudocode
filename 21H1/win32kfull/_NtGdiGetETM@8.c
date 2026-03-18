/*
 * XREFs of _NtGdiGetETM@8 @ 0x22132A
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?flFontType@PFEOBJ@@QAEKXZ @ 0x8487E (-flFontType@PFEOBJ@@QAEKXZ.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vIFIMetricsToETM@@YGXPAU_EXTTEXTMETRIC@@AAVRFONTOBJ@@AAVDCOBJ@@PAU_IFIMETRICS@@@Z @ 0x206A4E (-vIFIMetricsToETM@@YGXPAU_EXTTEXTMETRIC@@AAVRFONTOBJ@@AAVDCOBJ@@PAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YGHAAVRFONTOBJ@@VPDEVOBJ@@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK4@Z @ 0x210654 (-GetETMFontManagement@@YGHAAVRFONTOBJ@@VPDEVOBJ@@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK4@Z.c)
 *     ?FontManagement@PFFOBJ@@QAEHPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z @ 0x229271 (-FontManagement@PFFOBJ@@QAEHPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z.c)
 */

int __stdcall NtGdiGetETM(HDC a1, int a2)
{
  int v2; // ebx
  ULONG v3; // edx
  int v4; // ecx
  _DWORD *cx; // esi
  struct _SURFOBJ *v6; // edx
  struct _SURFOBJ *v7; // edx
  struct _IFIMETRICS **pvConsumer; // esi
  int v10; // [esp-18h] [ebp-D4h]
  int v11; // [esp-14h] [ebp-D0h]
  int v12; // [esp-10h] [ebp-CCh]
  struct DCOBJ *v13; // [esp+0h] [ebp-BCh]
  struct _IFIMETRICS *v14; // [esp+4h] [ebp-B8h]
  struct _SURFOBJ v15; // [esp+10h] [ebp-ACh] BYREF
  _DWORD v16[3]; // [esp+44h] [ebp-78h] BYREF
  _DWORD v17[3]; // [esp+50h] [ebp-6Ch] BYREF
  struct _IFIMETRICS **v18; // [esp+5Ch] [ebp-60h] BYREF
  int v19; // [esp+60h] [ebp-5Ch] BYREF
  int v20; // [esp+64h] [ebp-58h]
  struct _FONTOBJ *v21; // [esp+68h] [ebp-54h] BYREF
  _WORD v22[28]; // [esp+6Ch] [ebp-50h] BYREF
  CPPEH_RECORD ms_exc; // [esp+A4h] [ebp-18h]

  v20 = a2;
  memset(v22, 0, 0x34u);
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  v3 = v20;
  if ( v20 && v17[0] )
  {
    v21 = 0;
    if ( RFONTOBJ::bInit((RFONTOBJ *)&v21, (struct XDCOBJ *)v17, 0, 2u) )
      GreAcquireSemaphore(v21[12].iFile);
    if ( v21 )
    {
      cx = (_DWORD *)v21[1].sizLogResPpi.cx;
      v16[2] = cx;
      if ( cx[522] )
      {
        v19 = 256;
        v6 = 0;
        if ( (cx[6] & 0x8000) != 0 )
          v6 = (struct _SURFOBJ *)cx[277];
        if ( GetETMFontManagement((int *)&v21, v6, (int)cx, v10, v11, v12, &v19, v4, v4) )
        {
          memset(&v15, 0, sizeof(v15));
          v7 = cx[455] != 0 ? (struct _SURFOBJ *)(cx[455] + 16) : 0;
          if ( !v7 )
          {
            v15.dhpdev = (DHPDEV)v21[1].ulStyleSize;
            v15.hdev = (HDEV)v21[1].sizLogResPpi.cy;
            v15.iType = 1;
            v7 = &v15;
          }
          v16[0] = v21[1].pvProducer;
          v2 = PFFOBJ::FontManagement((PFFOBJ *)v16, v7, v21, 0x100u, 0, 0, 0x34u, v22);
        }
      }
      if ( !v2 )
      {
        pvConsumer = (struct _IFIMETRICS **)v21[1].pvConsumer;
        v18 = pvConsumer;
        if ( pvConsumer )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)&v18) & 4) != 0 )
          {
            vIFIMetricsToETM((RFONTOBJ *)&v21, v22, (struct _EXTTEXTMETRIC *)v17, pvConsumer[5], v13, v14);
            v2 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
    v3 = v20;
  }
  if ( v2 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (v3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v3 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_BYTE *)v3 = *(_BYTE *)v3;
    *(_BYTE *)(v3 + 48) = *(_BYTE *)(v3 + 48);
    qmemcpy((void *)v3, v22, 0x34u);
    ms_exc.registration.TryLevel = -2;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return v2;
}
