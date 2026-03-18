/*
 * XREFs of _CreateCompatiblePublicDC@8 @ 0xBCDD4
 * Callers:
 *     _xxxClientExtTextOutW@32 @ 0xBC862 (_xxxClientExtTextOutW@32.c)
 *     _xxxClientGetTextExtentPointW@16 @ 0xBCB06 (_xxxClientGetTextExtentPointW@16.c)
 *     _xxxClientLpkDrawTextEx@40 @ 0x1945DA (_xxxClientLpkDrawTextEx@40.c)
 *     _xxxClientPSMTextOut@24 @ 0x19495D (_xxxClientPSMTextOut@24.c)
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _NtGdiGetDCObject@8 @ 0x78A34 (_NtGdiGetDCObject@8.c)
 *     _GreSetTextAlign@8 @ 0xB66FA (_GreSetTextAlign@8.c)
 *     _GreGetTextAlign@4 @ 0xB687C (_GreGetTextAlign@4.c)
 *     _GetDPIServerInfo@0 @ 0xEC39A (_GetDPIServerInfo@0.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, int *a2)
{
  HDC CompatibleDC; // eax
  HDC v5; // edi
  struct HLFONT__ *DCObject; // eax
  int CompatibleBitmapInternal; // eax
  int v8; // esi
  int DPIServerInfo; // eax
  int v10; // esi
  int TextAlign; // eax
  int v12[6]; // [esp+10h] [ebp-20h] BYREF
  int *v13; // [esp+28h] [ebp-8h]
  int v14; // [esp+2Ch] [ebp-4h]

  v13 = a2;
  memset(v12, 0, sizeof(v12));
  if ( GreGetObjectOwner(a1, 1) )
    return a1;
  CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
  v5 = CompatibleDC;
  if ( !CompatibleDC )
    return 0;
  if ( !GreSetDCOwnerEx(CompatibleDC, -2147483646, 0, 0)
    || (DCObject = (struct HLFONT__ *)NtGdiGetDCObject(a1, (const WCHAR *)&loc_50000),
        !GreExtGetObjectW(DCObject, 24, v12)) )
  {
    GreDeleteDC(v5);
    return 0;
  }
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, v12[1], v12[2], 0, 0, 0);
  v8 = CompatibleBitmapInternal;
  v14 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !GreSetBitmapOwner(CompatibleBitmapInternal, -2147483646) )
  {
    GreDeleteDC(v5);
    if ( v8 )
      GreDeleteObject(v8);
    return 0;
  }
  GreSelectBitmap(v5, v8);
  DPIServerInfo = GetDPIServerInfo();
  v10 = GreSelectFont(a1, *(_DWORD *)(DPIServerInfo + 20));
  GreSelectFont(a1, v10);
  GreSelectFont(v5, v10);
  TextAlign = GreGetTextAlign(a1);
  GreSetTextAlign(v5, TextAlign);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v5, v12[1] - 1, 1);
  NtGdiBitBltInternal(v5, 0, 0, v12[1], v12[2], a1, 0, 0, 13369376, 0, 0);
  *v13 = v14;
  return v5;
}
