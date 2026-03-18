/*
 * XREFs of ?UMPDDrvFontManagement@@YGKPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z @ 0x20C60A
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z @ 0x1F4429 (-pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

int __stdcall UMPDDrvFontManagement(
        struct _SURFOBJ *a1,
        struct _FONTOBJ *a2,
        unsigned int a3,
        void *a4,
        void *a5,
        size_t a6,
        void *a7)
{
  int v7; // ebx
  UMPDOBJ *v8; // esi
  unsigned int v9; // eax
  void *v10; // ebx
  char *KernelPtr; // eax
  size_t v13; // [esp-4h] [ebp-80h]
  unsigned int *v14; // [esp+0h] [ebp-7Ch]
  unsigned int v15; // [esp+0h] [ebp-7Ch]
  unsigned int v16; // [esp+0h] [ebp-7Ch]
  unsigned int v17; // [esp+0h] [ebp-7Ch]
  unsigned int v18; // [esp+0h] [ebp-7Ch]
  int **v19; // [esp+4h] [ebp-78h]
  unsigned int *v20; // [esp+4h] [ebp-78h]
  unsigned int *v21; // [esp+4h] [ebp-78h]
  unsigned int *v22; // [esp+4h] [ebp-78h]
  const int *v23; // [esp+4h] [ebp-78h]
  int v24; // [esp+14h] [ebp-68h]
  void *v25; // [esp+18h] [ebp-64h] BYREF
  void *v26; // [esp+1Ch] [ebp-60h] BYREF
  int v27; // [esp+20h] [ebp-5Ch] BYREF
  int v28; // [esp+24h] [ebp-58h] BYREF
  struct _FONTOBJ *v29; // [esp+28h] [ebp-54h]
  UMPDOBJ *v30; // [esp+2Ch] [ebp-50h] BYREF
  int v31; // [esp+30h] [ebp-4Ch] BYREF
  size_t MaxCount; // [esp+34h] [ebp-48h]
  unsigned int v33; // [esp+38h] [ebp-44h] BYREF
  int v34; // [esp+3Ch] [ebp-40h]
  unsigned int v35; // [esp+40h] [ebp-3Ch] BYREF
  _DWORD v36[13]; // [esp+44h] [ebp-38h] BYREF

  v7 = -1;
  v29 = a2;
  MaxCount = a6;
  v34 = -1;
  v28 = -1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v26 = 0;
  v25 = 0;
  v27 = 0;
  v31 = 0;
  memset(v36, 0, sizeof(v36));
  v8 = v30;
  if ( !v30 )
    goto LABEL_31;
  if ( !*((_DWORD *)v30 + 58) || a3 == 8 || !a1 || !a1->pvBits )
  {
LABEL_11:
    v36[0] = 52;
    v36[1] = 47;
    v36[4] = *(_DWORD *)v8;
    v10 = MaxCount != 0 ? a7 : 0;
    if ( a3 == 8 )
    {
      v36[5] = 0;
      v36[6] = a1;
    }
    else
    {
      v36[5] = a1;
    }
    v36[7] = v29;
    v36[8] = a3;
    v8 = v30;
    v36[9] = a4;
    v36[10] = a4 != 0 ? a5 : 0;
    v36[11] = MaxCount;
    v36[12] = MaxCount != 0 ? a7 : 0;
    if ( (!v10 || (v36[12] = UMPDOBJ::_AllocUserMem(v30, (char *)MaxCount, 1)) != 0)
      && UMPDOBJ::pso(v8, (UMPDOBJ *)((char *)v8 + 40), (struct _SURFOBJ **)&v36[5], v31)
      && UMPDOBJ::pfo(v8, (struct _FONTOBJ **)&v36[7])
      && UMPDOBJ::ThunkMemBlock(v8, (void **)&v36[10], a4) )
    {
      v35 = (unsigned int)v29;
      UMPDReleaseRFONTSem(0, 0, 0, v14, v19);
      if ( UMPDOBJ::Thunk(v8, v36, 0x34u, &v28, (char *)4) == -1 )
        v34 = -1;
      else
        v34 = v28;
      UMPDAcquireRFONTSem(0, 0, 0, v18, v23);
      if ( v34 != -1 && v10 )
      {
        v13 = MaxCount;
        KernelPtr = UMPDOBJ::GetKernelPtr(v8, (char *)v36[12]);
        memcpy(v10, KernelPtr, v13);
      }
      v35 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
    }
    v7 = v34;
    goto LABEL_27;
  }
  v33 = 0;
  v35 = 100;
  if ( (ULongAdd(3, (unsigned int)a4, (int *)&v33, (unsigned int)v14, (unsigned int *)v19) & 0x80000000) != 0
    || (v9 = v33 & 0xFFFFFFFC, v33 = 0, v24 = v9, (ULongAdd(3, MaxCount, (int *)&v33, v15, v20) & 0x80000000) != 0)
    || (v33 &= 0xFFFFFFFC, (ULongAdd(v24, 0x64u, (int *)&v35, v16, v21) & 0x80000000) != 0)
    || (ULongAdd(v33, v35, (int *)&v35, v17, v22) & 0x80000000) != 0 )
  {
LABEL_31:
    v7 = -1;
    goto LABEL_32;
  }
  if ( UMPDOBJ::bThunkLargeBitmap(v8, a1, &v26, &v25, &v27, &v31, &v35) )
    goto LABEL_11;
LABEL_27:
  if ( v27 )
  {
    if ( v31 )
      UMPDOBJ::bDeleteLargeBitmaps(v8, a1, 0, 0);
    a1->pvBits = v26;
    a1->pvScan0 = v25;
  }
LABEL_32:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v30);
  return v7;
}
