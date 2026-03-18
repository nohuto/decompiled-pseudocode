/*
 * XREFs of ?BmpDevAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x1F97FC
 * Callers:
 *     <none>
 * Callees:
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

struct _SURFOBJ *__stdcall BmpDevAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  struct _SURFOBJ *v8; // ebx
  int v9; // eax
  int HDEV; // eax
  _DWORD *i; // ebx
  _DWORD *v12; // esi
  int v13; // eax
  int v14; // esi
  struct _DISPSURF *DevBitmap; // eax
  struct _SURFOBJ *v16; // eax
  int v18; // [esp-1Ch] [ebp-34h]
  struct _SURFOBJ *v19; // [esp-18h] [ebp-30h]
  int v20; // [esp-18h] [ebp-30h]
  int v21; // [esp-14h] [ebp-2Ch]
  struct SURFACE *v22; // [esp+0h] [ebp-18h]
  int v23; // [esp+8h] [ebp-10h] BYREF
  int v24; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v26; // [esp+14h] [ebp-4h] BYREF
  struct _SURFOBJ *v27; // [esp+20h] [ebp+8h]

  v8 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v23, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a2);
  if ( a1 )
  {
    v9 = ((int)a1[1].hsurf & 0x10000) != 0
       ? (*((int (__stdcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))a1->hdev
          + 546))(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7)
       : EngAlphaBlend(a1, a2, a3, a4, a5, a6, a7);
    v8 = (struct _SURFOBJ *)v9;
    v27 = (struct _SURFOBJ *)v9;
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 24) & 0x20000000) != 0 )
      {
        for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
        {
          v12 = (_DWORD *)i[9];
          v26 = v12;
          if ( v12 )
          {
            if ( (v12[280] & 0x8000000) != 0 )
            {
              v13 = v12[354];
              if ( (v13 & 0x1000) != 0 && (v13 & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v12[276] + 324) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&v26,
                    a1);
                  v14 = v12[276];
                  DevBitmap = (struct _DISPSURF *)GetDevBitmap((struct _DISPSURF *)a3, (struct _SURFOBJ *)a4);
                  v16 = GetDevBitmap(DevBitmap, v19);
                  (*(void (__stdcall **)(struct _SURFOBJ *, int, int, int, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))(v14 + 324))(
                    v16,
                    v18,
                    v20,
                    v21,
                    a5,
                    a6,
                    a7);
                  if ( v25 )
                    *(_WORD *)(v25 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        v8 = v27;
      }
    }
  }
  if ( v24 )
    bBmpMakeOpaque(v22);
  if ( v23 )
    bBmpMakeOpaque(v22);
  return v8;
}
