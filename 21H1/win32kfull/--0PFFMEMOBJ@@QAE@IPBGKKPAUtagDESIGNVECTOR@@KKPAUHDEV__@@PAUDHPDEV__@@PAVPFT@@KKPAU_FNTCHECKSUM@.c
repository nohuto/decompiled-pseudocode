/*
 * XREFs of ??0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@@PAPAU_FONTFILEVIEW@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDEC04
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x1D08B0 (-bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNI.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z @ 0x1D0D40 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     _ComputeFileviewCheckSum@8 @ 0xDFA40 (_ComputeFileviewCheckSum@8.c)
 *     ?PutFNTCacheCheckSum@@YGXKK@Z @ 0xECC86 (-PutFNTCacheCheckSum@@YGXKK@Z.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YGKPAPAU_FONTFILEVIEW@@I@Z @ 0xECF16 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YGKPAPAU_FONTFILEVIEW@@I@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?bAddPvtData@PFFOBJ@@QAEHK@Z @ 0x221562 (-bAddPvtData@PFFOBJ@@QAEHK@Z.c)
 */

PFFMEMOBJ *__thiscall PFFMEMOBJ::PFFMEMOBJ(
        PFFMEMOBJ *this,
        unsigned int a2,
        const unsigned __int16 *Src,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *a6,
        size_t MaxCount,
        unsigned int a8,
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
  int *v18; // ecx
  BOOL v19; // ecx
  char *v20; // eax
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // esi
  int v27; // esi
  ULONG *v28; // [esp+0h] [ebp-18h]
  struct _FONTFILEVIEW **v29; // [esp+0h] [ebp-18h]
  unsigned int v30; // [esp+0h] [ebp-18h]
  unsigned int *v31; // [esp+4h] [ebp-14h]
  unsigned int v32; // [esp+4h] [ebp-14h]
  size_t v33; // [esp+Ch] [ebp-Ch]
  size_t v34; // [esp+10h] [ebp-8h]
  size_t Size; // [esp+14h] [ebp-4h] BYREF

  *((_WORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = a13;
  Size = 0;
  v33 = 0;
  v34 = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v19 = ULongLongToULong(4LL * a2, v28) >= 0 && (ULongAdd(Size, 0x84u, v18, (unsigned int)v29, v31) & 0x80000000) == 0;
  if ( Src && v19 )
  {
    v34 = Size;
    v19 = (ULongAdd((2 * a4 + 3) & 0xFFFFFFFC, Size, (int *)&Size, (unsigned int)v29, v31) & 0x80000000) == 0;
  }
  if ( !MaxCount )
  {
LABEL_8:
    if ( !v19 )
      return this;
    goto LABEL_9;
  }
  if ( !v19 )
    return this;
  v33 = Size;
  if ( (ULongAdd(MaxCount, Size, (int *)&Size, (unsigned int)v29, v31) & 0x80000000) != 0 )
  {
    v19 = 0;
    goto LABEL_8;
  }
LABEL_9:
  v20 = (char *)PALLOCMEM2(Size, 1717989447, 1);
  *(_DWORD *)this = v20;
  if ( v20 )
  {
    PushThreadGuardedObject(v20 + 100, v20, CleanUpPFF);
    **(_DWORD **)this = Size;
    *(_DWORD *)(*(_DWORD *)this + 8) = 0;
    *(_DWORD *)(*(_DWORD *)this + 4) = 0;
    *(_DWORD *)(*(_DWORD *)this + 56) = a8;
    *(_DWORD *)(*(_DWORD *)this + 60) = a9;
    *(_DWORD *)(*(_DWORD *)this + 64) = a10;
    *(_DWORD *)(*(_DWORD *)this + 80) = a11;
    *(_DWORD *)(*(_DWORD *)this + 20) = a5;
    *(_DWORD *)(*(_DWORD *)this + 16) = a4;
    v21 = *(_DWORD *)this;
    if ( a4 )
    {
      *(_DWORD *)(v21 + 12) = v21 + v34;
      memcpy(*(void **)(*(_DWORD *)this + 12), Src, 2 * a4);
    }
    else
    {
      *(_DWORD *)(v21 + 12) = 0;
    }
    *(_DWORD *)(*(_DWORD *)this + 28) = MaxCount;
    v22 = *(_DWORD *)this;
    if ( MaxCount )
    {
      *(_DWORD *)(v22 + 24) = v22 + v33;
      memcpy(*(void **)(*(_DWORD *)this + 24), a6, MaxCount);
    }
    else
    {
      *(_DWORD *)(v22 + 24) = 0;
    }
    if ( gbNetworkFontsLoaded && gbAttemptedEnableEUDC && gbFntCacheClosed )
      v23 = a12;
    else
      v23 = a12 | 0x200;
    if ( a17 )
      v23 |= 0x1000u;
    *(_DWORD *)(*(_DWORD *)this + 120) = a15;
    *(_DWORD *)(*(_DWORD *)this + 124) = 0;
    *(_DWORD *)(*(_DWORD *)this + 48) = 0;
    *(_DWORD *)(*(_DWORD *)this + 32) = v23;
    *(_DWORD *)(*(_DWORD *)this + 68) = 0;
    *(_DWORD *)(*(_DWORD *)this + 72) = 0;
    *(_DWORD *)(*(_DWORD *)this + 76) = 0;
    *(_DWORD *)(*(_DWORD *)this + 52) = 0;
    *(_DWORD *)(*(_DWORD *)this + 92) = 0;
    v24 = *(_DWORD *)this;
    if ( (a13 & 0x1C) != 0 )
    {
      *(_DWORD *)(v24 + 36) = 0;
      *(_DWORD *)(*(_DWORD *)this + 40) = 0;
      PFFOBJ::bAddPvtData(this, a13);
    }
    else if ( (a13 & 0x20) != 0 )
    {
      *(_DWORD *)(v24 + 36) = 0;
      *(_DWORD *)(*(_DWORD *)this + 40) = 1;
    }
    else
    {
      *(_DWORD *)(v24 + 36) = 1;
      *(_DWORD *)(*(_DWORD *)this + 40) = 0;
    }
    *(_DWORD *)(*(_DWORD *)this + 96) = 0;
    *(_DWORD *)(*(_DWORD *)this + 84) = 0;
    if ( a16 )
    {
      *(_DWORD *)(*(_DWORD *)this + 84) = *(_DWORD *)a16;
    }
    else if ( a15 )
    {
      *(_DWORD *)(*(_DWORD *)this + 84) = *((_DWORD *)a14 + 1);
      if ( !*(_DWORD *)(*(_DWORD *)this + 84) )
      {
        v25 = *(_DWORD *)this;
        *(_DWORD *)(v25 + 84) += ComputeFileviewCheckSumInFontDriverAddressSpace(v29, (unsigned int)v31);
        if ( (a13 & 0x10) == 0 )
          PutFNTCacheCheckSum(v30, v32);
      }
      if ( *(_DWORD *)(*(_DWORD *)this + 28) )
      {
        v27 = *(_DWORD *)this;
        *(_DWORD *)(v27 + 84) += ComputeFileviewCheckSum(a6, MaxCount);
      }
    }
  }
  return this;
}
