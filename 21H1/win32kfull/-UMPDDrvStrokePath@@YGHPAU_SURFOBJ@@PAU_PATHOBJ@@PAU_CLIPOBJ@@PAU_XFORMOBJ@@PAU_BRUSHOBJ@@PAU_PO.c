/*
 * XREFs of ?UMPDDrvStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x20F420
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?ThunkLINEATTRS@UMPDOBJ@@QAEHPAPAU_LINEATTRS@@@Z @ 0x1F3F8B (-ThunkLINEATTRS@UMPDOBJ@@QAEHPAPAU_LINEATTRS@@@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

unsigned int __stdcall UMPDDrvStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  struct _SURFOBJ *v8; // ebx
  unsigned int v9; // edi
  UMPDOBJ *v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  struct _SURFOBJ *v13; // edi
  UMPDOBJ *v15; // [esp+20h] [ebp-60h] BYREF
  void *v16; // [esp+24h] [ebp-5Ch] BYREF
  void *v17; // [esp+28h] [ebp-58h] BYREF
  int v18; // [esp+2Ch] [ebp-54h] BYREF
  struct _LINEATTRS *v19; // [esp+30h] [ebp-50h]
  struct _SURFOBJ *v20; // [esp+34h] [ebp-4Ch]
  int v21; // [esp+38h] [ebp-48h] BYREF
  unsigned int v22; // [esp+3Ch] [ebp-44h] BYREF
  _DWORD v23[15]; // [esp+40h] [ebp-40h] BYREF

  v8 = a1;
  v9 = 0;
  v20 = a1;
  v19 = a7;
  v22 = 1;
  v18 = 0;
  v21 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v15);
  v17 = 0;
  v16 = 0;
  memset(v23, 0, sizeof(v23));
  v10 = v15;
  if ( !v15 )
    goto LABEL_24;
  if ( *((_DWORD *)v15 + 58) )
  {
    if ( v19 )
      v11 = 4 * v19->cstyle + 152;
    else
      v11 = 120;
    v22 = v11;
    v12 = UMPDOBJ::bThunkLargeBitmap(v15, a1, &v17, &v16, &v18, &v21, &v22);
    v22 = v12;
    if ( !v12 )
      goto LABEL_19;
    v8 = v20;
  }
  v23[0] = 60;
  v23[1] = 14;
  v23[4] = *(_DWORD *)v10;
  v23[6] = a2;
  v23[7] = a3;
  v23[8] = a4;
  v23[9] = a5;
  v23[10] = a6;
  v23[11] = v19;
  v23[13] = a8;
  v23[5] = v8;
  v12 = UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 40), (struct _SURFOBJ **)&v23[5], v21)
     && UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 120), (void **)&v23[6], 8u, 0)
     && UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 64), (void **)&v23[7], 0x18u, 0)
     && UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 144), (void **)&v23[8], 4u, 0)
     && UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 80), (void **)&v23[9], 0xCu, 0)
     && UMPDOBJ::ThunkMemBlock(v10, (void **)&v23[10], (void *)8)
     && UMPDOBJ::ThunkLINEATTRS(v10, (struct _LINEATTRS **)&v23[11])
     && UMPDOBJ::Thunk(v10, v23, 0x3Cu, &v22, (char *)4) != -1
     && v22;
LABEL_19:
  if ( v18 )
  {
    v13 = v20;
    if ( v21 )
      UMPDOBJ::bDeleteLargeBitmaps(v10, v20, 0, 0);
    v13->pvBits = v17;
    v13->pvScan0 = v16;
  }
  v9 = v12;
LABEL_24:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v15);
  return v9;
}
