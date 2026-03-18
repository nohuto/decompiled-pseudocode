/*
 * XREFs of ?UMPDDrvFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x20C459
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

unsigned int __stdcall UMPDDrvFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  struct _SURFOBJ *v7; // ebx
  unsigned int v8; // edi
  UMPDOBJ *v9; // esi
  unsigned int v10; // ebx
  struct _SURFOBJ *v11; // edi
  UMPDOBJ *v13; // [esp+1Ch] [ebp-5Ch] BYREF
  void *v14; // [esp+20h] [ebp-58h] BYREF
  void *v15; // [esp+24h] [ebp-54h] BYREF
  int v16; // [esp+28h] [ebp-50h] BYREF
  struct _SURFOBJ *v17; // [esp+2Ch] [ebp-4Ch]
  int v18; // [esp+30h] [ebp-48h] BYREF
  unsigned int v19; // [esp+34h] [ebp-44h] BYREF
  _DWORD v20[15]; // [esp+38h] [ebp-40h] BYREF

  v7 = a1;
  v8 = 0;
  v17 = a1;
  v19 = 1;
  v16 = 0;
  v18 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v13);
  v15 = 0;
  v14 = 0;
  memset(v20, 0, sizeof(v20));
  v9 = v13;
  if ( !v13 )
    goto LABEL_19;
  if ( !*((_DWORD *)v13 + 58) )
    goto LABEL_5;
  v19 = 116;
  v10 = UMPDOBJ::bThunkLargeBitmap(v13, a1, &v15, &v14, &v16, &v18, &v19);
  v19 = v10;
  if ( v10 )
  {
    v7 = v17;
LABEL_5:
    v20[0] = 60;
    v20[1] = 15;
    v20[4] = *(_DWORD *)v9;
    v20[6] = a2;
    v20[7] = a3;
    v20[9] = a4;
    v20[10] = a5;
    v20[13] = a6;
    v20[14] = a7;
    v20[5] = v7;
    v10 = UMPDOBJ::pso(v9, (UMPDOBJ *)((char *)v9 + 40), (struct _SURFOBJ **)&v20[5], v18)
       && UMPDOBJ::ThunkDDIOBJ(v9, (UMPDOBJ *)((char *)v9 + 120), (void **)&v20[6], 8u, 0)
       && UMPDOBJ::ThunkDDIOBJ(v9, (UMPDOBJ *)((char *)v9 + 64), (void **)&v20[7], 0x18u, 0)
       && UMPDOBJ::ThunkDDIOBJ(v9, (UMPDOBJ *)((char *)v9 + 80), (void **)&v20[9], 0xCu, 0)
       && UMPDOBJ::ThunkMemBlock(v9, (void **)&v20[10], (void *)8)
       && UMPDOBJ::Thunk(v9, v20, 0x3Cu, &v19, (char *)4) != -1
       && v19;
  }
  if ( v16 )
  {
    v11 = v17;
    if ( v18 )
      UMPDOBJ::bDeleteLargeBitmaps(v9, v17, 0, 0);
    v11->pvBits = v15;
    v11->pvScan0 = v14;
  }
  v8 = v10;
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v13);
  return v8;
}
