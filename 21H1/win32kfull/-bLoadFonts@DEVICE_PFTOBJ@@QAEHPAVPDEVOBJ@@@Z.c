/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x1D08B0
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QAEHXZ @ 0xEC81A (-bGetDeviceFonts@PDEVOBJ@@QAEHXZ.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z @ 0x88C66 (-pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QAEXXZ @ 0xCE2F8 (-vRemoveHash@PFFOBJ@@QAEXXZ.c)
 *     ??1PFFMEMOBJ@@QAE@XZ @ 0xDE54C (--1PFFMEMOBJ@@QAE@XZ.c)
 *     ?bAddHash@PFFOBJ@@QAEHH@Z @ 0xDE594 (-bAddHash@PFFOBJ@@QAEHH@Z.c)
 *     ??0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@@PAPAU_FONTFILEVIEW@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDEC04 (--0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@.c)
 *     ?ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z @ 0xE89BA (-ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x221B4A (-bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 */

BOOL __thiscall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, HDEV *a2)
{
  BOOL v4; // esi
  HDEV v5; // ecx
  struct DHPDEV__ *v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // eax
  struct PFF **v10; // edx
  struct PFF *v11; // eax
  HDEV v12; // [esp-24h] [ebp-4Ch]
  struct DHPDEV__ *v13; // [esp-20h] [ebp-48h]
  struct PFT *v14; // [esp-1Ch] [ebp-44h]
  struct PFF **v15; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v16[2]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v17[2]; // [esp+18h] [ebp-10h] BYREF
  __int16 v18; // [esp+20h] [ebp-8h]

  v15 = 0;
  if ( ScrutinizeFontLoad(3, 0) < 0 )
    return 1;
  v16[0] = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v4 = DEVICE_PFTOBJ::pPFFGet(this, *a2, &v15) != 0;
  SEMOBJ::vUnlock((SEMOBJ *)v16);
  if ( !v4 )
  {
    v5 = *a2;
    v6 = (struct DHPDEV__ *)*((_DWORD *)*a2 + 277);
    v16[0] = 0;
    v16[1] = 0;
    v14 = *(struct PFT **)this;
    v13 = v6;
    v12 = v5;
    v7 = PDEVOBJ::cFonts((PDEVOBJ *)a2);
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v17,
      v7,
      0,
      0,
      0,
      0,
      0,
      0,
      v12,
      v13,
      v14,
      0,
      0,
      (struct _FNTCHECKSUM *)v16,
      0,
      0,
      0);
    if ( v17[0] && PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v17, (struct PDEVOBJ *)a2) )
    {
      v16[0] = _ghsemPublicPFT;
      GreAcquireSemaphore(_ghsemPublicPFT);
      if ( !DEVICE_PFTOBJ::pPFFGet(this, *a2, &v15) )
      {
        if ( PFFOBJ::bAddHash((PFFOBJ *)v17, 0) )
        {
          v8 = v17[0];
          v9 = *(_DWORD *)this;
          if ( (*(_DWORD *)(v17[0] + 32) & 0x200) == 0 )
            ++*(_DWORD *)(v9 + 20);
          v10 = v15;
          ++*(_DWORD *)(v9 + 16);
          if ( *v10 )
            *((_DWORD *)*v10 + 2) = v8;
          v11 = *v10;
          *(_DWORD *)(v8 + 8) = 0;
          v18 |= 2u;
          *(_DWORD *)(v8 + 4) = v11;
          *v10 = (struct PFF *)v8;
          PopThreadGuardedObject(v8 + 100);
          v4 = 1;
        }
        else
        {
          PFFOBJ::vRemoveHash((PFFOBJ *)v17);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)v16);
    }
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v17);
  }
  return v4;
}
