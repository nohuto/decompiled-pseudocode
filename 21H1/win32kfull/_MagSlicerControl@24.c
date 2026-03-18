/*
 * XREFs of _MagSlicerControl@24 @ 0x13DD42
 * Callers:
 *     _NtUserSlicerControl@16 @ 0x16A720 (_NtUserSlicerControl@16.c)
 * Callees:
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _IsMessageOnlyWindow@4 @ 0xADBD2 (_IsMessageOnlyWindow@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?MagpFindLensContext@@YGPAU_MAG_LENS_CONTEXT@@PAU_MAG_THREAD_CONTEXT@@PAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x13C834 (-MagpFindLensContext@@YGPAU_MAG_LENS_CONTEXT@@PAU_MAG_THREAD_CONTEXT@@PAUtagWND@@W4_MAG_LENS_CON.c)
 *     _MagControl@16 @ 0x13CA3F (_MagControl@16.c)
 *     _MagGetLensContextInformation@28 @ 0x13CB12 (_MagGetLensContextInformation@28.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 *     _DwmAsyncMagnSetSlicerDestinationTextures@16 @ 0x1D1F42 (_DwmAsyncMagnSetSlicerDestinationTextures@16.c)
 *     _DwmAsyncMagnSetWindowSlicer@16 @ 0x1D2340 (_DwmAsyncMagnSetWindowSlicer@16.c)
 */

