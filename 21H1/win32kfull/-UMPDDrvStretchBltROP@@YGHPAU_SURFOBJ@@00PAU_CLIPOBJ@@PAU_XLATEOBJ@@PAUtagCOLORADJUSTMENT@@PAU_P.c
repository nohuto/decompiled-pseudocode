/*
 * XREFs of ?UMPDDrvStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAU_BRUSHOBJ@@K@Z @ 0x20EE29
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

unsigned int __stdcall UMPDDrvStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        struct _BRUSHOBJ *a12,
        unsigned int a13)
{
  unsigned int v13; // edi
  int v14; // ebx
  UMPDOBJ *v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v19; // [esp+10h] [ebp-B8h] BYREF
  int v20; // [esp+14h] [ebp-B4h] BYREF
  int v21; // [esp+18h] [ebp-B0h] BYREF
  int v22; // [esp+1Ch] [ebp-ACh] BYREF
  int v23; // [esp+20h] [ebp-A8h] BYREF
  struct _SURFOBJ *v24; // [esp+24h] [ebp-A4h]
  struct _SURFOBJ *v25; // [esp+28h] [ebp-A0h]
  struct _SURFOBJ *v26; // [esp+2Ch] [ebp-9Ch]
  struct _XLATEOBJ *v27; // [esp+30h] [ebp-98h]
  int v28; // [esp+34h] [ebp-94h] BYREF
  int v29; // [esp+38h] [ebp-90h] BYREF
  int v30; // [esp+3Ch] [ebp-8Ch] BYREF
  void *v31; // [esp+40h] [ebp-88h] BYREF
  void *v32; // [esp+44h] [ebp-84h] BYREF
  void *v33; // [esp+48h] [ebp-80h] BYREF
  void *v34; // [esp+4Ch] [ebp-7Ch] BYREF
  void *v35; // [esp+50h] [ebp-78h] BYREF
  void *v36; // [esp+54h] [ebp-74h] BYREF
  UMPDOBJ *v37; // [esp+58h] [ebp-70h] BYREF
  struct _CLIPOBJ *v38; // [esp+5Ch] [ebp-6Ch]
  struct tagCOLORADJUSTMENT *v39; // [esp+60h] [ebp-68h]
  struct _POINTL *v40; // [esp+64h] [ebp-64h]
  struct _RECTL *v41; // [esp+68h] [ebp-60h]
  struct _RECTL *v42; // [esp+6Ch] [ebp-5Ch]
  struct _POINTL *v43; // [esp+70h] [ebp-58h]
  struct _BRUSHOBJ *v44; // [esp+74h] [ebp-54h]
  _DWORD v45[19]; // [esp+78h] [ebp-50h] BYREF

  v26 = a1;
  v25 = a2;
  v24 = a3;
  v38 = a4;
  v27 = a5;
  v39 = a6;
  v40 = a7;
  v41 = a8;
  v13 = 0;
  v42 = a9;
  v14 = 0;
  v43 = a10;
  v44 = a12;
  v21 = 1;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v23 = 0;
  v20 = 0;
  v22 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v37);
  v36 = 0;
  v34 = 0;
  v32 = 0;
  v35 = 0;
  v33 = 0;
  v31 = 0;
  memset(v45, 0, 0x48u);
  v15 = v37;
  if ( v37 )
  {
    if ( !*((_DWORD *)v37 + 58)
      || (!v27 ? (v16 = 184) : (v16 = 4 * v27->cEntries + 204),
          v19 = v16,
          v17 = UMPDOBJ::bThunkLargeBitmaps(
                  v37,
                  v26,
                  v25,
                  v24,
                  &v36,
                  &v35,
                  &v34,
                  &v33,
                  &v32,
                  &v31,
                  &v30,
                  &v23,
                  &v29,
                  &v20,
                  &v28,
                  &v22,
                  &v19),
          v14 = v20,
          v19 = v17,
          (v21 = v17) != 0) )
    {
      v45[0] = 72;
      v45[1] = 69;
      v45[4] = *(_DWORD *)v15;
      v45[5] = v26;
      v45[6] = v25;
      v45[7] = v24;
      v45[8] = v38;
      v45[9] = v27;
      v45[10] = v39;
      v45[11] = v40;
      v45[12] = v41;
      v45[13] = v42;
      v45[14] = v43;
      v45[15] = a11;
      v45[16] = v44;
      v45[17] = a13;
      if ( !UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 40), (struct _SURFOBJ **)&v45[5], v23)
        || !UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 48), (struct _SURFOBJ **)&v45[6], v14)
        || !UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 56), (struct _SURFOBJ **)&v45[7], v22)
        || !UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 64), (void **)&v45[8], 0x18u, 0)
        || !UMPDOBJ::pxlo(v15, (struct _XLATEOBJ **)&v45[9])
        || !UMPDOBJ::ThunkMemBlock(v15, (void **)&v45[10], (void *)0x18)
        || !UMPDOBJ::ThunkMemBlock(v15, (void **)&v45[11], (void *)8)
        || !UMPDOBJ::ThunkMemBlock(v15, (void **)&v45[12], (void *)0x10)
        || !UMPDOBJ::ThunkMemBlock(v15, (void **)&v45[13], (void *)0x10)
        || !UMPDOBJ::ThunkMemBlock(v15, (void **)&v45[14], (void *)8)
        || !UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 80), (void **)&v45[16], 0xCu, 0)
        || UMPDOBJ::Thunk(v15, v45, 0x48u, &v21, (char *)4) == -1
        || (v19 = 1, !v21) )
      {
        v19 = 0;
      }
    }
    if ( *((_DWORD *)v15 + 58) )
      UMPDOBJ::RestoreBitmaps(v15, v26, v25, v24, v36, v35, v34, v33, v32, v31, v30, v23, v29, v14, v28, v22);
    v13 = v19;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v37);
  return v13;
}
