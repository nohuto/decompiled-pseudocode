/*
 * XREFs of ?BmpDevBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1F993A
 * Callers:
 *     ?BmpDevCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x1F9AA2 (-BmpDevCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z.c)
 * Callees:
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

struct _SURFOBJ *__stdcall BmpDevBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 a11)
{
  struct _SURFOBJ *v12; // ebx
  int v13; // eax
  int HDEV; // eax
  _DWORD *i; // ebx
  _DWORD *v16; // esi
  int v17; // eax
  int v18; // esi
  struct _DISPSURF *DevBitmap; // eax
  struct _SURFOBJ *v20; // eax
  int v22; // [esp-2Ch] [ebp-48h]
  struct _SURFOBJ *v23; // [esp-28h] [ebp-44h]
  int v24; // [esp-28h] [ebp-44h]
  int v25; // [esp-24h] [ebp-40h]
  struct SURFACE *v26; // [esp+0h] [ebp-1Ch]
  int v27; // [esp+8h] [ebp-14h] BYREF
  int v28; // [esp+Ch] [ebp-10h] BYREF
  int v29; // [esp+10h] [ebp-Ch] BYREF
  int v30; // [esp+14h] [ebp-8h] BYREF
  _DWORD *v31; // [esp+18h] [ebp-4h] BYREF
  struct _SURFOBJ *v32; // [esp+24h] [ebp+8h]

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v27, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v28, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v29, a3);
  if ( a1 )
  {
    v13 = ((int)a1[1].hsurf & 1) != 0
        ? (*((int (__stdcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, ROP4))a1->hdev
           + 493))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11)
        : EngBitBlt(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    v12 = (struct _SURFOBJ *)v13;
    v32 = (struct _SURFOBJ *)v13;
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 24) & 0x20000000) != 0 )
      {
        for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
        {
          v16 = (_DWORD *)i[9];
          v31 = v16;
          if ( v16 )
          {
            if ( (v16[280] & 0x8000000) != 0 )
            {
              v17 = v16[354];
              if ( (v17 & 0x1000) != 0 && (v17 & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v16[276] + 112) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v30,
                    (struct PDEVOBJ *)&v31,
                    a1);
                  v18 = v16[276];
                  DevBitmap = (struct _DISPSURF *)GetDevBitmap((struct _DISPSURF *)a3, (struct _SURFOBJ *)a4);
                  v20 = GetDevBitmap(DevBitmap, v23);
                  (*(void (__stdcall **)(struct _SURFOBJ *, int, int, int, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, ROP4))(v18 + 112))(
                    v20,
                    v22,
                    v24,
                    v25,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11);
                  if ( v30 )
                    *(_WORD *)(v30 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        v12 = v32;
      }
    }
  }
  if ( v29 )
    bBmpMakeOpaque(v26);
  if ( v28 )
    bBmpMakeOpaque(v26);
  if ( v27 )
    bBmpMakeOpaque(v26);
  return v12;
}
