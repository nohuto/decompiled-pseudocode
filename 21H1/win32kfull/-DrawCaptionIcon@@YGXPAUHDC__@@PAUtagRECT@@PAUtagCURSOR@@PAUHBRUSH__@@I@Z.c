/*
 * XREFs of ?DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z @ 0x1A5106
 * Callers:
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 *     ?BltMe4Times@@YGXIHHPAUHDC__@@PAUtagCURSOR@@I@Z @ 0x1A4FE9 (-BltMe4Times@@YGXIHHPAUHDC__@@PAUtagCURSOR@@I@Z.c)
 */

void __userpurge DrawCaptionIcon(
        int a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        struct tagRECT *a4,
        struct tagCURSOR *a5,
        HBRUSH a6,
        unsigned int a7)
{
  int v7; // ebx
  int v8; // esi
  int DpiForSystem; // eax
  HDC v10; // ecx
  int i; // edi
  INT v12; // eax
  XLATEOBJ *v13; // eax
  int v14; // edx
  int v15; // ecx
  HDC v16; // edx
  HDC v17; // esi
  int v18; // edi
  int v19; // eax
  struct OEMBITMAPSET **OemBitmapInfoForDpi; // eax
  INT v21; // eax
  int DpiDependentMetric; // edi
  INT v23; // eax
  int v24; // eax
  RECT *v25; // [esp+0h] [ebp-2Ch]
  HBRUSH v26; // [esp+4h] [ebp-28h]
  LONG v27; // [esp+Ch] [ebp-20h]
  int v28; // [esp+10h] [ebp-1Ch]
  int v31; // [esp+24h] [ebp-8h]
  HDC v32; // [esp+3Ch] [ebp+10h]

  v7 = a1;
  v8 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4);
  v31 = v8;
  DpiForSystem = GetDpiForSystem();
  if ( v8 != *((__int16 *)GetOemBitmapInfoForDpi(29, DpiForSystem) + 3)
    || a4 == *(struct tagRECT **)(_gpsi + 4416)
    || *((_DWORD *)a3 + 20) )
  {
    v27 = *(_DWORD *)v7;
    v28 = *(_DWORD *)(a1 + 4);
    FillRect((HDC)a4, v25, v26);
    v21 = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(20, v21);
    v23 = GetDpiForSystem();
    v24 = GetDpiDependentMetric(21, v23);
    _DrawIconEx(
      a2,
      (v8 - DpiDependentMetric) / 2 + 1 + v27,
      (struct XDCOBJ *)(v28 + (v8 - v24) / 2),
      (int)a3,
      DpiDependentMetric,
      v24,
      0,
      0,
      3);
    v7 = a1;
  }
  else
  {
    if ( ((unsigned __int8)a5 & 0x10) != 0 )
    {
      v10 = _gcachedCaptions[0];
      i = a3 != _gcachedCaptions[0] ? 5 : 0;
    }
    else
    {
      for ( i = 1; i < 5; ++i )
      {
        v10 = _gcachedCaptions[0];
        if ( _gcachedCaptions[2 * i] == a3 )
          break;
      }
    }
    if ( i >= 5 )
    {
      i = 0;
      if ( ((unsigned __int8)a5 & 0x10) == 0 )
      {
        for ( i = 1; i < 4; ++i )
        {
          if ( !*((_DWORD *)v10 + 2 * i) )
            break;
        }
      }
      v12 = GetDpiForSystem();
      v13 = (XLATEOBJ *)GetDpiDependentMetric(20, v12);
      BltMe4Times(
        v8,
        (int)_gcachedCaptions[2 * i + 1],
        v13,
        _ghdcMem,
        a3,
        (HDC)a5,
        (struct tagCURSOR *)v25,
        (unsigned int)v26);
      HMAssignmentLock(v15, v14);
    }
    if ( i > 1 )
    {
      do
      {
        v16 = _gcachedCaptions[2 * i];
        v17 = _gcachedCaptions[2 * i + 1];
        _gcachedCaptions[2 * i] = _gcachedCaptions[2 * i - 2];
        _gcachedCaptions[2 * i + 1] = _gcachedCaptions[2 * i - 1];
        _gcachedCaptions[2 * i - 2] = v16;
        _gcachedCaptions[2 * i-- - 1] = v17;
      }
      while ( i > 1 );
      v8 = v31;
    }
    v18 = (int)_gcachedCaptions[2 * i + 1];
    if ( ((unsigned __int8)a5 & 1) == 0 )
      ++v18;
    v32 = (HDC)PrepareHDCBITSBitmap(0);
    if ( v32 )
    {
      v19 = GetDpiForSystem();
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v18, v19);
      NtGdiBitBltInternal(
        a2,
        *(_DWORD *)v7,
        *(struct XDCOBJ **)(v7 + 4),
        v8,
        v8,
        v32,
        (struct ECLIPOBJ *)*(__int16 *)OemBitmapInfoForDpi,
        (struct ECLIPOBJ *)*((__int16 *)OemBitmapInfoForDpi + 1),
        13369376,
        0,
        0);
    }
  }
  *(_DWORD *)v7 += v31;
}
