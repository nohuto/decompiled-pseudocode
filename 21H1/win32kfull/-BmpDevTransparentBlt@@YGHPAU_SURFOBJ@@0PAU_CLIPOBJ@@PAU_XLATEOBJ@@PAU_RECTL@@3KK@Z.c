/*
 * XREFs of ?BmpDevTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x1FA671
 * Callers:
 *     <none>
 * Callees:
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

struct _SURFOBJ *__stdcall BmpDevTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        ULONG a7,
        ULONG a8)
{
  struct _SURFOBJ *v9; // ebx
  int v10; // eax
  int HDEV; // eax
  _DWORD *i; // ebx
  _DWORD *v13; // esi
  int v14; // eax
  int v15; // esi
  struct _DISPSURF *DevBitmap; // eax
  struct _SURFOBJ *v17; // eax
  int v19; // [esp-20h] [ebp-38h]
  struct _SURFOBJ *v20; // [esp-1Ch] [ebp-34h]
  int v21; // [esp-1Ch] [ebp-34h]
  int v22; // [esp-18h] [ebp-30h]
  struct SURFACE *v23; // [esp+0h] [ebp-18h]
  int v24; // [esp+8h] [ebp-10h] BYREF
  int v25; // [esp+Ch] [ebp-Ch] BYREF
  int v26; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v27; // [esp+14h] [ebp-4h] BYREF
  struct _SURFOBJ *v28; // [esp+20h] [ebp+8h]

  v9 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v25, a2);
  if ( a1 )
  {
    v10 = ((int)a1[1].hsurf & 0x8000) != 0
        ? (*((int (__stdcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, ULONG, ULONG))a1->hdev
           + 549))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8)
        : EngTransparentBlt(a1, a2, a3, a4, a5, a6, a7, a8);
    v9 = (struct _SURFOBJ *)v10;
    v28 = (struct _SURFOBJ *)v10;
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 24) & 0x20000000) != 0 )
      {
        for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
        {
          v13 = (_DWORD *)i[9];
          v27 = v13;
          if ( v13 )
          {
            if ( (v13[280] & 0x8000000) != 0 )
            {
              v14 = v13[354];
              if ( (v14 & 0x1000) != 0 && (v14 & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v13[276] + 336) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v26,
                    (struct PDEVOBJ *)&v27,
                    a1);
                  v15 = v13[276];
                  DevBitmap = (struct _DISPSURF *)GetDevBitmap((struct _DISPSURF *)a3, (struct _SURFOBJ *)a4);
                  v17 = GetDevBitmap(DevBitmap, v20);
                  (*(void (__stdcall **)(struct _SURFOBJ *, int, int, int, struct _RECTL *, struct _RECTL *, ULONG, ULONG))(v15 + 336))(
                    v17,
                    v19,
                    v21,
                    v22,
                    a5,
                    a6,
                    a7,
                    a8);
                  if ( v26 )
                    *(_WORD *)(v26 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        v9 = v28;
      }
    }
  }
  if ( v25 )
    bBmpMakeOpaque(v23);
  if ( v24 )
    bBmpMakeOpaque(v23);
  return v9;
}
