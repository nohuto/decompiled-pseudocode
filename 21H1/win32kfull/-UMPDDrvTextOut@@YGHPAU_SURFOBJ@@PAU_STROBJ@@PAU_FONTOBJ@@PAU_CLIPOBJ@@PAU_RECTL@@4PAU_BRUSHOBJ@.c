/*
 * XREFs of ?UMPDDrvTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x20F625
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z @ 0x1F4429 (-pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ?pstro@UMPDOBJ@@QAEHPAPAU_STROBJ@@@Z @ 0x1F45AC (-pstro@UMPDOBJ@@QAEHPAPAU_STROBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

unsigned int __stdcall UMPDDrvTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  unsigned int v10; // edi
  UMPDOBJ *v11; // esi
  struct _RECTL *v12; // edx
  int v13; // ebx
  struct _RECTL *v14; // ecx
  void *v15; // ebx
  bool v16; // zf
  unsigned int v17; // edi
  ULONG cGlyphs; // edi
  ULONG v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // ebx
  int v22; // eax
  struct _SURFOBJ *v23; // ecx
  int v24; // eax
  struct _SURFOBJ *v25; // eax
  ULONG *v27; // [esp+0h] [ebp-98h]
  ULONG *v28; // [esp+0h] [ebp-98h]
  unsigned int v29; // [esp+0h] [ebp-98h]
  unsigned int v30; // [esp+0h] [ebp-98h]
  unsigned int v31; // [esp+0h] [ebp-98h]
  unsigned int v32; // [esp+0h] [ebp-98h]
  unsigned int v33; // [esp+0h] [ebp-98h]
  unsigned int v34; // [esp+0h] [ebp-98h]
  unsigned int *v35; // [esp+4h] [ebp-94h]
  unsigned int *v36; // [esp+4h] [ebp-94h]
  unsigned int *v37; // [esp+4h] [ebp-94h]
  unsigned int *v38; // [esp+4h] [ebp-94h]
  unsigned int *v39; // [esp+4h] [ebp-94h]
  const int *v40; // [esp+4h] [ebp-94h]
  void *v41; // [esp+20h] [ebp-78h] BYREF
  void *v42; // [esp+24h] [ebp-74h] BYREF
  int v43; // [esp+28h] [ebp-70h] BYREF
  struct _FONTOBJ *v44; // [esp+2Ch] [ebp-6Ch]
  struct _STROBJ *v45; // [esp+30h] [ebp-68h]
  struct _RECTL *v46; // [esp+34h] [ebp-64h]
  unsigned int v47; // [esp+38h] [ebp-60h]
  UMPDOBJ *v48; // [esp+3Ch] [ebp-5Ch] BYREF
  int v49; // [esp+40h] [ebp-58h] BYREF
  unsigned int v50; // [esp+44h] [ebp-54h] BYREF
  unsigned int v51; // [esp+48h] [ebp-50h] BYREF
  unsigned int v52; // [esp+4Ch] [ebp-4Ch] BYREF
  unsigned int v53; // [esp+50h] [ebp-48h] BYREF
  struct _SURFOBJ *v54; // [esp+54h] [ebp-44h]
  _DWORD v55[15]; // [esp+58h] [ebp-40h] BYREF

  v54 = a1;
  v45 = a2;
  v44 = a3;
  v46 = a5;
  v10 = 1;
  v52 = 1;
  v43 = 0;
  v49 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v48);
  v42 = 0;
  v41 = 0;
  memset(v55, 0, sizeof(v55));
  v11 = v48;
  if ( !v48 )
    goto LABEL_36;
  v12 = v46;
  if ( v46 )
  {
    v13 = 1;
    v14 = v46;
    if ( v46->left != v46->right )
    {
      do
      {
        ++v14;
        ++v13;
      }
      while ( v14->left != v14->right );
      v11 = v48;
    }
    v15 = (void *)(16 * v13);
  }
  else
  {
    v15 = 0;
  }
  v16 = *((_DWORD *)v11 + 58) == 0;
  v50 = (unsigned int)v15;
  if ( v16 )
    goto LABEL_20;
  v17 = 180;
  v53 = 180;
  if ( v45 )
  {
    cGlyphs = v45->cGlyphs;
    v19 = v45->cGlyphs;
    v52 = 0;
    v47 = 0;
    v53 = 216;
    if ( ULongLongToULong(2LL * v19, v27) < 0 )
      goto LABEL_36;
    if ( ULongLongToULong(16LL * cGlyphs, v28) < 0 )
      goto LABEL_36;
    v51 = 0;
    if ( (ULongAdd(3, v52, (int *)&v51, v29, v35) & 0x80000000) != 0 )
      goto LABEL_36;
    v20 = v51 & 0xFFFFFFFC;
    v51 = 0;
    if ( (ULongAdd(3, v47, (int *)&v51, v30, v36) & 0x80000000) != 0 )
      goto LABEL_36;
    v21 = v51 & 0xFFFFFFFC;
    if ( (ULongAdd(v20, 0xD8u, (int *)&v53, v31, v37) & 0x80000000) != 0
      || (ULongAdd(v21, v53, (int *)&v53, v32, v38) & 0x80000000) != 0 )
    {
      goto LABEL_36;
    }
    v17 = v53;
    v15 = (void *)v50;
  }
  v50 = 0;
  if ( (ULongAdd(3, (unsigned int)v15, (int *)&v50, (unsigned int)v27, v35) & 0x80000000) != 0
    || (ULongAdd(v50 & 0xFFFFFFFC, v17, (int *)&v53, v33, v39) & 0x80000000) != 0 )
  {
LABEL_36:
    v10 = 0;
    goto LABEL_37;
  }
  v22 = UMPDOBJ::bThunkLargeBitmap(v11, v54, &v42, &v41, &v43, &v49, &v53);
  v12 = v46;
  v10 = v22;
  v52 = v22;
LABEL_20:
  v23 = v54;
  v55[0] = 60;
  v55[1] = 23;
  v55[4] = *(_DWORD *)v11;
  v55[6] = v45;
  v55[7] = v44;
  v55[8] = a4;
  v55[10] = a6;
  v55[11] = a7;
  v55[12] = a8;
  v55[13] = a9;
  v55[5] = v54;
  v55[9] = v12;
  v55[14] = a10;
  if ( v10 )
  {
    if ( UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 40), (struct _SURFOBJ **)&v55[5], v49)
      && UMPDOBJ::pstro(v11, (struct _STROBJ **)&v55[6])
      && UMPDOBJ::pfo(v11, (struct _FONTOBJ **)&v55[7])
      && UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 64), (void **)&v55[8], 0x18u, 0)
      && UMPDOBJ::ThunkMemBlock(v11, (void **)&v55[9], v15)
      && UMPDOBJ::ThunkMemBlock(v11, (void **)&v55[10], (void *)0x10)
      && UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 80), (void **)&v55[11], 0xCu, 0)
      && UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 88), (void **)&v55[12], 0xCu, 0)
      && UMPDOBJ::ThunkMemBlock(v11, (void **)&v55[13], (void *)8) )
    {
      v53 = (unsigned int)v44;
      UMPDReleaseRFONTSem(0, 0, 0, v27, (int **)v35);
      v24 = UMPDOBJ::Thunk(v11, v55, 0x3Cu, &v52, (char *)4);
      v10 = v24 != -1 ? v52 : 0;
      UMPDAcquireRFONTSem(0, 0, 0, v34, v40);
      v53 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v53);
    }
    v23 = v54;
  }
  if ( v43 )
  {
    if ( v49 )
      UMPDOBJ::bDeleteLargeBitmaps(v11, v23, 0, 0);
    v25 = v54;
    v54->pvBits = v42;
    v25->pvScan0 = v41;
  }
LABEL_37:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v48);
  return v10;
}