NTSTATUS __fastcall MagSlicerControl(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, unsigned int a6)
{
  unsigned int v6; // esi
  int LensContextInformation; // edi
  void *v9; // eax
  void *v10; // ecx
  void *v11; // eax
  _DWORD *i; // eax
  _DWORD *LensContext; // edx
  int v14; // ecx
  int v15; // eax
  void *v16; // eax
  _DWORD *j; // eax
  _DWORD *v19; // ebx
  void *v20; // eax
  signed int *v21; // ecx
  signed int v22; // eax
  signed int v23; // edx
  _DWORD *v24; // edx
  int *v25; // ebx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // ecx
  int v31; // [esp-8h] [ebp-60h]
  int v32; // [esp-8h] [ebp-60h]
  signed int v34; // [esp+10h] [ebp-48h]
  _DWORD *v35; // [esp+10h] [ebp-48h]
  _DWORD *v36; // [esp+14h] [ebp-44h]
  _DWORD *v37; // [esp+14h] [ebp-44h]
  signed int v38; // [esp+18h] [ebp-40h] BYREF
  _DWORD *v39; // [esp+1Ch] [ebp-3Ch]
  void *v40[14]; // [esp+20h] [ebp-38h] BYREF

  v6 = 0;
  v38 = 0;
  LensContextInformation = -1073741811;
  if ( !a4 )
  {
    if ( IsDesktopWindow(a3) )
      return LensContextInformation;
    if ( IsMessageOnlyWindow(v29) )
      return LensContextInformation;
    LensContextInformation = MagControl(a1, a2, 0, 0);
    if ( LensContextInformation < 0 )
      return LensContextInformation;
    return MagSetLensContextInformation(a1, a2, (int)a3, 1, 0, 0, 0);
  }
  if ( a4 == 1 )
  {
    LensContextInformation = MagSetLensContextInformation(a1, a2, (int)a3, 1, 1, 0, 0);
    if ( LensContextInformation < 0 )
      return LensContextInformation;
    return MagControl(a1, a2, 1, 0);
  }
  if ( a4 != 2 )
  {
    if ( a4 != 3 )
    {
      if ( a4 == 4 && a6 >= 0x14 )
      {
        memset(v40, 0, sizeof(v40));
        v38 = 56;
        LensContextInformation = MagGetLensContextInformation((_DWORD **)a1, a2, a3, 1, 8, v40, (unsigned int *)&v38);
        if ( LensContextInformation >= 0 )
        {
          v9 = v40[10];
          *(void **)a5 = v40[0];
          *(void **)(a5 + 4) = v40[2];
          v10 = v40[9];
          *(_DWORD *)(a5 + 12) = v9;
          v11 = v40[12];
          *(_DWORD *)(a5 + 8) = v10;
          *(_DWORD *)(a5 + 16) = v11;
        }
      }
      return LensContextInformation;
    }
    if ( a6 < 0x18 )
      return LensContextInformation;
    for ( i = (_DWORD *)*a1; ; i = (_DWORD *)*i )
    {
      v36 = i;
      if ( i == a1 )
        break;
      if ( a2 == i[2] )
        goto LABEL_15;
    }
    i = 0;
    v36 = 0;
LABEL_15:
    if ( !i )
      return -1073741661;
    LensContext = MagpFindLensContext((int)i, (int)a3, 1);
    v39 = LensContext;
    if ( !LensContext )
      return LensContextInformation;
    v34 = *(_DWORD *)(a5 + 8);
    v38 = *(_DWORD *)a5;
    if ( v34 <= v38 )
      return LensContextInformation;
    v14 = *(_DWORD *)(a5 + 12);
    v15 = *(_DWORD *)(a5 + 4);
    if ( v14 <= v15
      || *(_DWORD *)(a5 + 16) > v39[56] / (unsigned int)(v34 - v38) * (LensContext[57] / (unsigned int)(v14 - v15)) )
    {
      return LensContextInformation;
    }
    v31 = ***(_DWORD ***)(*(_DWORD *)(v36[2] + 248) + 4);
    v16 = (void *)ReferenceDwmApiPort();
    return DwmAsyncMagnSetWindowSlicer(v16, v31, a5);
  }
  if ( a6 < 0x10 || *(_DWORD *)a5 > 6u || a6 < 20 * *(_DWORD *)a5 + 16 )
    return LensContextInformation;
  for ( j = (_DWORD *)*a1; ; j = (_DWORD *)*j )
  {
    v37 = j;
    if ( j == a1 )
      break;
    if ( a2 == j[2] )
      goto LABEL_30;
  }
  j = 0;
  v37 = 0;
LABEL_30:
  if ( !j )
    return -1073741661;
  v19 = MagpFindLensContext((int)j, (int)a3, 1);
  v35 = v19;
  if ( v19 )
  {
    v32 = ***(_DWORD ***)(*(_DWORD *)(v37[2] + 248) + 4);
    v20 = (void *)ReferenceDwmApiPort();
    LensContextInformation = DwmAsyncMagnSetSlicerDestinationTextures(v20, v32, a5);
    v39 = (_DWORD *)LensContextInformation;
    if ( LensContextInformation >= 0 )
    {
      if ( v19[58] )
      {
        Win32FreePool(v19[58]);
        v19[58] = 0;
      }
      v21 = (signed int *)a5;
      if ( *(_DWORD *)a5 )
      {
        v38 = Win32AllocPool(16 * *(_DWORD *)a5, 1735226197);
        if ( !v38 )
          return -1073741801;
        v21 = (signed int *)a5;
      }
      v19[54] = *v21;
      v19[55] = v21[1];
      v19[56] = v21[2];
      v19[57] = v21[3];
      v22 = v38;
      v19[58] = v38;
      v23 = *v21;
      if ( *v21 )
      {
        v24 = (_DWORD *)(v22 + 12);
        v25 = v21 + 6;
        do
        {
          ++v6;
          *(v24 - 3) = *(v25 - 2);
          *(v24 - 2) = *(v25 - 1);
          v26 = *v25;
          v25 += 5;
          *(v24 - 1) = v26;
          *v24 = *(v25 - 4);
          v24 += 4;
          v38 = *v21;
        }
        while ( v6 < v38 );
        LensContextInformation = (int)v39;
        v19 = v35;
        v23 = v38;
      }
      v27 = v19[2];
      if ( v23 )
        v28 = v27 | 0x10;
      else
        v28 = v27 & 0xFFFFFFEF;
      v19[2] = v28;
    }
  }
  return LensContextInformation;
}
