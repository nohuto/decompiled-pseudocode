/*
 * XREFs of ?UMPDDrvCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x20B20B
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

unsigned int __stdcall UMPDDrvCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  unsigned int v6; // edi
  int v7; // ebx
  UMPDOBJ *v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // eax
  UMPDOBJ *v12; // [esp+18h] [ebp-68h] BYREF
  void *v13; // [esp+1Ch] [ebp-64h] BYREF
  void *v14; // [esp+20h] [ebp-60h] BYREF
  void *v15; // [esp+24h] [ebp-5Ch] BYREF
  void *v16; // [esp+28h] [ebp-58h] BYREF
  int v17; // [esp+2Ch] [ebp-54h] BYREF
  int v18; // [esp+30h] [ebp-50h] BYREF
  struct _XLATEOBJ *v19; // [esp+34h] [ebp-4Ch]
  struct _SURFOBJ *v20; // [esp+38h] [ebp-48h]
  struct _SURFOBJ *v21; // [esp+3Ch] [ebp-44h]
  int v22; // [esp+40h] [ebp-40h] BYREF
  int v23; // [esp+44h] [ebp-3Ch] BYREF
  int v24; // [esp+48h] [ebp-38h] BYREF
  unsigned int v25; // [esp+4Ch] [ebp-34h] BYREF
  _DWORD v26[11]; // [esp+50h] [ebp-30h] BYREF

  v20 = a1;
  v21 = a2;
  v6 = 0;
  v19 = a4;
  v7 = 0;
  v23 = 1;
  v17 = 0;
  v18 = 0;
  v22 = 0;
  v24 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v12);
  v13 = 0;
  v15 = 0;
  v14 = 0;
  v16 = 0;
  memset(v26, 0, sizeof(v26));
  v8 = v12;
  if ( v12 )
  {
    if ( !*((_DWORD *)v12 + 58)
      || (!v19 ? (v9 = 96) : (v9 = 4 * v19->cEntries + 116),
          v25 = v9,
          v10 = UMPDOBJ::bThunkLargeBitmaps(
                  v12,
                  v20,
                  v21,
                  0,
                  &v13,
                  &v14,
                  &v15,
                  &v16,
                  0,
                  0,
                  &v17,
                  &v22,
                  &v18,
                  &v24,
                  0,
                  0,
                  &v25),
          v7 = v24,
          v25 = v10,
          (v23 = v10) != 0) )
    {
      v26[0] = 44;
      v26[1] = 19;
      v26[4] = *(_DWORD *)v8;
      v26[5] = v20;
      v26[6] = v21;
      v26[7] = a3;
      v26[8] = v19;
      v26[9] = a5;
      v26[10] = a6;
      if ( !UMPDOBJ::pso(v8, (UMPDOBJ *)((char *)v8 + 40), (struct _SURFOBJ **)&v26[5], v22)
        || !UMPDOBJ::pso(v8, (UMPDOBJ *)((char *)v8 + 48), (struct _SURFOBJ **)&v26[6], v7)
        || !UMPDOBJ::ThunkDDIOBJ(v8, (UMPDOBJ *)((char *)v8 + 64), (void **)&v26[7], 0x18u, 0)
        || !UMPDOBJ::pxlo(v8, (struct _XLATEOBJ **)&v26[8])
        || !UMPDOBJ::ThunkMemBlock(v8, (void **)&v26[9], (void *)0x10)
        || !UMPDOBJ::ThunkMemBlock(v8, (void **)&v26[10], (void *)8)
        || UMPDOBJ::Thunk(v8, v26, 0x2Cu, &v23, (char *)4) == -1
        || (v25 = 1, !v23) )
      {
        v25 = 0;
      }
    }
    if ( *((_DWORD *)v8 + 58) )
      UMPDOBJ::RestoreBitmaps(v8, v20, v21, 0, v13, v14, v15, v16, 0, 0, v17, v22, v18, v7, 0, 0);
    v6 = v25;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v12);
  return v6;
}
