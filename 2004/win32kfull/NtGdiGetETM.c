/*
 * XREFs of NtGdiGetETM @ 0x1C0132240
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078350 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00CEB50 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C00DCC64 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C01324DC (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C0132E04 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02C2640 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, ULONG64 a2)
{
  unsigned int v3; // edi
  SIZE sizLogResPpi; // rbx
  __int64 v5; // r8
  struct _SURFOBJ *v6; // rdx
  __int64 v7; // r9
  _BYTE *v8; // rdx
  struct _FONTOBJ *v10; // [rsp+50h] [rbp-358h] BYREF
  int v11; // [rsp+58h] [rbp-350h]
  _QWORD v12[2]; // [rsp+60h] [rbp-348h] BYREF
  _QWORD v13[2]; // [rsp+70h] [rbp-338h] BYREF
  __int64 v14; // [rsp+80h] [rbp-328h] BYREF
  __int128 v15; // [rsp+90h] [rbp-318h] BYREF
  __int128 v16; // [rsp+A0h] [rbp-308h]
  __int128 v17; // [rsp+B0h] [rbp-2F8h]
  int v18; // [rsp+C0h] [rbp-2E8h]
  _BYTE v19[704]; // [rsp+D0h] [rbp-2D8h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( a2 && v12[0] )
  {
    v10 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v10, (struct XDCOBJ *)v12, 0, 2u) )
      GreAcquireSemaphore(v10[7].pvProducer);
    if ( v10 )
    {
      sizLogResPpi = v10[1].sizLogResPpi;
      v13[1] = sizLogResPpi;
      if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3064LL) )
      {
        v11 = 256;
        v5 = 0LL;
        if ( (*(_DWORD *)(*(_QWORD *)&sizLogResPpi + 40LL) & 0x8000) != 0 )
          v5 = *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 1800LL);
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetETMFontManagement)(
                             &v10,
                             sizLogResPpi,
                             v5) )
        {
          v6 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)&sizLogResPpi + 2552LL));
          if ( !v6 )
          {
            memset(v19, 0, 0x2B8uLL);
            v6 = SURFACE::pSurfobj((SURFACE *)v19);
            v6->dhpdev = (DHPDEV)v10[1].pvConsumer;
            v6->hdev = *(HDEV *)&v10[1].ulStyleSize;
            v6->iType = 1;
          }
          v14 = *(_QWORD *)&v10[2].iUniq;
          v3 = PFFOBJ::FontManagement((PFFOBJ *)&v14, v6, v10, 0x100u, 0, 0LL, 0x34u, &v15);
        }
      }
      if ( !v3 )
      {
        v13[0] = v10[1].pvProducer;
        if ( v13[0] )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)v13) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)&v15,
              (struct RFONTOBJ *)&v10,
              (struct DCOBJ *)v12,
              *(struct _IFIMETRICS **)(v7 + 32));
            v3 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
  }
  if ( v3 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[51] = v8[51];
    *(_OWORD *)a2 = v15;
    *(_OWORD *)(a2 + 16) = v16;
    *(_OWORD *)(a2 + 32) = v17;
    *(_DWORD *)(a2 + 48) = v18;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v3;
}
