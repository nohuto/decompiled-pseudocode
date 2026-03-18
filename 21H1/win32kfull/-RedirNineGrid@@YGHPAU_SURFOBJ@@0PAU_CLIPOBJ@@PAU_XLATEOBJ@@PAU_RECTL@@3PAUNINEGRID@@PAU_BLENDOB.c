/*
 * XREFs of ?RedirNineGrid@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAUNINEGRID@@PAU_BLENDOBJ@@PAX@Z @ 0x1FB819
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     _EngNineGrid@36 @ 0x503DE (_EngNineGrid@36.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

int __userpurge RedirNineGrid@<eax>(
        struct SURFACE *a1@<edi>,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7,
        struct NINEGRID *a8,
        struct _BLENDOBJ *a9,
        void *a10)
{
  int HDEV; // esi
  _DWORD *i; // edi
  _DWORD *v12; // esi
  int v13; // esi
  struct _SURFOBJ *v14; // eax
  int v15; // esi
  struct _SURFOBJ *DevBitmap; // [esp-10h] [ebp-70h]
  struct SURFACE *v18; // [esp+10h] [ebp-50h]
  _DWORD *v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch] BYREF
  int v21; // [esp+28h] [ebp-38h] BYREF
  int v22; // [esp+2Ch] [ebp-34h] BYREF
  _BYTE v23[20]; // [esp+30h] [ebp-30h] BYREF
  _DWORD v24[3]; // [esp+44h] [ebp-1Ch] BYREF
  __int16 v25; // [esp+50h] [ebp-10h]

  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a1, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v21, a1, a3);
  if ( a2 )
  {
    if ( ((int)a2[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v19 = (_DWORD *)HDEV;
      if ( HDEV )
      {
        v25 = 256;
        memset(v24, 0, sizeof(v24));
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&v19);
        if ( ((unsigned int)&loc_20000 & *(_DWORD *)(HDEV + 24)) != 0 )
        {
          for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
          {
            v12 = (_DWORD *)i[9];
            v19 = v12;
            if ( v12 )
            {
              if ( (v12[280] & 0x8000000) != 0 && (v12[354] & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v12[276] + 404) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v20,
                    (struct PDEVOBJ *)&v19,
                    a2);
                  v13 = v12[276];
                  DevBitmap = GetDevBitmap((int)i, (int)a3);
                  v14 = GetDevBitmap((int)i, (int)a2);
                  (*(void (__stdcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(v13 + 404))(
                    v14,
                    DevBitmap,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10);
                  if ( v20 )
                    *(_WORD *)(v20 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
        if ( v24[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v24);
      }
    }
  }
  v15 = EngNineGrid((int)a2, (int)a3, (int)a4, (int)a5, (int)a6, (int)a7, (int)a8, (int)a9, (int)a10);
  if ( v21 )
    bMakeOpaque(v18);
  if ( v22 )
    bMakeOpaque(v18);
  return v15;
}
