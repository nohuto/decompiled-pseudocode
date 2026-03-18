/*
 * XREFs of ??0PFFMEMOBJ@@QAE@PAVPFF@@KKPAVPFT@@@Z @ 0xDF222
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bAddPvtData@PFFOBJ@@QAEHK@Z @ 0x221562 (-bAddPvtData@PFFOBJ@@QAEHK@Z.c)
 */

PFFMEMOBJ *__thiscall PFFMEMOBJ::PFFMEMOBJ(
        PFFMEMOBJ *this,
        struct PFF *Src,
        unsigned int a3,
        unsigned int a4,
        struct PFT *a5)
{
  void *v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax

  *((_DWORD *)this + 1) = 0;
  *((_WORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = a4;
  v6 = PALLOCMEM2(*(_DWORD *)Src, 1717989447, 1);
  *(_DWORD *)this = v6;
  if ( v6 )
  {
    memcpy(v6, Src, *(_DWORD *)Src);
    PushThreadGuardedObject(*(_DWORD *)this + 100, *(_DWORD *)this, CleanUpPFF);
    v7 = *((_DWORD *)Src + 3);
    if ( v7 )
      *(_DWORD *)(*(_DWORD *)this + 12) = *(_DWORD *)this + v7 - (_DWORD)Src;
    v8 = *((_DWORD *)Src + 6);
    if ( v8 )
      *(_DWORD *)(*(_DWORD *)this + 24) = *(_DWORD *)this + v8 - (_DWORD)Src;
    memset((void *)(*(_DWORD *)this + 132), 0, 4 * *((_DWORD *)Src + 31));
    v9 = *((_DWORD *)Src + 8);
    v10 = a3;
    if ( (v9 & 0x200) != 0 )
      v10 = a3 | 0x200;
    if ( (v9 & 0x1000) != 0 )
      v10 |= 0x1000u;
    *(_DWORD *)(*(_DWORD *)this + 116) = *((_DWORD *)Src + 29);
    *(_DWORD *)(*(_DWORD *)this + 8) = 0;
    *(_DWORD *)(*(_DWORD *)this + 4) = 0;
    *(_DWORD *)(*(_DWORD *)this + 124) = 0;
    *(_DWORD *)(*(_DWORD *)this + 48) = 0;
    *(_DWORD *)(*(_DWORD *)this + 32) = v10;
    *(_DWORD *)(*(_DWORD *)this + 68) = 0;
    *(_DWORD *)(*(_DWORD *)this + 72) = 0;
    *(_DWORD *)(*(_DWORD *)this + 76) = 0;
    *(_DWORD *)(*(_DWORD *)this + 52) = 0;
    *(_DWORD *)(*(_DWORD *)this + 80) = a5;
    *(_DWORD *)(*(_DWORD *)this + 92) = 0;
    v11 = *(_DWORD *)this;
    if ( (a4 & 0x1C) != 0 )
    {
      *(_DWORD *)(v11 + 36) = 0;
      *(_DWORD *)(*(_DWORD *)this + 40) = 0;
      PFFOBJ::bAddPvtData(this, a4);
    }
    else if ( (a4 & 0x20) != 0 )
    {
      *(_DWORD *)(v11 + 36) = 0;
      *(_DWORD *)(*(_DWORD *)this + 40) = 1;
    }
    else
    {
      *(_DWORD *)(v11 + 36) = 1;
      *(_DWORD *)(*(_DWORD *)this + 40) = 0;
    }
    *((_DWORD *)Src + 24) = *(_DWORD *)this;
    *(_DWORD *)(*(_DWORD *)this + 96) = Src;
  }
  return this;
}
