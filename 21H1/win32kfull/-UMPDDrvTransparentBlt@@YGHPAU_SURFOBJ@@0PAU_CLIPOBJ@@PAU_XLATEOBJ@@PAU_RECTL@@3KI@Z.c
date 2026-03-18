/*
 * XREFs of ?UMPDDrvTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KI@Z @ 0x20F9CA
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QAEHPAPAU_XLATEOBJ@@@Z @ 0x1F467B (-pxlo@UMPDOBJ@@QAEHPAPAU_XLATEOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QAEXPAU_SURFOBJ@@00PAX11111HHHHHH@Z @ 0x20A8B4 (-RestoreBitmaps@UMPDOBJ@@QAEXPAU_SURFOBJ@@00PAX11111HHHHHH@Z.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00PAPAX11111PAH22222PAK@Z @ 0x21004C (-bThunkLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00PAPAX11111PAH22222PAK@Z.c)
 */

unsigned int __stdcall UMPDDrvTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  int v9; // ebx
  UMPDOBJ *v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // eax
  UMPDOBJ *v14; // [esp+18h] [ebp-70h] BYREF
  void *v15; // [esp+1Ch] [ebp-6Ch] BYREF
  void *v16; // [esp+20h] [ebp-68h] BYREF
  void *v17; // [esp+24h] [ebp-64h] BYREF
  void *v18; // [esp+28h] [ebp-60h] BYREF
  int v19; // [esp+2Ch] [ebp-5Ch] BYREF
  int v20; // [esp+30h] [ebp-58h] BYREF
  struct _XLATEOBJ *v21; // [esp+34h] [ebp-54h]
  struct _SURFOBJ *v22; // [esp+38h] [ebp-50h]
  struct _SURFOBJ *v23; // [esp+3Ch] [ebp-4Ch]
  int v24; // [esp+40h] [ebp-48h] BYREF
  int v25; // [esp+44h] [ebp-44h] BYREF
  int v26; // [esp+48h] [ebp-40h] BYREF
  unsigned int v27; // [esp+4Ch] [ebp-3Ch] BYREF
  _DWORD v28[13]; // [esp+50h] [ebp-38h] BYREF

  v22 = a1;
  v23 = a2;
  v8 = 0;
  v21 = a4;
  v9 = 0;
  v25 = 1;
  v19 = 0;
  v20 = 0;
  v24 = 0;
  v26 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v14);
  v15 = 0;
  v17 = 0;
  v16 = 0;
  v18 = 0;
  memset(v28, 0, sizeof(v28));
  v10 = v14;
  if ( v14 )
  {
    if ( !*((_DWORD *)v14 + 58)
      || (!v21 ? (v11 = 112) : (v11 = 4 * v21->cEntries + 132),
          v27 = v11,
          v12 = UMPDOBJ::bThunkLargeBitmaps(
                  v14,
                  v22,
                  v23,
                  0,
                  &v15,
                  &v16,
                  &v17,
                  &v18,
                  0,
                  0,
                  &v19,
                  &v24,
                  &v20,
                  &v26,
                  0,
                  0,
                  &v27),
          v9 = v26,
          v27 = v12,
          (v25 = v12) != 0) )
    {
      v28[0] = 52;
      v28[1] = 74;
      v28[4] = *(_DWORD *)v10;
      v28[5] = v22;
      v28[6] = v23;
      v28[7] = a3;
      v28[8] = v21;
      v28[9] = a5;
      v28[10] = a6;
      v28[11] = a7;
      v28[12] = a8;
      if ( !UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 40), (struct _SURFOBJ **)&v28[5], v24)
        || !UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 48), (struct _SURFOBJ **)&v28[6], v9)
        || !UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 64), (void **)&v28[7], 0x18u, 0)
        || !UMPDOBJ::pxlo(v10, (struct _XLATEOBJ **)&v28[8])
        || !UMPDOBJ::ThunkMemBlock(v10, (void **)&v28[9], (void *)0x10)
        || !UMPDOBJ::ThunkMemBlock(v10, (void **)&v28[10], (void *)0x10)
        || UMPDOBJ::Thunk(v10, v28, 0x34u, &v25, (char *)4) == -1
        || (v27 = 1, !v25) )
      {
        v27 = 0;
      }
    }
    if ( *((_DWORD *)v10 + 58) )
      UMPDOBJ::RestoreBitmaps(v10, v22, v23, 0, v15, v16, v17, v18, 0, 0, v19, v24, v20, v9, 0, 0);
    v8 = v27;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v14);
  return v8;
}
