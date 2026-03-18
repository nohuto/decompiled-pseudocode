/*
 * XREFs of _GreGetCharSet@4 @ 0x496EA
 * Callers:
 *     _NtGdiGetCharSet@4 @ 0x496D6 (_NtGdiGetCharSet@4.c)
 *     _GreGetTextCharsetInfo@12 @ 0x83EE0 (_GreGetTextCharsetInfo@12.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ @ 0x49A66 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z @ 0x49B40 (-ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z.c)
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QAEHXZ @ 0xEC81A (-bGetDeviceFonts@PDEVOBJ@@QAEHXZ.c)
 */

int __thiscall GreGetCharSet(HDC this)
{
  int v1; // ecx
  struct LFONT *v2; // esi
  int v3; // esi
  _DWORD v5[3]; // [esp+8h] [ebp-28h] BYREF
  struct _POINTL v6; // [esp+14h] [ebp-1Ch] BYREF
  int v7; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v8; // [esp+20h] [ebp-10h] BYREF
  unsigned int v9; // [esp+24h] [ebp-Ch] BYREF
  struct LFONT *v10; // [esp+28h] [ebp-8h] BYREF
  int v11; // [esp+2Ch] [ebp-4h] BYREF

  v8 = 0;
  v6.x = 0;
  v6.y = 0;
  v9 = 0;
  memset(v5, 0, sizeof(v5));
  XDCOBJ::vLock((XDCOBJ *)v5, this);
  v1 = v5[0];
  if ( v5[0] )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(v5[0] + 1020) + 184) & 0x10) == 0 )
    {
LABEL_8:
      v3 = *(_DWORD *)(*(_DWORD *)(v1 + 1020) + 4);
      goto LABEL_9;
    }
    v11 = *(_DWORD *)(v5[0] + 36);
    if ( (*(_BYTE *)(v11 + 24) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v11);
      v1 = v5[0];
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v10, *(struct HLFONT__ **)(*(_DWORD *)(v1 + 1020) + 300), (struct PDEVOBJ *)&v11);
    v2 = v10;
    if ( v10 )
    {
      if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        v7 = _ghsemPublicPFT;
        GreAcquireSemaphore(_ghsemPublicPFT);
        LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v10, (struct XDCOBJ *)v5, &v8, &v6, &v9, 0);
        SEMOBJ::vUnlock((SEMOBJ *)&v7);
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v2);
        v1 = v5[0];
        goto LABEL_8;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  v1 = v5[0];
  v3 = 0x10000;
LABEL_9:
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  return v3;
}
