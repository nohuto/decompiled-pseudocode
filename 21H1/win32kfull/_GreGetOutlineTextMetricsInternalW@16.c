/*
 * XREFs of _GreGetOutlineTextMetricsInternalW@16 @ 0x85F6E
 * Callers:
 *     _NtGdiGetOutlineTextMetricsInternalW@16 @ 0x85E6C (_NtGdiGetOutlineTextMetricsInternalW@16.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ @ 0x49A66 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z @ 0x49B40 (-ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z.c)
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?cjOTMAWSize@@YGIPAU_IFIMETRICS@@PAI@Z @ 0x87B80 (-cjOTMAWSize@@YGIPAU_IFIMETRICS@@PAI@Z.c)
 *     _cjIFIMetricsToOTMW@24 @ 0x89FBE (_cjIFIMetricsToOTMW@24.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QAEHXZ @ 0xEC81A (-bGetDeviceFonts@PDEVOBJ@@QAEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

size_t __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, size_t MaxCount, void *a3, unsigned int *a4)
{
  size_t v5; // edi
  int v6; // ecx
  int v7; // esi
  unsigned int v8; // eax
  struct HLFONT__ *v9; // eax
  signed int v10; // ebx
  struct LFONT *v12; // esi
  struct _IFIMETRICS *v13; // [esp+0h] [ebp-128h]
  unsigned int *v14; // [esp+4h] [ebp-124h]
  _DWORD *v15; // [esp+10h] [ebp-118h] BYREF
  struct HLFONT__ *v16; // [esp+14h] [ebp-114h] BYREF
  struct HLFONT__ *v17; // [esp+18h] [ebp-110h]
  unsigned int *v18; // [esp+1Ch] [ebp-10Ch]
  void *v19; // [esp+20h] [ebp-108h]
  _DWORD v20[3]; // [esp+24h] [ebp-104h] BYREF
  struct LFONT *v21; // [esp+30h] [ebp-F8h] BYREF
  unsigned int v22; // [esp+34h] [ebp-F4h] BYREF
  unsigned int v23; // [esp+38h] [ebp-F0h] BYREF
  int v24; // [esp+3Ch] [ebp-ECh] BYREF
  struct _POINTL v25; // [esp+40h] [ebp-E8h] BYREF
  _BYTE Src[220]; // [esp+48h] [ebp-E0h] BYREF

  v19 = a3;
  v5 = 0;
  v18 = a4;
  if ( !MaxCount && a3 )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  memset(v20, 0, sizeof(v20));
  XDCOBJ::vLock((XDCOBJ *)v20, a1);
  v6 = v20[0];
  if ( !v20[0] )
  {
    EngSetLastError(6u);
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(v20[0] + 1020) + 184) & 0x10) != 0 )
  {
    v23 = 0;
    v25.x = 0;
    v25.y = 0;
    v22 = 0;
    v16 = *(struct HLFONT__ **)(v20[0] + 36);
    if ( (*((_BYTE *)v16 + 24) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v16);
      v6 = v20[0];
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v21, *(struct HLFONT__ **)(*(_DWORD *)(v6 + 1020) + 300), &v16);
    v12 = v21;
    if ( !v21 )
      goto LABEL_16;
    if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    {
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v12);
      goto LABEL_16;
    }
    v24 = _ghsemPublicPFT;
    GreAcquireSemaphore(_ghsemPublicPFT);
    LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v21, (struct XDCOBJ *)v20, (struct tagENUMLOGFONTEXDVW *)&v23, &v25, &v22, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v24);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v12);
  }
  v15 = 0;
  if ( RFONTOBJ::bInit((RFONTOBJ *)&v15, (struct XDCOBJ *)v20, 0, 2u) )
    GreAcquireSemaphore(v15[137]);
  if ( !v15 || (v7 = v15[20]) == 0 )
  {
    EngSetLastError(6u);
    goto LABEL_15;
  }
  if ( !*(_DWORD *)(v15[17] + 2096) )
  {
LABEL_32:
    v9 = 0;
    goto LABEL_14;
  }
  v16 = 0;
  v8 = cjOTMAWSize(v13, v14);
  *v18 = v8;
  if ( v19 )
  {
    if ( MaxCount <= 0xD8 )
    {
      memset(Src, 0, 0xD8u);
      if ( cjIFIMetricsToOTMW(v18, Src, &v15, v20, *(_DWORD *)(v7 + 20), 0) )
      {
        memcpy(v19, Src, MaxCount);
        v5 = MaxCount;
      }
      goto LABEL_15;
    }
    if ( MaxCount >= (unsigned int)v16 )
    {
      v9 = (struct HLFONT__ *)cjIFIMetricsToOTMW(v18, v19, &v15, v20, *(_DWORD *)(v7 + 20), 1);
      v10 = MaxCount - (_DWORD)v9;
      v17 = v9;
      if ( v10 > 0 )
      {
        memset((char *)v19 + (_DWORD)v9, 0, v10);
        v9 = v17;
      }
      goto LABEL_14;
    }
    goto LABEL_32;
  }
  v9 = v16;
LABEL_14:
  v5 = (size_t)v9;
LABEL_15:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
LABEL_16:
  if ( v20[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v20);
  return v5;
}
