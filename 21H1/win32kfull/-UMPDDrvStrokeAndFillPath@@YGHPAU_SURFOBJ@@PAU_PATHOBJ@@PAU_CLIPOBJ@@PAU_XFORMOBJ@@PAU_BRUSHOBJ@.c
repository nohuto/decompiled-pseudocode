/*
 * XREFs of ?UMPDDrvStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x20F1ED
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

unsigned int __stdcall UMPDDrvStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  struct _SURFOBJ *v10; // ebx
  unsigned int v11; // edi
  UMPDOBJ *v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // ebx
  struct _SURFOBJ *v15; // edi
  UMPDOBJ *v17; // [esp+24h] [ebp-60h] BYREF
  void *v18; // [esp+28h] [ebp-5Ch] BYREF
  void *v19; // [esp+2Ch] [ebp-58h] BYREF
  int v20; // [esp+30h] [ebp-54h] BYREF
  struct _LINEATTRS *v21; // [esp+34h] [ebp-50h]
  struct _SURFOBJ *v22; // [esp+38h] [ebp-4Ch]
  int v23; // [esp+3Ch] [ebp-48h] BYREF
  unsigned int v24; // [esp+40h] [ebp-44h] BYREF
  _DWORD v25[15]; // [esp+44h] [ebp-40h] BYREF

  v10 = a1;
  v21 = a6;
  v11 = 0;
  v22 = a1;
  v24 = 1;
  v20 = 0;
  v23 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v17);
  v19 = 0;
  v18 = 0;
  memset(v25, 0, sizeof(v25));
  v12 = v17;
  if ( !v17 )
    goto LABEL_25;
  if ( *((_DWORD *)v17 + 58) )
  {
    if ( v21 )
      v13 = 4 * v21->cstyle + 164;
    else
      v13 = 132;
    v24 = v13;
    v14 = UMPDOBJ::bThunkLargeBitmap(v17, a1, &v19, &v18, &v20, &v23, &v24);
    v24 = v14;
    if ( !v14 )
      goto LABEL_20;
    v10 = v22;
  }
  v25[0] = 60;
  v25[1] = 16;
  v25[4] = *(_DWORD *)v12;
  v25[6] = a2;
  v25[7] = a3;
  v25[8] = a4;
  v25[9] = a5;
  v25[11] = v21;
  v25[12] = a7;
  v25[10] = a8;
  v25[13] = a9;
  v25[14] = a10;
  v25[5] = v10;
  v14 = UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 40), (struct _SURFOBJ **)&v25[5], v23)
     && UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 120), (void **)&v25[6], 8u, 0)
     && UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 64), (void **)&v25[7], 0x18u, 0)
     && UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 144), (void **)&v25[8], 4u, 0)
     && UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 80), (void **)&v25[9], 0xCu, 0)
     && UMPDOBJ::ThunkLINEATTRS(v12, (struct _LINEATTRS **)&v25[11])
     && UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 88), (void **)&v25[12], 0xCu, 0)
     && UMPDOBJ::ThunkMemBlock(v12, (void **)&v25[10], (void *)8)
     && UMPDOBJ::Thunk(v12, v25, 0x3Cu, &v24, (char *)4) != -1
     && v24;
LABEL_20:
  if ( v20 )
  {
    v15 = v22;
    if ( v23 )
      UMPDOBJ::bDeleteLargeBitmaps(v12, v22, 0, 0);
    v15->pvBits = v19;
    v15->pvScan0 = v18;
  }
  v11 = v14;
LABEL_25:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v17);
  return v11;
}
