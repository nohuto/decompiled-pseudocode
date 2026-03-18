/*
 * XREFs of ?BmpDevPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_POINTFIX@@PAU_RECTL@@4K@Z @ 0x1FA075
 * Callers:
 *     <none>
 * Callees:
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

struct _SURFOBJ *__stdcall BmpDevPlgBlt(
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
        ULONG a11)
{
  struct _SURFOBJ *v12; // ebx
  int v13; // eax
  int HDEV; // eax
  _DWORD *i; // ebx
  _DWORD *v16; // esi
  int v17; // eax
  int v18; // esi
  struct _DISPSURF *DevBitmap; // eax
  struct _DISPSURF *v20; // eax
  struct _SURFOBJ *v21; // eax
  int v23; // [esp-2Ch] [ebp-48h]
  struct _SURFOBJ *v24; // [esp-28h] [ebp-44h]
  int v25; // [esp-28h] [ebp-44h]
  struct _SURFOBJ *v26; // [esp-24h] [ebp-40h]
  int v27; // [esp-24h] [ebp-40h]
  int v28; // [esp-20h] [ebp-3Ch]
  struct SURFACE *v29; // [esp+0h] [ebp-1Ch]
  int v30; // [esp+8h] [ebp-14h] BYREF
  int v31; // [esp+Ch] [ebp-10h] BYREF
  int v32; // [esp+10h] [ebp-Ch] BYREF
  int v33; // [esp+14h] [ebp-8h] BYREF
  _DWORD *v34; // [esp+18h] [ebp-4h] BYREF
  struct _SURFOBJ *v35; // [esp+24h] [ebp+8h]

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v30, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v31, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v32, a3);
  if ( a1 )
  {
    v13 = ((int)a1[1].hsurf & 4) != 0
        ? (*((int (__stdcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _POINTFIX *, struct _RECTL *, struct _POINTL *, ULONG))a1->hdev
           + 545))(
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
        : EngPlgBlt(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    v12 = (struct _SURFOBJ *)v13;
    v35 = (struct _SURFOBJ *)v13;
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 24) & 0x20000000) != 0 )
      {
        for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
        {
          v16 = (_DWORD *)i[9];
          v34 = v16;
          if ( v16 )
          {
            if ( (v16[280] & 0x8000000) != 0 )
            {
              v17 = v16[354];
              if ( (v17 & 0x1000) != 0 && (v17 & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v16[276] + 320) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v33,
                    (struct PDEVOBJ *)&v34,
                    a1);
                  v18 = v16[276];
                  DevBitmap = (struct _DISPSURF *)GetDevBitmap((struct _DISPSURF *)a4, (struct _SURFOBJ *)a5);
                  v20 = (struct _DISPSURF *)GetDevBitmap(DevBitmap, v26);
                  v21 = GetDevBitmap(v20, v24);
                  (*(void (__stdcall **)(struct _SURFOBJ *, int, int, int, int, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _POINTFIX *, struct _RECTL *, struct _POINTL *, ULONG))(v18 + 320))(
                    v21,
                    v23,
                    v25,
                    v27,
                    v28,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11);
                  if ( v33 )
                    *(_WORD *)(v33 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        v12 = v35;
      }
    }
  }
  if ( v32 )
    bBmpMakeOpaque(v29);
  if ( v31 )
    bBmpMakeOpaque(v29);
  if ( v30 )
    bBmpMakeOpaque(v29);
  return v12;
}
