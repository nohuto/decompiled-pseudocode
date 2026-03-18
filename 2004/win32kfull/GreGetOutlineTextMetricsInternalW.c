/*
 * XREFs of GreGetOutlineTextMetricsInternalW @ 0x1C00DAC84
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C00DAB40 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C009F6C0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00A1D70 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00A1E3C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C00DA308 (cjIFIMetricsToOTMW.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C00DAF1C (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C012526C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, size_t Size, unsigned int *a3, _BYTE *a4)
{
  size_t v4; // rdi
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rbx
  struct _IFIMETRICS *v10; // rcx
  unsigned int v11; // eax
  int v12; // edi
  struct LFONT *v14; // rbx
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  struct LFONT *v20; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  unsigned int Src[60]; // [rsp+80h] [rbp-80h] BYREF

  v4 = (unsigned int)Size;
  v7 = 0;
  if ( !(_DWORD)Size && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v17[0] = 0LL;
  v17[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v17, a1);
  v8 = v17[0];
  if ( !v17[0] )
  {
    EngSetLastError(6u);
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v17[0] + 976LL) + 152LL) & 0x10) == 0 )
    goto LABEL_5;
  v18 = 0;
  v21 = 0LL;
  v15 = 0;
  v19 = *(_QWORD *)(v17[0] + 48LL);
  if ( (*(_DWORD *)(v19 + 40) & 0x40) == 0 )
  {
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v19);
    v8 = v17[0];
  }
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v20, *(struct HLFONT__ **)(*(_QWORD *)(v8 + 976) + 296LL), (struct PDEVOBJ *)&v19);
  v14 = v20;
  if ( !v20 )
  {
LABEL_32:
    LODWORD(v4) = 0;
    goto LABEL_17;
  }
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v14);
    goto LABEL_32;
  }
  v22 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v20, (struct XDCOBJ *)v17, &v18, &v21, &v15, 0);
  SEMOBJ::vUnlock((SEMOBJ *)&v22);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v14);
LABEL_5:
  v16 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v16, (struct XDCOBJ *)v17, 0, 2u) )
    GreAcquireSemaphore(v16[63]);
  if ( !v16 || (v9 = v16[15]) == 0 )
  {
    EngSetLastError(6u);
    goto LABEL_28;
  }
  if ( *(_QWORD *)(v16[12] + 3080LL) )
  {
    v10 = *(struct _IFIMETRICS **)(v9 + 32);
    v15 = 0;
    *(_DWORD *)a4 = cjOTMAWSize(v10, &v15);
    if ( a3 )
    {
      if ( (unsigned int)v4 > 0xE8 )
      {
        if ( (unsigned int)v4 >= v15 )
        {
          v11 = cjIFIMetricsToOTMW(
                  a4,
                  a3,
                  (struct RFONTOBJ *)&v16,
                  (struct DCOBJ *)v17,
                  *(struct _IFIMETRICS **)(v9 + 32),
                  1);
          v12 = v4 - v11;
          v7 = v11;
          if ( v12 > 0 )
            memset((char *)a3 + v11, 0, v12);
        }
        goto LABEL_15;
      }
      memset(Src, 0, 0xE8uLL);
      if ( (unsigned int)cjIFIMetricsToOTMW(
                           a4,
                           Src,
                           (struct RFONTOBJ *)&v16,
                           (struct DCOBJ *)v17,
                           *(struct _IFIMETRICS **)(v9 + 32),
                           0) )
      {
        memmove(a3, Src, v4);
        goto LABEL_16;
      }
LABEL_28:
      LODWORD(v4) = 0;
      goto LABEL_16;
    }
    v7 = v15;
  }
LABEL_15:
  LODWORD(v4) = v7;
LABEL_16:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
LABEL_17:
  if ( v17[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  return (unsigned int)v4;
}
