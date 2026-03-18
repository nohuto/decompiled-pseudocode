/*
 * XREFs of ?RedirDrawEscape@@YGKPAU_SURFOBJ@@KPAU_CLIPOBJ@@PAU_RECTL@@KPAX@Z @ 0x1FB1A9
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

unsigned int __stdcall RedirDrawEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        void *a6)
{
  int HDEV; // esi
  _DWORD *i; // ebx
  _DWORD *v8; // esi
  struct SURFACE *v10; // [esp+8h] [ebp-48h]
  _DWORD *v11; // [esp+14h] [ebp-3Ch] BYREF
  int v12; // [esp+18h] [ebp-38h] BYREF
  int v13; // [esp+1Ch] [ebp-34h] BYREF
  _BYTE v14[20]; // [esp+20h] [ebp-30h] BYREF
  _DWORD v15[3]; // [esp+34h] [ebp-1Ch] BYREF
  __int16 v16; // [esp+40h] [ebp-10h]

  REDIROPEN::REDIROPEN((REDIROPEN *)&v13, (struct SURFACE *)a1, a1);
  if ( a1 )
  {
    if ( ((int)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v11 = (_DWORD *)HDEV;
      if ( HDEV )
      {
        v16 = 256;
        memset(v15, 0, sizeof(v15));
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v14, (struct PDEVOBJ *)&v11);
        if ( ((unsigned int)&loc_20000 & *(_DWORD *)(HDEV + 24)) != 0 )
        {
          for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
          {
            v8 = (_DWORD *)i[9];
            v11 = v8;
            if ( v8 )
            {
              if ( (v8[280] & 0x8000000) != 0 && (v8[354] & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v8[276] + 140) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v12,
                    (struct PDEVOBJ *)&v11,
                    a1);
                  (*(void (__stdcall **)(struct _SURFOBJ *, unsigned int, struct _CLIPOBJ *, struct _RECTL *, unsigned int, void *))(v8[276] + 140))(
                    a1,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6);
                  if ( v12 )
                    *(_WORD *)(v12 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
        if ( v15[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v15);
      }
    }
  }
  if ( v13 )
    bMakeOpaque(v10);
  return 0;
}
