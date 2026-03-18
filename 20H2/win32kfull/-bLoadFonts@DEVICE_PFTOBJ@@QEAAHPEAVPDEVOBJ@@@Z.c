/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02721F4
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0021028 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C001DAD0 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C001DED4 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C001E86C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0072D20 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C011D5FC (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011EEF0 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C012B85C (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02BA3B0 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2, __int64 a3)
{
  BOOL v6; // r15d
  HDEV v7; // rdi
  struct DHPDEV__ *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct PFF **v12; // rdx
  size_t Size; // [rsp+30h] [rbp-59h]
  _QWORD v14[10]; // [rsp+90h] [rbp+7h] BYREF
  struct PFF **v15; // [rsp+100h] [rbp+77h] BYREF
  __int64 v16; // [rsp+108h] [rbp+7Fh] BYREF

  v15 = 0LL;
  if ( ScrutinizeFontLoad(3LL, 0LL, a3) < 0 )
    return 1LL;
  v16 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v6 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v15) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  if ( !v6 )
  {
    v7 = *(HDEV *)a2;
    v16 = 0LL;
    v8 = (struct DHPDEV__ *)*((_QWORD *)v7 + 225);
    v9 = PDEVOBJ::cFonts(a2);
    LODWORD(Size) = 0;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v14,
      v9,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      v7,
      v8,
      *(struct PFT **)this,
      0,
      0,
      (struct _FNTCHECKSUM *)&v16,
      0LL,
      0LL,
      0);
    if ( v14[0] && (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v14, a2) )
    {
      v16 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v15) )
      {
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v14, 0) )
        {
          v10 = v14[0];
          v11 = *(_QWORD *)this;
          if ( (*(_DWORD *)(v14[0] + 52LL) & 0x200) == 0 )
            ++*(_DWORD *)(v11 + 32);
          ++*(_DWORD *)(v11 + 28);
          v12 = v15;
          if ( *v15 )
            *((_QWORD *)*v15 + 2) = v10;
          *(_QWORD *)(v10 + 8) = *v12;
          *(_QWORD *)(v10 + 16) = 0LL;
          *v12 = (struct PFF *)v10;
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v14);
          v6 = 1;
        }
        else
        {
          PFFOBJ::vRemoveHash((PFFOBJ *)v14);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v16);
    }
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v14);
  }
  return v6;
}
