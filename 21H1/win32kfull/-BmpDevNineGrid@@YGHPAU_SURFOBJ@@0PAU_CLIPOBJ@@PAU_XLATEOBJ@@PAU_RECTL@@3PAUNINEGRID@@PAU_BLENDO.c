/*
 * XREFs of ?BmpDevNineGrid@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAUNINEGRID@@PAU_BLENDOBJ@@PAX@Z @ 0x1F9F3D
 * Callers:
 *     <none>
 * Callees:
 *     _EngNineGrid@36 @ 0x503DE (_EngNineGrid@36.c)
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

int __stdcall BmpDevNineGrid(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _SURFOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct NINEGRID *a7,
        struct _BLENDOBJ *a8,
        void *a9)
{
  struct _SURFOBJ *v9; // ebx
  int v10; // esi
  int HDEV; // eax
  _DWORD *v12; // edi
  struct _SURFOBJ *v13; // esi
  HDEV v14; // eax
  HDEV v15; // esi
  struct _DISPSURF *DevBitmap; // eax
  struct _SURFOBJ *v17; // eax
  int v19; // [esp-24h] [ebp-3Ch]
  struct _SURFOBJ *v20; // [esp-20h] [ebp-38h]
  int v21; // [esp-20h] [ebp-38h]
  int v22; // [esp-1Ch] [ebp-34h]
  struct _RECTL *v23; // [esp-18h] [ebp-30h]
  struct _RECTL *v24; // [esp-14h] [ebp-2Ch]
  struct NINEGRID *v25; // [esp-10h] [ebp-28h]
  struct _BLENDOBJ *v26; // [esp-Ch] [ebp-24h]
  void *v27; // [esp-8h] [ebp-20h]
  struct SURFACE *v28; // [esp+0h] [ebp-18h]
  int v29; // [esp+8h] [ebp-10h] BYREF
  int v30; // [esp+Ch] [ebp-Ch] BYREF
  int v31; // [esp+10h] [ebp-8h]
  int v32; // [esp+14h] [ebp-4h] BYREF

  v9 = a1;
  v10 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v29, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v30, a2);
  if ( v9 )
  {
    v10 = EngNineGrid((int)v9, (int)a2, (int)a3, (int)a4, (int)a5, (int)a6, (int)a7, (int)a8, (int)a9);
    v31 = v10;
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 24) & 0x20000000) != 0 )
      {
        v12 = **(_DWORD ***)(HDEV + 1108);
        if ( v12 )
        {
          do
          {
            v13 = (struct _SURFOBJ *)v12[9];
            a1 = v13;
            if ( v13 )
            {
              if ( ((int)v13[21].pvBits & 0x8000000) != 0 )
              {
                v14 = v13[27].hdev;
                if ( ((unsigned __int16)v14 & 0x1000) != 0 && ((unsigned __int16)v14 & 0x8000) != 0 )
                {
                  if ( *((_DWORD *)v13[21].hdev + 101) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v32,
                      (struct PDEVOBJ *)&a1,
                      v9);
                    v27 = a9;
                    v15 = v13[21].hdev;
                    v26 = a8;
                    v25 = a7;
                    v24 = a6;
                    v23 = a5;
                    DevBitmap = (struct _DISPSURF *)GetDevBitmap((struct _DISPSURF *)a3, a4);
                    v17 = GetDevBitmap(DevBitmap, v20);
                    (*((void (__stdcall **)(struct _SURFOBJ *, int, int, int, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))v15
                     + 101))(
                      v17,
                      v19,
                      v21,
                      v22,
                      v23,
                      v24,
                      v25,
                      v26,
                      v27);
                    if ( v32 )
                      *(_WORD *)(v32 + 50) &= ~0x8000u;
                  }
                }
              }
            }
            v12 = (_DWORD *)*v12;
          }
          while ( v12 );
          v10 = v31;
        }
      }
    }
  }
  if ( v30 )
    bBmpMakeOpaque(v28);
  if ( v29 )
    bBmpMakeOpaque(v28);
  return v10;
}
