/*
 * XREFs of ?UMPDDrvPaint@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@K@Z @ 0x20D2A6
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

unsigned int __stdcall UMPDDrvPaint(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        struct _POINTL *a4,
        unsigned int a5)
{
  struct _SURFOBJ *v5; // ebx
  unsigned int v6; // edi
  UMPDOBJ *v7; // esi
  unsigned int v8; // ebx
  struct _SURFOBJ *v9; // edi
  UMPDOBJ *v11; // [esp+18h] [ebp-5Ch] BYREF
  void *v12; // [esp+1Ch] [ebp-58h] BYREF
  void *v13; // [esp+20h] [ebp-54h] BYREF
  int v14; // [esp+24h] [ebp-50h] BYREF
  struct _SURFOBJ *v15; // [esp+28h] [ebp-4Ch]
  int v16; // [esp+2Ch] [ebp-48h] BYREF
  unsigned int v17; // [esp+30h] [ebp-44h] BYREF
  _DWORD v18[15]; // [esp+34h] [ebp-40h] BYREF

  v5 = a1;
  v6 = 0;
  v15 = a1;
  v17 = 1;
  v14 = 0;
  v16 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v11);
  v13 = 0;
  v12 = 0;
  memset(v18, 0, sizeof(v18));
  v7 = v11;
  if ( !v11 )
    goto LABEL_18;
  if ( !*((_DWORD *)v11 + 58) )
    goto LABEL_5;
  v17 = 108;
  v8 = UMPDOBJ::bThunkLargeBitmap(v11, a1, &v13, &v12, &v14, &v16, &v17);
  v17 = v8;
  if ( v8 )
  {
    v5 = v15;
LABEL_5:
    v18[0] = 60;
    v18[1] = 17;
    v18[4] = *(_DWORD *)v7;
    v18[7] = a2;
    v18[9] = a3;
    v18[10] = a4;
    v18[13] = a5;
    v18[5] = v5;
    v8 = UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 40), (struct _SURFOBJ **)&v18[5], v16)
      && UMPDOBJ::ThunkDDIOBJ(v7, (UMPDOBJ *)((char *)v7 + 64), (void **)&v18[7], 0x18u, 0)
      && UMPDOBJ::ThunkDDIOBJ(v7, (UMPDOBJ *)((char *)v7 + 80), (void **)&v18[9], 0xCu, 0)
      && UMPDOBJ::ThunkMemBlock(v7, (void **)&v18[10], (void *)8)
      && UMPDOBJ::Thunk(v7, v18, 0x3Cu, &v17, (char *)4) != -1
      && v17;
  }
  if ( v14 )
  {
    v9 = v15;
    if ( v16 )
      UMPDOBJ::bDeleteLargeBitmaps(v7, v15, 0, 0);
    v9->pvBits = v13;
    v9->pvScan0 = v12;
  }
  v6 = v8;
LABEL_18:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v11);
  return v6;
}
