/*
 * XREFs of _GreAddBitmapD3DDirtyRgn@12 @ 0xB93E6
 * Callers:
 *     _DxgkEngAddRedirBitmapD3DDirtyRgn@8 @ 0xB9366 (_DxgkEngAddRedirBitmapD3DDirtyRgn@8.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z @ 0x25270 (-bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ @ 0x25308 (-bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ.c)
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 */

struct DwmState *__fastcall GreAddBitmapD3DDirtyRgn(void *a1, int a2, struct _RECTL *a3)
{
  struct DwmState *result; // eax
  int v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edi
  SFMLOGICALSURFACE *v10; // ebx
  _DWORD *v11; // ecx
  _DWORD *v13; // edi
  int v14; // eax
  struct SFMLOGICALSURFACE *v15; // eax
  unsigned __int64 v16; // [esp+0h] [ebp-20h]
  SFMLOGICALSURFACE *v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  struct HDC__ v20; // [esp+1Ch] [ebp-4h] BYREF

  result = g_pDwmState;
  v19 = 0;
  v20.unused = 0;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
    v5 = 0;
    v6 = DWMALTSPRITEREF::hspLookupWindow(a1);
    if ( v6 )
    {
      LOBYTE(v7) = 15;
      v8 = HmgShareLockCheck(v6, v7);
      v5 = v8;
      if ( !v8 )
      {
LABEL_24:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
        return (struct DwmState *)GreReleaseSemaphoreInternal(_ghsemDwmState);
      }
      v9 = v8 + 60;
      if ( v8 != -60 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v5 + 60, 0);
      }
      v10 = *(SFMLOGICALSURFACE **)(v5 + 136);
      v18 = v10;
      if ( v10 != (SFMLOGICALSURFACE *)-168 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v10 + 168, 0);
      }
      if ( SFMLOGICALSURFACE::bDeviceBitmap(v10) )
      {
        if ( a2 )
        {
          v13 = v11;
          do
          {
            vSpUpdateDirtyRgn(v13, v5, 0, a3++, &v20, 0, (unsigned int *)v16, SHIDWORD(v16));
            --a2;
          }
          while ( a2 );
          v10 = v18;
          v9 = v5 + 60;
        }
        v19 = 1;
      }
      if ( v10 != (SFMLOGICALSURFACE *)-168 )
      {
        ExReleasePushLockExclusiveEx((char *)v10 + 168, 0);
        KeLeaveCriticalRegion();
      }
      if ( v19 )
      {
        v14 = *((_DWORD *)v10 + 28);
        if ( v14 )
          v15 = *(struct SFMLOGICALSURFACE **)(v14 + 4);
        else
          v15 = 0;
        bSpDwmNotifyDirty(v10, v20.unused, v15, 0, v16);
      }
      if ( v9 )
      {
        ExReleasePushLockExclusiveEx(v9, 0);
        KeLeaveCriticalRegion();
      }
    }
    if ( v5 )
      DEC_SHARE_REF_CNT(v5);
    goto LABEL_24;
  }
  return result;
}
