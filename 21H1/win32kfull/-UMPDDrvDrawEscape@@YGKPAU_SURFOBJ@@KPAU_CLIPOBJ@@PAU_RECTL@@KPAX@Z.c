/*
 * XREFs of ?UMPDDrvDrawEscape@@YGKPAU_SURFOBJ@@KPAU_CLIPOBJ@@PAU_RECTL@@KPAX@Z @ 0x20B703
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QBEHPAX@Z @ 0x1F43DE (-bNeedThunk@UMPDOBJ@@QBEHPAX@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

int __stdcall UMPDDrvDrawEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        void *a5,
        void *a6)
{
  int v6; // edi
  int v7; // ebx
  UMPDOBJ *v8; // esi
  int v9; // eax
  struct _SURFOBJ *v10; // ecx
  unsigned int v12; // [esp+0h] [ebp-6Ch]
  unsigned int v13; // [esp+0h] [ebp-6Ch]
  unsigned int *v14; // [esp+4h] [ebp-68h]
  unsigned int *v15; // [esp+4h] [ebp-68h]
  UMPDOBJ *v16; // [esp+18h] [ebp-54h] BYREF
  void *v17; // [esp+1Ch] [ebp-50h] BYREF
  void *v18; // [esp+20h] [ebp-4Ch] BYREF
  int v19; // [esp+24h] [ebp-48h] BYREF
  int v20; // [esp+28h] [ebp-44h] BYREF
  unsigned int v21; // [esp+2Ch] [ebp-40h] BYREF
  unsigned int v22; // [esp+30h] [ebp-3Ch] BYREF
  int v23; // [esp+34h] [ebp-38h] BYREF
  struct _SURFOBJ *v24; // [esp+38h] [ebp-34h]
  _DWORD v25[11]; // [esp+3Ch] [ebp-30h] BYREF

  v24 = a1;
  v6 = -1;
  v20 = -1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v16);
  v7 = 0;
  v18 = 0;
  v17 = 0;
  v19 = 0;
  v23 = 0;
  memset(v25, 0, sizeof(v25));
  v8 = v16;
  if ( v16 )
  {
    if ( !*((_DWORD *)v16 + 58) )
      goto LABEL_6;
    v22 = 0;
    v21 = 88;
    if ( (ULongAdd(3, (unsigned int)a5, (int *)&v22, v12, v14) & 0x80000000) != 0
      || (ULongAdd(v22 & 0xFFFFFFFC, 0x58u, (int *)&v21, v13, v15) & 0x80000000) != 0 )
    {
      goto LABEL_18;
    }
    v9 = UMPDOBJ::bThunkLargeBitmap(v8, v24, &v18, &v17, &v19, &v23, &v21);
    v7 = v23;
    if ( v9 )
    {
LABEL_6:
      v25[0] = 44;
      v25[1] = 25;
      v25[4] = *(_DWORD *)v8;
      v25[5] = v24;
      v25[6] = a2;
      v25[7] = a3;
      v25[8] = a4;
      v25[9] = a5;
      v25[10] = a5 != 0 ? a6 : 0;
      if ( (!a5 || !UMPDOBJ::bNeedThunk(v8, a5 != 0 ? a6 : 0) || UMPDOBJ::ThunkMemBlock(v8, (void **)&v25[10], a5))
        && UMPDOBJ::pso(v8, (UMPDOBJ *)((char *)v8 + 40), (struct _SURFOBJ **)&v25[5], v7)
        && UMPDOBJ::ThunkDDIOBJ(v8, (UMPDOBJ *)((char *)v8 + 64), (void **)&v25[7], 0x18u, 0)
        && UMPDOBJ::ThunkMemBlock(v8, (void **)&v25[8], (void *)0x10)
        && UMPDOBJ::Thunk(v8, v25, 0x2Cu, &v20, (char *)4) != -1 )
      {
        v6 = v20;
      }
    }
    if ( v19 )
    {
      if ( v7 )
        UMPDOBJ::bDeleteLargeBitmaps(v8, v24, 0, 0);
      v10 = v24;
      v24->pvBits = v18;
      v10->pvScan0 = v17;
    }
  }
LABEL_18:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v16);
  return v6;
}
