/*
 * XREFs of ?UMPDDrvRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z @ 0x20E266
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QAEHPAPAU_XLATEOBJ@@@Z @ 0x1F467B (-pxlo@UMPDOBJ@@QAEHPAPAU_XLATEOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QAEXPAU_SURFOBJ@@00PAX11111HHHHHH@Z @ 0x20A8B4 (-RestoreBitmaps@UMPDOBJ@@QAEXPAU_SURFOBJ@@00PAX11111HHHHHH@Z.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00PAPAX11111PAH22222PAK@Z @ 0x21004C (-bThunkLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00PAPAX11111PAH22222PAK@Z.c)
 */

unsigned int __stdcall UMPDDrvRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  int v7; // ebx
  UMPDOBJ *v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // eax
  UMPDOBJ *v12; // [esp+10h] [ebp-7Ch] BYREF
  void *v13; // [esp+14h] [ebp-78h] BYREF
  void *v14; // [esp+18h] [ebp-74h] BYREF
  void *v15; // [esp+1Ch] [ebp-70h] BYREF
  void *v16; // [esp+20h] [ebp-6Ch] BYREF
  void *v17; // [esp+24h] [ebp-68h] BYREF
  void *v18; // [esp+28h] [ebp-64h] BYREF
  int v19; // [esp+2Ch] [ebp-60h] BYREF
  int v20; // [esp+30h] [ebp-5Ch] BYREF
  int v21; // [esp+34h] [ebp-58h] BYREF
  struct _XLATEOBJ *v22; // [esp+38h] [ebp-54h]
  struct _SURFOBJ *v23; // [esp+3Ch] [ebp-50h]
  struct _SURFOBJ *v24; // [esp+40h] [ebp-4Ch]
  struct _SURFOBJ *v25; // [esp+44h] [ebp-48h]
  int v26; // [esp+48h] [ebp-44h] BYREF
  int v27; // [esp+4Ch] [ebp-40h] BYREF
  int v28; // [esp+50h] [ebp-3Ch] BYREF
  int v29; // [esp+54h] [ebp-38h] BYREF
  unsigned int v30; // [esp+58h] [ebp-34h] BYREF
  _DWORD Src[11]; // [esp+5Ch] [ebp-30h] BYREF

  v23 = a2;
  v6 = 0;
  v24 = a3;
  v7 = 0;
  v25 = a4;
  v22 = a5;
  v28 = 1;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v12);
  v13 = 0;
  v15 = 0;
  v17 = 0;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  memset(Src, 0, sizeof(Src));
  v8 = v12;
  if ( v12 )
  {
    if ( !*((_DWORD *)v12 + 58)
      || (!v22 ? (v9 = 60) : (v9 = 4 * v22->cEntries + 80),
          v30 = v9,
          v10 = UMPDOBJ::bThunkLargeBitmaps(
                  v12,
                  v23,
                  v24,
                  v25,
                  &v13,
                  &v14,
                  &v15,
                  &v16,
                  &v17,
                  &v18,
                  &v19,
                  &v29,
                  &v20,
                  &v26,
                  &v21,
                  &v27,
                  &v30),
          v7 = v29,
          v30 = v10,
          (v28 = v10) != 0) )
    {
      Src[1] = 12;
      Src[0] = 44;
      Src[4] = *(_DWORD *)v8;
      Src[8] = a1;
      Src[5] = v23;
      Src[6] = v24;
      Src[7] = v25;
      Src[9] = v22;
      Src[10] = a6;
      if ( !UMPDOBJ::ThunkDDIOBJ(v8, (UMPDOBJ *)((char *)v8 + 80), (void **)&Src[8], 0xCu, 0)
        || !UMPDOBJ::pso(v8, (UMPDOBJ *)((char *)v8 + 40), (struct _SURFOBJ **)&Src[5], v7)
        || !UMPDOBJ::pso(v8, (UMPDOBJ *)((char *)v8 + 48), (struct _SURFOBJ **)&Src[6], v26)
        || !UMPDOBJ::pso(v8, (UMPDOBJ *)((char *)v8 + 56), (struct _SURFOBJ **)&Src[7], v27)
        || !UMPDOBJ::pxlo(v8, (struct _XLATEOBJ **)&Src[9])
        || UMPDOBJ::Thunk(v8, Src, 0x2Cu, &v28, (char *)4) == -1
        || (v30 = 1, !v28) )
      {
        v30 = 0;
      }
    }
    if ( *((_DWORD *)v8 + 58) )
      UMPDOBJ::RestoreBitmaps(v8, v23, v24, v25, v13, v14, v15, v16, v17, v18, v19, v7, v20, v26, v21, v27);
    v6 = v30;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v12);
  return v6;
}
