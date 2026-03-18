/*
 * XREFs of ?UMPDDrvLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x20CF85
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

unsigned int __stdcall UMPDDrvLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  struct _SURFOBJ *v9; // ebx
  unsigned int v10; // edi
  UMPDOBJ *v11; // esi
  unsigned int v12; // ebx
  struct _SURFOBJ *v13; // edi
  unsigned int v15; // [esp+Ch] [ebp-64h] BYREF
  int v16; // [esp+10h] [ebp-60h] BYREF
  struct _SURFOBJ *v17; // [esp+14h] [ebp-5Ch]
  int v18; // [esp+18h] [ebp-58h] BYREF
  void *v19; // [esp+1Ch] [ebp-54h] BYREF
  void *v20; // [esp+20h] [ebp-50h] BYREF
  UMPDOBJ *v21; // [esp+24h] [ebp-4Ch] BYREF
  struct _CLIPOBJ *v22; // [esp+28h] [ebp-48h]
  struct _BRUSHOBJ *v23; // [esp+2Ch] [ebp-44h]
  struct _RECTL *v24; // [esp+30h] [ebp-40h]
  _DWORD v25[14]; // [esp+34h] [ebp-3Ch] BYREF

  v9 = a1;
  v22 = a2;
  v23 = a3;
  v10 = 0;
  v17 = a1;
  v24 = a8;
  v15 = 1;
  v18 = 0;
  v16 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v21);
  v19 = 0;
  v20 = 0;
  memset(v25, 0, sizeof(v25));
  v11 = v21;
  if ( !v21 )
    goto LABEL_18;
  if ( !*((_DWORD *)v21 + 58) )
    goto LABEL_5;
  v15 = 112;
  v12 = UMPDOBJ::bThunkLargeBitmap(v21, a1, &v19, &v20, &v18, &v16, &v15);
  v15 = v12;
  if ( v12 )
  {
    v9 = v17;
LABEL_5:
    v25[0] = 56;
    v25[1] = 31;
    v25[4] = *(_DWORD *)v11;
    v25[6] = v22;
    v25[7] = v23;
    v25[8] = a4;
    v25[9] = a5;
    v25[10] = a6;
    v25[11] = a7;
    v25[12] = v24;
    v25[13] = a9;
    v25[5] = v9;
    v12 = UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 40), (struct _SURFOBJ **)&v25[5], v16)
       && UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 64), (void **)&v25[6], 0x18u, 0)
       && UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 80), (void **)&v25[7], 0xCu, 0)
       && UMPDOBJ::ThunkMemBlock(v11, (void **)&v25[12], (void *)0x10)
       && UMPDOBJ::Thunk(v11, v25, 0x38u, &v15, (char *)4) != -1
       && v15;
  }
  if ( v18 )
  {
    v13 = v17;
    if ( v16 )
      UMPDOBJ::bDeleteLargeBitmaps(v11, v17, 0, 0);
    v13->pvBits = v19;
    v13->pvScan0 = v20;
  }
  v10 = v12;
LABEL_18:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v21);
  return v10;
}
