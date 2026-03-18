/*
 * XREFs of _GreWindowResizeComplete@8 @ 0x1CEAC5
 * Callers:
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ @ 0x25308 (-bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QAE?AU_LUID@@XZ @ 0xB55CC (-AdapterLuid@SFMLOGICALSURFACE@@QAE-AU_LUID@@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QAEXPAU_LUID@@@Z @ 0x1E9A26 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QAEXPAU_LUID@@@Z.c)
 */

int __fastcall GreWindowResizeComplete(struct DWMSPRITE *a1, void *a2)
{
  int v2; // ebx
  struct PDEVOBJ *v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  SFMLOGICALSURFACE *v10; // ecx
  int (__stdcall *v11)(_DWORD, _DWORD); // edx
  struct _LUID *v12; // eax
  int v14; // [esp+0h] [ebp-58h]
  int *v15; // [esp+4h] [ebp-54h]
  struct DWMSPRITE *v16; // [esp+10h] [ebp-48h] BYREF
  SFMLOGICALSURFACE *v17; // [esp+14h] [ebp-44h]
  void *v18; // [esp+18h] [ebp-40h] BYREF
  _BYTE v19[4]; // [esp+20h] [ebp-38h] BYREF
  int v20; // [esp+24h] [ebp-34h] BYREF
  _BYTE v21[20]; // [esp+28h] [ebp-30h] BYREF
  _DWORD v22[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  __int16 v23; // [esp+48h] [ebp-10h]

  v2 = 0;
  v18 = a2;
  v20 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v19, v4, 0, 0);
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    v5 = 0;
    v6 = DWMALTSPRITEREF::hspLookupWindow(v18);
    if ( v6 )
    {
      LOBYTE(v7) = 15;
      v8 = HmgLock(v6, v7);
      v5 = v8;
      if ( !v8 )
      {
LABEL_20:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
        GreReleaseSemaphoreInternal(_ghsemDwmState);
        DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v19);
        goto LABEL_21;
      }
      v9 = *(_DWORD *)(v8 + 76);
      v10 = *(SFMLOGICALSURFACE **)(v5 + 136);
      v17 = v10;
      v18 = 0;
      if ( v9 >= 1 )
      {
        if ( v9 == 2 )
        {
          if ( SFMLOGICALSURFACE::bDeviceBitmap(v10) )
          {
            v16 = a1;
            memset(v22, 0, sizeof(v22));
            v23 = 256;
            DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v16);
            if ( a1 )
            {
              v11 = (int (__stdcall *)(_DWORD, _DWORD))*((_DWORD *)a1 + 578);
              if ( v11 )
              {
                if ( (*((_DWORD *)a1 + 6) & 0x4000000) != 0 )
                {
                  v12 = (struct _LUID *)SFMLOGICALSURFACE::AdapterLuid(v17, &v18);
                  PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v16, v12);
                  v11 = (int (__stdcall *)(_DWORD, _DWORD))*((_DWORD *)a1 + 578);
                }
                v18 = (void *)v11(*((_DWORD *)a1 + 277), *(_DWORD *)v17);
              }
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
            if ( v22[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v22);
          }
          if ( v18 )
          {
            *(_DWORD *)(v5 + 76) = 3;
          }
          else
          {
            *(_DWORD *)(v5 + 76) = 1;
            CheckAndProcessWindowResizeComplete(0, (int *)v5, a1, 0, v14, v15);
          }
        }
        v2 = 1;
      }
    }
    if ( v5 )
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
    goto LABEL_20;
  }
LABEL_21:
  SEMOBJ::vUnlock((SEMOBJ *)&v20);
  return v2;
}
