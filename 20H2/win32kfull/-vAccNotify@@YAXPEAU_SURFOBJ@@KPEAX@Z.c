/*
 * XREFs of ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C000E204
 * Callers:
 *     GreDwmStartup @ 0x1C000D5DC (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C000E080 (GreDwmShutdown.c)
 *     GreAccNotifyWindow @ 0x1C000E198 (GreAccNotifyWindow.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00F8310 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286094 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029A244 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

void __fastcall vAccNotify(struct _SURFOBJ *a1, unsigned int a2, void *a3)
{
  HDEV hdev; // rbx
  int v7; // eax
  struct _DISPSURF *i; // rbx
  __int64 v9; // rax
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v11)(struct _SURFOBJ *, _QWORD, void *); // r10
  void (__fastcall *v12)(struct _SURFOBJ *, _QWORD, void *); // rax
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  HDEV v14; // [rsp+30h] [rbp-40h]
  int v15; // [rsp+38h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+48h] [rbp-28h]
  int v18; // [rsp+4Ch] [rbp-24h]
  __int16 v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]

  hdev = a1->hdev;
  if ( hdev || (hdev = (HDEV)UserGetHDEV()) != 0LL )
  {
    v17 = 0;
    v18 = 0;
    v21 = 0LL;
    v20 = 0LL;
    v16 = 0LL;
    v13 = 0LL;
    v19 = 256;
    v15 = 1;
    v7 = *((_DWORD *)hdev + 10);
    if ( (v7 & 1) != 0 )
    {
      *(_QWORD *)&v13 = *((_QWORD *)hdev + 6);
      v14 = hdev;
      GreAcquireSemaphore(v13);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v13, 11LL);
      v7 = *((_DWORD *)hdev + 10);
    }
    if ( (v7 & 0x20000000) != 0 )
    {
      for ( i = (struct _DISPSURF *)**((_QWORD **)hdev + 225); i; i = *(struct _DISPSURF **)i )
      {
        v9 = *((_QWORD *)i + 6);
        if ( v9
          && (*(_DWORD *)(v9 + 1824) & 0x8000000) != 0
          && (*(_DWORD *)(v9 + 2128) & 0x8000) != 0
          && *(_QWORD *)(*(_QWORD *)(v9 + 1792) + 760LL) )
        {
          DevBitmap = GetDevBitmap(i, a1);
          v11(DevBitmap, a2, a3);
        }
      }
    }
    else if ( (v7 & 0x20000) == 0 && ((_DWORD)hdev[456] & 0x8000000) != 0 && ((_DWORD)hdev[532] & 0x8000) != 0 )
    {
      v12 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, void *))(*((_QWORD *)hdev + 224) + 760LL);
      if ( v12 )
        v12(a1, a2, a3);
    }
    if ( gbWndobjUpdate && a2 == 5 )
    {
      gbWndobjUpdate = 0;
      vForceClientRgnUpdate();
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v13);
    if ( v16 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v16);
  }
}
