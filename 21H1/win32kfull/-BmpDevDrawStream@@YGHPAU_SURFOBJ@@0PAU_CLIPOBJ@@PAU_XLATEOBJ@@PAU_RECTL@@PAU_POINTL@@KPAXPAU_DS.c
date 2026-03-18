/*
 * XREFs of ?BmpDevDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x1F9ACD
 * Callers:
 *     <none>
 * Callees:
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

int __stdcall BmpDevDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _SURFOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        _DWORD *a8,
        struct _DSSTATE *a9)
{
  int v10; // ebx
  HDEV hdev; // eax
  int (__stdcall *v12)(int, int, int, int, int, int *, unsigned int, _DWORD *, struct _DSSTATE *); // ecx
  int v13; // eax
  _DWORD *i; // ebx
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // esi
  struct _DISPSURF *DevBitmap; // eax
  struct _SURFOBJ *v19; // eax
  int v21; // [esp-24h] [ebp-3Ch]
  struct _SURFOBJ *v22; // [esp-20h] [ebp-38h]
  int v23; // [esp-20h] [ebp-38h]
  int v24; // [esp-1Ch] [ebp-34h]
  struct SURFACE *v25; // [esp+0h] [ebp-18h]
  int v26; // [esp+8h] [ebp-10h] BYREF
  int v27; // [esp+Ch] [ebp-Ch] BYREF
  int v28; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v29; // [esp+14h] [ebp-4h] BYREF
  struct _SURFOBJ *v30; // [esp+20h] [ebp+8h]

  v10 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v27, a2);
  if ( a1 )
  {
    hdev = a1->hdev;
    v12 = (int (__stdcall *)(int, int, int, int, int, int *, unsigned int, _DWORD *, struct _DSSTATE *))*((_DWORD *)hdev + 565);
    if ( !v12 )
      v12 = (int (__stdcall *)(int, int, int, int, int, int *, unsigned int, _DWORD *, struct _DSSTATE *))EngDrawStream;
    if ( (int)a1[1].hsurf >= 0 && (((unsigned int)&loc_20000 & (_DWORD)hdev[6]) == 0 || a1->iType != 3) )
      v12 = (int (__stdcall *)(int, int, int, int, int, int *, unsigned int, _DWORD *, struct _DSSTATE *))EngDrawStream;
    v10 = v12((int)a1, (int)a2, (int)a3, (int)a4, (int)a5, &a6->x, a7, a8, a9);
    v30 = (struct _SURFOBJ *)v10;
    v13 = UserGetHDEV();
    if ( v13 && (*(_DWORD *)(v13 + 24) & 0x20000000) != 0 )
    {
      for ( i = **(_DWORD ***)(v13 + 1108); i; i = (_DWORD *)*i )
      {
        v15 = (_DWORD *)i[9];
        v29 = v15;
        if ( v15 )
        {
          if ( (v15[280] & 0x8000000) != 0 )
          {
            v16 = v15[354];
            if ( (v16 & 0x1000) != 0 && (v16 & 0x8000) != 0 )
            {
              if ( *(_DWORD *)(v15[276] + 400) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v28,
                  (struct PDEVOBJ *)&v29,
                  a1);
                v17 = v15[276];
                DevBitmap = (struct _DISPSURF *)GetDevBitmap((struct _DISPSURF *)a3, a4);
                v19 = GetDevBitmap(DevBitmap, v22);
                (*(void (__stdcall **)(struct _SURFOBJ *, int, int, int, struct _RECTL *, struct _POINTL *, unsigned int, _DWORD *, struct _DSSTATE *))(v17 + 400))(
                  v19,
                  v21,
                  v23,
                  v24,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9);
                if ( v28 )
                  *(_WORD *)(v28 + 50) &= ~0x8000u;
              }
            }
          }
        }
      }
      v10 = (int)v30;
    }
  }
  if ( v27 )
    bBmpMakeOpaque(v25);
  if ( v26 )
    bBmpMakeOpaque(v25);
  return v10;
}
