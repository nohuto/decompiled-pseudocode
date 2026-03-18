/*
 * XREFs of ?MulCreateDeviceBitmapEx@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@KKPAUDHSURF__@@KKPAPAX@Z @ 0x2029FA
 * Callers:
 *     <none>
 * Callees:
 *     _GreDwmUseDeviceBitmapsForMultiAdapter@0 @ 0xA53DE (_GreDwmUseDeviceBitmapsForMultiAdapter@0.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QAEXPAU_LUID@@@Z @ 0x1E9A26 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QAEXPAU_LUID@@@Z.c)
 *     ?pAllocateAndInitializeMDSURF@@YGPAU_MDSURF@@PAU_VDEV@@@Z @ 0x206598 (-pAllocateAndInitializeMDSURF@@YGPAU_MDSURF@@PAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YGXPAVPDEVOBJ@@PAVSURFACE@@@Z @ 0x2067D6 (-vSetupDevBitmap@@YGXPAVPDEVOBJ@@PAVSURFACE@@@Z.c)
 */

HSURF __stdcall MulCreateDeviceBitmapEx(
        struct DHPDEV__ *a1,
        SIZEL sizl,
        ULONG iFormatCompat,
        unsigned int a4,
        DHSURF a5,
        LONG a6,
        unsigned int a7,
        void **a8)
{
  struct DHPDEV__ *v8; // ebx
  int v9; // esi
  int v10; // edx
  unsigned int v11; // edi
  bool v12; // zf
  struct DHPDEV__ *v13; // edi
  struct DHPDEV__ *i; // ecx
  int v15; // edx
  _DWORD *v16; // eax
  int (__stdcall *v17)(_DWORD, LONG, LONG, ULONG); // edx
  HSURF v18; // eax
  HSURF v19; // edi
  SURFOBJ *v20; // edx
  int (__stdcall *v21)(_DWORD, LONG, LONG, ULONG, unsigned int, struct DHSURF__ *, LONG, unsigned int, void **); // ecx
  HSURF v22; // eax
  SURFOBJ *v23; // eax
  DHSURF v24; // eax
  HBITMAP RedirectionDeviceBitmap; // eax
  SURFOBJ *v26; // edx
  DHSURF v27; // edi
  void *v28; // eax
  ULONG v29; // ecx
  void *v30; // eax
  int v31; // eax
  LONG *p_lDelta; // edi
  struct _VDEV *v34; // [esp+18h] [ebp-38h]
  struct SURFACE *v35; // [esp+1Ch] [ebp-34h]
  DHSURF dhsurf; // [esp+24h] [ebp-2Ch]
  HSURF hsurf; // [esp+28h] [ebp-28h]
  SURFOBJ *pso; // [esp+2Ch] [ebp-24h]
  void *v39; // [esp+30h] [ebp-20h] BYREF
  PVOID pvBits; // [esp+34h] [ebp-1Ch]
  PVOID pvScan0; // [esp+38h] [ebp-18h]
  int v42; // [esp+3Ch] [ebp-14h]
  struct DHPDEV__ *v43; // [esp+40h] [ebp-10h]
  int v44; // [esp+44h] [ebp-Ch] BYREF
  struct _LUID v45; // [esp+48h] [ebp-8h] BYREF

  v8 = a1;
  v9 = 0;
  v10 = *((_DWORD *)a1 + 4);
  v11 = a4 & 2;
  dhsurf = 0;
  hsurf = 0;
  pvBits = 0;
  v12 = (*(_DWORD *)(v10 + 24) & 0x4000000) == 0;
  pvScan0 = 0;
  v44 = v10;
  if ( v12 || (a4 & 2) == 0 && (v11 = 0, GreDwmUseDeviceBitmapsForMultiAdapter()) )
  {
    v39 = 0;
    if ( v11 && a8 )
      v39 = *a8;
    v12 = (*(_DWORD *)(v10 + 24) & 0x4000000) == 0;
    v13 = 0;
    v43 = 0;
    if ( v12 )
      goto LABEL_51;
    for ( i = *(struct DHPDEV__ **)a1; i; i = *(struct DHPDEV__ **)i )
    {
      v15 = *(_DWORD *)(*((_DWORD *)i + 10) + 1832);
      if ( v15 && *(_DWORD *)(v15 + 204) == *((_DWORD *)a1 + 16) && *(_DWORD *)(v15 + 208) == *((_DWORD *)a1 + 17) )
      {
        v13 = i;
        v43 = i;
        break;
      }
    }
    v45.LowPart = 0;
    v45.HighPart = 0;
    PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v44, &v45);
    if ( !v13 )
      goto LABEL_51;
    v8 = v13;
    while ( 1 )
    {
      if ( !v8 )
      {
        if ( a8 && (a4 & 2) == 0 )
          *a8 = v39;
        return hsurf;
      }
      v16 = (_DWORD *)*((_DWORD *)v8 + 9);
      v42 = 0;
      v45.LowPart = (DWORD)v16;
      if ( (v16[280] & 0x8000000) != 0
        && (v16[354] & 0x8000) != 0
        && (v17 = (int (__stdcall *)(_DWORD, LONG, LONG, ULONG))v16[485]) != 0 )
      {
        v18 = (HSURF)v17(v16[277], sizl.cx, sizl.cy, iFormatCompat);
        v19 = v18;
        if ( !v18 )
          goto LABEL_66;
        v20 = EngLockSurface(v18);
        v42 = 1;
        pso = v20;
      }
      else
      {
        if ( (v16[280] & 0x8000000) != 0 )
          goto LABEL_66;
        v21 = (int (__stdcall *)(_DWORD, LONG, LONG, ULONG, unsigned int, struct DHSURF__ *, LONG, unsigned int, void **))v16[569];
        if ( !v21 )
          goto LABEL_66;
        v22 = (HSURF)v21(v16[277], sizl.cx, sizl.cy, iFormatCompat, a4, a5, a6, a7, &v39);
        v19 = v22;
        if ( !v22 )
          goto LABEL_66;
        v23 = EngLockSurface(v22);
        v20 = v23;
        pso = v23;
        if ( !v23 )
          break;
        pvBits = v23[7].pvBits;
        pvScan0 = v23[7].pvScan0;
        a5 = v23->dhsurf;
      }
      if ( !v20 )
        break;
      if ( dhsurf )
      {
        v27 = dhsurf;
      }
      else
      {
        v44 = 0;
        v24 = (DHSURF)pAllocateAndInitializeMDSURF(v34);
        dhsurf = v24;
        if ( !v24 )
          goto LABEL_58;
        RedirectionDeviceBitmap = EngCreateRedirectionDeviceBitmap(v24, sizl, iFormatCompat);
        hsurf = (HSURF)RedirectionDeviceBitmap;
        if ( !RedirectionDeviceBitmap )
          goto LABEL_61;
        if ( !EngModifySurface(
                (HSURF)RedirectionDeviceBitmap,
                *((HDEV *)a1 + 4),
                *((_DWORD *)a1 + 9),
                3u,
                dhsurf,
                0,
                0,
                0)
          || (v44 = 1, (v26 = EngLockSurface(hsurf)) == 0) )
        {
LABEL_58:
          if ( hsurf )
            EngDeleteSurface(hsurf);
          if ( !v44 )
          {
LABEL_61:
            if ( dhsurf )
              EngFreeMem(dhsurf);
          }
          EngUnlockSurface(pso);
          EngDeleteSurface(v19);
          return (HSURF)v9;
        }
        v27 = dhsurf;
        *(_DWORD *)dhsurf = a1;
        v28 = pvBits;
        *((_DWORD *)dhsurf + 1) = dhsurf + 3;
        dhsurf[2] = (struct DHSURF__)v8[2];
        v29 = (ULONG)v39;
        v26[1].hsurf = (HSURF)((int)v26[1].hsurf | 0x800000);
        v26[7].pvBits = v28;
        v30 = pvScan0;
        v26[7].cjBits = v29;
        v26[7].pvScan0 = v30;
        v26[1].sizlBitmap.cx = a6;
        if ( (a4 & 0x10) != 0 )
        {
          if ( ((int)pso[1].dhpdev & 0x2000) != 0 )
            v26[1].dhpdev = (DHPDEV)((int)v26[1].dhpdev | 0x2000);
          a4 &= ~0x10u;
        }
        EngUnlockSurface(v26);
        v20 = pso;
      }
      v31 = *((_DWORD *)v27 + 1);
      p_lDelta = &v20[-1].lDelta;
      *(_DWORD *)(v31 + 4 * *((_DWORD *)v8 + 2)) = v20;
      if ( v42 )
      {
        p_lDelta[18] |= (unsigned int)&loc_80000;
        p_lDelta[19] |= 1u;
      }
      else if ( (a4 & 1) != 0 )
      {
        p_lDelta[19] |= 1u;
        p_lDelta[101] = (LONG)v39;
        p_lDelta[102] = (LONG)pvBits;
        p_lDelta[103] = (LONG)pvScan0;
        p_lDelta[21] = a6;
      }
      else if ( (a4 & 2) != 0 )
      {
        p_lDelta[19] |= 8u;
      }
      p_lDelta[19] |= 4u;
      p_lDelta[24] = (LONG)hsurf;
      vSetupDevBitmap(v34, v35);
      p_lDelta[18] |= 0x800000u;
      GreMarkUndeletableBitmap(pso->hsurf);
      if ( v43 )
      {
        v8 = v8 == v43 ? *(struct DHPDEV__ **)a1 : *(struct DHPDEV__ **)v8;
        if ( v8 != v43 )
          continue;
      }
LABEL_51:
      v8 = *(struct DHPDEV__ **)v8;
    }
    if ( v19 )
      EngDeleteSurface(v19);
LABEL_66:
    if ( hsurf )
      EngDeleteSurface(hsurf);
  }
  return (HSURF)v9;
}
