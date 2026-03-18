/*
 * XREFs of ?DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z @ 0x1A8C6A
 * Callers:
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _BltColor@40 @ 0x1ACFB1 (_BltColor@40.c)
 */

int __userpurge DrawMenuItemCheckMark@<eax>(int **a1@<edx>, HDC a2@<ecx>, HDC a3, struct tagITEM *a4, int a5)
{
  LONG v5; // ebx
  int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // esi
  int *v9; // ecx
  int v10; // edx
  int v11; // edx
  struct HLFONT__ *v12; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // [esp+Ch] [ebp-78h]
  int v18; // [esp+10h] [ebp-74h]
  struct HLFONT__ *v19; // [esp+14h] [ebp-70h]
  int v20; // [esp+18h] [ebp-6Ch]
  int v21; // [esp+1Ch] [ebp-68h]
  int v22; // [esp+1Ch] [ebp-68h]
  unsigned int v24; // [esp+20h] [ebp-64h]
  _DWORD v25[23]; // [esp+24h] [ebp-60h] BYREF

  v5 = 2;
  v21 = 1;
  DpiForSystem = GetDpiForSystem();
  OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(63, DpiForSystem);
  v9 = *a1;
  v10 = (*a1)[12] - OemBitmapInfoForDpi[3];
  if ( v10 < 0 )
    v10 = 0;
  v20 = v10 / 2;
  v11 = v9[1] & 8;
  if ( v11 )
    v12 = (struct HLFONT__ *)v9[4];
  else
    v12 = (struct HLFONT__ *)v9[5];
  v19 = v12;
  if ( v12 )
  {
    v17 = GreSelectBitmap(_ghdcMem2, v12);
    if ( v17 )
    {
      memset(v25, 0, 0x54u);
      v22 = GreSetTextColor(a2, 0);
      v18 = GreSetBkColor(a2, 0xFFFFFF);
      if ( (**a1 & 0x2000) != 0 )
        v5 = (*a1)[11] - OemBitmapInfoForDpi[2];
      if ( GreExtGetObjectW(v19, 84, v25) == 84 && HIWORD(v25[9]) == 32 && !v25[10] )
      {
        v24 = 33488896;
        if ( (GreGetLayout(a2) & 1) != 0 )
          BYTE1(v24) = 0x80;
        NtGdiAlphaBlend(
          a2,
          v5,
          (struct XDCOBJ *)v20,
          OemBitmapInfoForDpi[3],
          (XLATEOBJ *)OemBitmapInfoForDpi[3],
          _ghdcMem2,
          0,
          0,
          OemBitmapInfoForDpi[2],
          OemBitmapInfoForDpi[3],
          v24,
          0);
      }
      else
      {
        NtGdiBitBltInternal(
          a2,
          v5,
          (struct XDCOBJ *)v20,
          OemBitmapInfoForDpi[2],
          OemBitmapInfoForDpi[3],
          _ghdcMem2,
          0,
          0,
          12060490,
          0xFFFFFF,
          0);
      }
      GreSetTextColor(a2, v22);
      GreSetBkColor(a2, v18);
      GreSelectBitmap(_ghdcMem2, v17);
    }
    return 1;
  }
  if ( v11 )
  {
    v14 = *v9;
    if ( (*v9 & 0x200) != 0 )
    {
      v15 = GetDpiForSystem();
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(64, v15);
      v9 = *a1;
      v14 = **a1;
    }
    if ( (v14 & 0x2000) != 0 )
      v5 = v9[11] - OemBitmapInfoForDpi[2];
    if ( (GreGetLayout(a2) & 1) != 0 && a2 != *(HDC *)(_gpDispInfo + 36) )
      v21 = 3;
    v16 = PrepareHDCBITSBitmap(0);
    if ( v16 )
      BltColor(
        a2,
        v16,
        v5,
        v20,
        OemBitmapInfoForDpi[2],
        OemBitmapInfoForDpi[3],
        *OemBitmapInfoForDpi,
        OemBitmapInfoForDpi[1],
        v21);
    return 1;
  }
  return 0;
}
