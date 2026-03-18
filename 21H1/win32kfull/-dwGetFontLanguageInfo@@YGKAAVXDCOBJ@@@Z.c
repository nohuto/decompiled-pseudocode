/*
 * XREFs of ?dwGetFontLanguageInfo@@YGKAAVXDCOBJ@@@Z @ 0x1EB996
 * Callers:
 *     _NtGdiGetDCDword@12 @ 0x8E686 (_NtGdiGetDCDword@12.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ @ 0x49A66 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z @ 0x49B40 (-ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z.c)
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QAEHXZ @ 0xEC81A (-bGetDeviceFonts@PDEVOBJ@@QAEHXZ.c)
 */

int __thiscall dwGetFontLanguageInfo(struct XDCOBJ *this)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax
  struct PFE *v5; // eax
  int v6; // eax
  struct _POINTL v8; // [esp+8h] [ebp-1Ch] BYREF
  int v9; // [esp+10h] [ebp-14h] BYREF
  unsigned int v10; // [esp+14h] [ebp-10h] BYREF
  unsigned int v11; // [esp+18h] [ebp-Ch] BYREF
  struct HLFONT__ *v12; // [esp+1Ch] [ebp-8h] BYREF
  struct LFONT *v13; // [esp+20h] [ebp-4h] BYREF

  v2 = 0x8000;
  v3 = *(_DWORD *)this;
  v4 = *(_DWORD *)(*(_DWORD *)this + 36);
  v12 = (struct HLFONT__ *)v4;
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 24) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v12);
      v3 = *(_DWORD *)this;
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v13, *(struct HLFONT__ **)(*(_DWORD *)(v3 + 1020) + 300), &v12);
    if ( v13 )
    {
      if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        v9 = _ghsemPublicPFT;
        GreAcquireSemaphore(_ghsemPublicPFT);
        v10 = 0;
        v11 = 0;
        v8.x = 0;
        v8.y = 0;
        v5 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v13, this, (struct tagENUMLOGFONTEXDVW *)&v10, &v8, &v11, 0);
        if ( v5 )
        {
          v6 = *((_DWORD *)v5 + 5);
          v2 = *(_DWORD *)(v6 + 164) != 0 ? 8 : 0;
          if ( (*(_DWORD *)(v6 + 48) & 0x80000001) != 0 )
            v2 |= 0x40000u;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v9);
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v13);
    }
  }
  return v2;
}
