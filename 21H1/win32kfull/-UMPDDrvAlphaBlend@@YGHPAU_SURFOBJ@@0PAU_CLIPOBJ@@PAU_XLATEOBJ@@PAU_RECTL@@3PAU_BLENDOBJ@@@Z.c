/*
 * XREFs of ?UMPDDrvAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x20AB7F
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

unsigned int __stdcall UMPDDrvAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  unsigned int v7; // edi
  int v8; // ebx
  UMPDOBJ *v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v13; // [esp+Ch] [ebp-7Ch] BYREF
  int v14; // [esp+10h] [ebp-78h] BYREF
  int v15; // [esp+14h] [ebp-74h] BYREF
  int v16; // [esp+18h] [ebp-70h] BYREF
  struct _SURFOBJ *v17; // [esp+1Ch] [ebp-6Ch]
  struct _SURFOBJ *v18; // [esp+20h] [ebp-68h]
  struct _XLATEOBJ *v19; // [esp+24h] [ebp-64h]
  int v20; // [esp+28h] [ebp-60h] BYREF
  int v21; // [esp+2Ch] [ebp-5Ch] BYREF
  void *v22; // [esp+30h] [ebp-58h] BYREF
  void *v23; // [esp+34h] [ebp-54h] BYREF
  void *v24; // [esp+38h] [ebp-50h] BYREF
  void *v25; // [esp+3Ch] [ebp-4Ch] BYREF
  UMPDOBJ *v26; // [esp+40h] [ebp-48h] BYREF
  struct _CLIPOBJ *v27; // [esp+44h] [ebp-44h]
  struct _RECTL *v28; // [esp+48h] [ebp-40h]
  struct _RECTL *v29; // [esp+4Ch] [ebp-3Ch]
  struct _BLENDOBJ *v30; // [esp+50h] [ebp-38h]
  _DWORD v31[12]; // [esp+54h] [ebp-34h] BYREF

  v18 = a1;
  v17 = a2;
  v27 = a3;
  v19 = a4;
  v7 = 0;
  v28 = a5;
  v8 = 0;
  v29 = a6;
  v30 = a7;
  v15 = 1;
  v21 = 0;
  v20 = 0;
  v16 = 0;
  v14 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v26);
  v25 = 0;
  v23 = 0;
  v24 = 0;
  v22 = 0;
  memset(v31, 0, sizeof(v31));
  v9 = v26;
  if ( v26 )
  {
    if ( !*((_DWORD *)v26 + 58)
      || (!v19 ? (v10 = 112) : (v10 = 4 * v19->cEntries + 132),
          v13 = v10,
          v11 = UMPDOBJ::bThunkLargeBitmaps(
                  v26,
                  v18,
                  v17,
                  0,
                  &v25,
                  &v24,
                  &v23,
                  &v22,
                  0,
                  0,
                  &v21,
                  &v16,
                  &v20,
                  &v14,
                  0,
                  0,
                  &v13),
          v8 = v14,
          v13 = v11,
          (v15 = v11) != 0) )
    {
      v31[0] = 48;
      v31[1] = 71;
      v31[4] = *(_DWORD *)v9;
      v31[5] = v18;
      v31[6] = v17;
      v31[7] = v27;
      v31[8] = v19;
      v31[9] = v28;
      v31[10] = v29;
      v31[11] = v30;
      if ( !UMPDOBJ::pso(v9, (UMPDOBJ *)((char *)v9 + 40), (struct _SURFOBJ **)&v31[5], v16)
        || !UMPDOBJ::pso(v9, (UMPDOBJ *)((char *)v9 + 48), (struct _SURFOBJ **)&v31[6], v8)
        || !UMPDOBJ::ThunkDDIOBJ(v9, (UMPDOBJ *)((char *)v9 + 64), (void **)&v31[7], 0x18u, 0)
        || !UMPDOBJ::pxlo(v9, (struct _XLATEOBJ **)&v31[8])
        || !UMPDOBJ::ThunkMemBlock(v9, (void **)&v31[9], (void *)0x10)
        || !UMPDOBJ::ThunkMemBlock(v9, (void **)&v31[10], (void *)0x10)
        || !UMPDOBJ::ThunkDDIOBJ(v9, (UMPDOBJ *)((char *)v9 + 160), (void **)&v31[11], 4u, 0)
        || UMPDOBJ::Thunk(v9, v31, 0x30u, &v15, (char *)4) == -1
        || (v13 = 1, !v15) )
      {
        v13 = 0;
      }
    }
    if ( *((_DWORD *)v9 + 58) )
      UMPDOBJ::RestoreBitmaps(v9, v18, v17, 0, v25, v24, v23, v22, 0, 0, v21, v16, v20, v8, 0, 0);
    v7 = v13;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v26);
  return v7;
}
