/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02737FC
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C012526C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00108C4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0010BE0 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00D8DCC (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C010A588 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C011C63C (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011D6F0 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C012981C (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02BB910 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2)
{
  BOOL v5; // r15d
  HDEV v6; // rdi
  struct DHPDEV__ *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct PFF **v11; // rdx
  size_t Size; // [rsp+30h] [rbp-59h]
  _QWORD v13[10]; // [rsp+90h] [rbp+7h] BYREF
  struct PFF **v14; // [rsp+100h] [rbp+77h] BYREF
  __int64 v15; // [rsp+108h] [rbp+7Fh] BYREF

  v14 = 0LL;
  if ( ScrutinizeFontLoad(3u, 0LL) < 0 )
    return 1LL;
  v15 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v5 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v14) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  if ( !v5 )
  {
    v6 = *(HDEV *)a2;
    v15 = 0LL;
    v7 = (struct DHPDEV__ *)*((_QWORD *)v6 + 225);
    v8 = PDEVOBJ::cFonts(a2);
    LODWORD(Size) = 0;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v13,
      v8,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      v6,
      v7,
      *(struct PFT **)this,
      0,
      0,
      (struct _FNTCHECKSUM *)&v15,
      0LL,
      0LL,
      0);
    if ( v13[0] && (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v13, a2) )
    {
      v15 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v14) )
      {
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v13, 0) )
        {
          v9 = v13[0];
          v10 = *(_QWORD *)this;
          if ( (*(_DWORD *)(v13[0] + 52LL) & 0x200) == 0 )
            ++*(_DWORD *)(v10 + 32);
          ++*(_DWORD *)(v10 + 28);
          v11 = v14;
          if ( *v14 )
            *((_QWORD *)*v14 + 2) = v9;
          *(_QWORD *)(v9 + 8) = *v11;
          *(_QWORD *)(v9 + 16) = 0LL;
          *v11 = (struct PFF *)v9;
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v13);
          v5 = 1;
        }
        else
        {
          PFFOBJ::vRemoveHash((PFFOBJ *)v13);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
    }
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v13);
  }
  return v5;
}
