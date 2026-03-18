/*
 * XREFs of ?vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z @ 0x213E8
 * Callers:
 *     _GreAccNotifyWindow@8 @ 0x20D36 (_GreAccNotifyWindow@8.c)
 *     _vAccNotifyDeleteSurfaceWrap@4 @ 0x9A326 (_vAccNotifyDeleteSurfaceWrap@4.c)
 *     _GreDwmShutdown@4 @ 0xCF60A (_GreDwmShutdown@4.c)
 *     _GreDwmStartup@4 @ 0xE1BEA (_GreDwmStartup@4.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vForceClientRgnUpdate@@YGXXZ @ 0x1E6558 (-vForceClientRgnUpdate@@YGXXZ.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 */

void __userpurge vAccNotify(int a1@<edx>, int a2@<ecx>, struct _SURFOBJ *a3, unsigned int a4, void *a5)
{
  int HDEV; // esi
  int v8; // eax
  _DWORD *i; // esi
  _DWORD *v10; // eax
  struct _SURFOBJ *DevBitmap; // eax
  void (__stdcall *v12)(int, int, struct _SURFOBJ *); // eax
  struct _DISPSURF *v13; // [esp+0h] [ebp-40h]
  struct _SURFOBJ *v14; // [esp+4h] [ebp-3Ch]
  void (__stdcall *v15)(struct _SURFOBJ *, int, struct _SURFOBJ *); // [esp+Ch] [ebp-34h] BYREF
  _BYTE v16[20]; // [esp+10h] [ebp-30h] BYREF
  _DWORD v17[3]; // [esp+24h] [ebp-1Ch] BYREF
  __int16 v18; // [esp+30h] [ebp-10h]

  HDEV = *(_DWORD *)(a2 + 12);
  if ( !HDEV )
    HDEV = UserGetHDEV();
  v15 = (void (__stdcall *)(struct _SURFOBJ *, int, struct _SURFOBJ *))HDEV;
  if ( HDEV )
  {
    v18 = 256;
    memset(v17, 0, sizeof(v17));
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v15);
    v8 = *(_DWORD *)(HDEV + 24);
    if ( (v8 & 0x20000000) != 0 )
    {
      for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
      {
        v10 = (_DWORD *)i[9];
        if ( v10 )
        {
          if ( (v10[280] & 0x8000000) != 0 && (v10[354] & 0x8000) != 0 )
          {
            v15 = *(void (__stdcall **)(struct _SURFOBJ *, int, struct _SURFOBJ *))(v10[276] + 388);
            if ( v15 )
            {
              DevBitmap = GetDevBitmap(v13, v14);
              v15(DevBitmap, a1, a3);
            }
          }
        }
      }
    }
    else if ( ((unsigned int)&loc_20000 & v8) == 0
           && (*(_DWORD *)(HDEV + 1120) & 0x8000000) != 0
           && (*(_DWORD *)(HDEV + 1416) & 0x8000) != 0 )
    {
      v12 = *(void (__stdcall **)(int, int, struct _SURFOBJ *))(*(_DWORD *)(HDEV + 1104) + 388);
      if ( v12 )
        v12(a2, a1, a3);
    }
    if ( gbWndobjUpdate && a1 == 5 )
    {
      gbWndobjUpdate = 0;
      vForceClientRgnUpdate();
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
    if ( v17[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v17);
  }
}
