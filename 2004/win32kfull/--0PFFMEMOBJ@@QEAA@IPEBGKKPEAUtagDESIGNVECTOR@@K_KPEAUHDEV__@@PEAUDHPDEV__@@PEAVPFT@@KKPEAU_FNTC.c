/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C010A588
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00D8FE8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02737FC (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C02739E0 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0273D84 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ComputeFileviewCheckSum @ 0x1C0009FD0 (ComputeFileviewCheckSum.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C028956C (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02BB258 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C02BB300 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 */

PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(
        PFFMEMOBJ *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *Src,
        size_t Size,
        unsigned __int64 a8,
        HDEV a9,
        struct DHPDEV__ *a10,
        struct PFT *a11,
        unsigned int a12,
        unsigned int a13,
        struct _FNTCHECKSUM *a14,
        struct _FONTFILEVIEW **a15,
        struct _UNIVERSAL_FONT_ID *a16,
        int a17)
{
  unsigned __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // r14
  unsigned int v22; // r13d
  unsigned int v23; // r12d
  unsigned int v24; // ebx
  int v25; // edx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  char *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // edx
  int v33; // ecx
  __int64 v34; // rax
  unsigned int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // rbx

  v18 = 8LL * a2;
  v19 = -1;
  v20 = a4;
  *(_QWORD *)this = 0LL;
  *((_WORD *)this + 8) = 0;
  v22 = 0;
  *((_DWORD *)this + 5) = a13;
  v23 = 0;
  *((_DWORD *)this + 2) = 0;
  if ( v18 > 0xFFFFFFFF || (v24 = v18 + 216, (unsigned int)v18 >= 0xFFFFFF28) )
  {
    v25 = 0;
    v24 = -1;
  }
  else
  {
    v25 = 1;
  }
  if ( a3 && v25 )
  {
    v23 = v24;
    v26 = -1;
    v27 = v24 + ((2 * a4 + 3) & 0xFFFFFFFC);
    v25 = 0;
    if ( v27 >= v24 )
      v26 = v24 + ((2 * a4 + 3) & 0xFFFFFFFC);
    v24 = v26;
    LOBYTE(v25) = v27 >= v23;
  }
  v28 = v24;
  if ( (_DWORD)Size )
  {
    if ( !v25 )
      return this;
    v36 = v24 + Size;
    v25 = 0;
    v22 = v24;
    if ( v24 + (unsigned int)Size >= v24 )
      v19 = v24 + Size;
    v24 = v19;
    LOBYTE(v25) = v36 >= v28;
  }
  if ( v25 )
  {
    v29 = (char *)PALLOCMEM2(v24, 1717989447LL, 1);
    *(_QWORD *)this = v29;
    if ( v29 )
    {
      PushThreadGuardedObject(v29 + 160, v29, CleanUpPFF);
      **(_QWORD **)this = v24;
      *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 8LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = a8;
      *(_QWORD *)(*(_QWORD *)this + 88LL) = a9;
      *(_QWORD *)(*(_QWORD *)this + 96LL) = a10;
      *(_QWORD *)(*(_QWORD *)this + 128LL) = a11;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = a5;
      *(_DWORD *)(*(_QWORD *)this + 32LL) = v20;
      v30 = *(_QWORD *)this;
      if ( (_DWORD)v20 )
      {
        *(_QWORD *)(v30 + 24) = v30 + v23;
        memmove(*(void **)(*(_QWORD *)this + 24LL), a3, 2 * v20);
      }
      else
      {
        *(_QWORD *)(v30 + 24) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)this + 48LL) = Size;
      v31 = *(_QWORD *)this;
      if ( (_DWORD)Size )
      {
        *(_QWORD *)(v31 + 40) = v31 + v22;
        memmove(*(void **)(*(_QWORD *)this + 40LL), Src, (unsigned int)Size);
      }
      else
      {
        *(_QWORD *)(v31 + 40) = 0LL;
      }
      if ( gbNetworkFontsLoaded && gbAttemptedEnableEUDC && gbFntCacheClosed )
        v32 = a12;
      else
        v32 = a12 | 0x200;
      v33 = v32 | 0x1000;
      *(_QWORD *)(*(_QWORD *)this + 200LL) = a15;
      if ( !a17 )
        v33 = v32;
      *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 52LL) = v33;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
      v34 = *(_QWORD *)this;
      if ( (a13 & 0x1C) != 0 )
      {
        *(_DWORD *)(v34 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
        PFFOBJ::bAddPvtData(this, a13);
      }
      else if ( (a13 & 0x20) != 0 )
      {
        *(_DWORD *)(v34 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
      }
      else
      {
        *(_DWORD *)(v34 + 56) = 1;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      }
      *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 136LL) = 0;
      if ( a16 )
      {
        *(_DWORD *)(*(_QWORD *)this + 136LL) = *(_DWORD *)a16;
      }
      else if ( a15 )
      {
        *(_DWORD *)(*(_QWORD *)this + 136LL) = *((_DWORD *)a14 + 1);
        if ( !*(_DWORD *)(*(_QWORD *)this + 136LL) )
        {
          v37 = *(_QWORD *)this;
          *(_DWORD *)(v37 + 136) += ComputeFileviewCheckSumInFontDriverAddressSpace(a15, a5);
          if ( (a13 & 0x10) == 0 )
            PutFNTCacheCheckSum(*(_DWORD *)a14, *(_DWORD *)(*(_QWORD *)this + 136LL));
        }
        if ( *(_DWORD *)(*(_QWORD *)this + 48LL) )
        {
          v38 = *(_QWORD *)this;
          *(_DWORD *)(v38 + 136) += ComputeFileviewCheckSum(Src, Size);
        }
      }
    }
  }
  return this;
}
