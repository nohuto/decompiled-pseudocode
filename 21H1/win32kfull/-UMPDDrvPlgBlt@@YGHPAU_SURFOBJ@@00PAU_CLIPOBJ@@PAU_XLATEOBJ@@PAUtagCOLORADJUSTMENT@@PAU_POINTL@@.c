/*
 * XREFs of ?UMPDDrvPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_POINTFIX@@PAU_RECTL@@4K@Z @ 0x20D42F
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

unsigned int __stdcall UMPDDrvPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _POINTFIX *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // edi
  int v12; // ebx
  UMPDOBJ *v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v17; // [esp+Ch] [ebp-ACh] BYREF
  int v18; // [esp+10h] [ebp-A8h] BYREF
  int v19; // [esp+14h] [ebp-A4h] BYREF
  int v20; // [esp+18h] [ebp-A0h] BYREF
  int v21; // [esp+1Ch] [ebp-9Ch] BYREF
  struct _SURFOBJ *v22; // [esp+20h] [ebp-98h]
  struct _SURFOBJ *v23; // [esp+24h] [ebp-94h]
  struct _SURFOBJ *v24; // [esp+28h] [ebp-90h]
  struct _XLATEOBJ *v25; // [esp+2Ch] [ebp-8Ch]
  int v26; // [esp+30h] [ebp-88h] BYREF
  int v27; // [esp+34h] [ebp-84h] BYREF
  int v28; // [esp+38h] [ebp-80h] BYREF
  void *v29; // [esp+3Ch] [ebp-7Ch] BYREF
  void *v30; // [esp+40h] [ebp-78h] BYREF
  void *v31; // [esp+44h] [ebp-74h] BYREF
  void *v32; // [esp+48h] [ebp-70h] BYREF
  void *v33; // [esp+4Ch] [ebp-6Ch] BYREF
  void *v34; // [esp+50h] [ebp-68h] BYREF
  UMPDOBJ *v35; // [esp+54h] [ebp-64h] BYREF
  struct _CLIPOBJ *v36; // [esp+58h] [ebp-60h]
  struct tagCOLORADJUSTMENT *v37; // [esp+5Ch] [ebp-5Ch]
  struct _POINTL *v38; // [esp+60h] [ebp-58h]
  struct _POINTFIX *v39; // [esp+64h] [ebp-54h]
  struct _RECTL *v40; // [esp+68h] [ebp-50h]
  struct _POINTL *v41; // [esp+6Ch] [ebp-4Ch]
  _DWORD v42[17]; // [esp+70h] [ebp-48h] BYREF

  v24 = a1;
  v23 = a2;
  v22 = a3;
  v36 = a4;
  v25 = a5;
  v37 = a6;
  v38 = a7;
  v11 = 0;
  v39 = a8;
  v12 = 0;
  v40 = a9;
  v41 = a10;
  v19 = 1;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v21 = 0;
  v18 = 0;
  v20 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v35);
  v34 = 0;
  v32 = 0;
  v30 = 0;
  v33 = 0;
  v31 = 0;
  v29 = 0;
  memset(v42, 0, 0x40u);
  v13 = v35;
  if ( v35 )
  {
    if ( !*((_DWORD *)v35 + 58)
      || (!v25 ? (v14 = 172) : (v14 = 4 * v25->cEntries + 192),
          v17 = v14,
          v15 = UMPDOBJ::bThunkLargeBitmaps(
                  v35,
                  v24,
                  v23,
                  v22,
                  &v34,
                  &v33,
                  &v32,
                  &v31,
                  &v30,
                  &v29,
                  &v28,
                  &v21,
                  &v27,
                  &v18,
                  &v26,
                  &v20,
                  &v17),
          v12 = v18,
          v17 = v15,
          (v19 = v15) != 0) )
    {
      v42[0] = 64;
      v42[1] = 70;
      v42[4] = *(_DWORD *)v13;
      v42[5] = v24;
      v42[6] = v23;
      v42[7] = v22;
      v42[8] = v36;
      v42[9] = v25;
      v42[10] = v37;
      v42[11] = v38;
      v42[12] = v39;
      v42[13] = v40;
      v42[14] = v41;
      v42[15] = a11;
      if ( !UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 40), (struct _SURFOBJ **)&v42[5], v21)
        || !UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 48), (struct _SURFOBJ **)&v42[6], v12)
        || !UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 56), (struct _SURFOBJ **)&v42[7], v20)
        || !UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 64), (void **)&v42[8], 0x18u, 0)
        || !UMPDOBJ::pxlo(v13, (struct _XLATEOBJ **)&v42[9])
        || !UMPDOBJ::ThunkMemBlock(v13, (void **)&v42[10], (void *)0x18)
        || !UMPDOBJ::ThunkMemBlock(v13, (void **)&v42[11], (void *)8)
        || !UMPDOBJ::ThunkMemBlock(v13, (void **)&v42[12], (void *)0x18)
        || !UMPDOBJ::ThunkMemBlock(v13, (void **)&v42[13], (void *)0x10)
        || !UMPDOBJ::ThunkMemBlock(v13, (void **)&v42[14], (void *)8)
        || UMPDOBJ::Thunk(v13, v42, 0x40u, &v19, (char *)4) == -1
        || (v17 = 1, !v19) )
      {
        v17 = 0;
      }
    }
    if ( *((_DWORD *)v13 + 58) )
      UMPDOBJ::RestoreBitmaps(v13, v24, v23, v22, v34, v33, v32, v31, v30, v29, v28, v21, v27, v12, v26, v20);
    v11 = v17;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v35);
  return v11;
}
