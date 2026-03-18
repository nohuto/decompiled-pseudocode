/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C014BEB8
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C014B850 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014BB78 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C023397C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0233DE4 (xxxClientPSMTextOut.c)
 * Callees:
 *     NtGdiGetDCObject @ 0x1C0017D40 (NtGdiGetDCObject.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     GreGetTextAlign @ 0x1C005D2C8 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C005D450 (GreSetTextAlign.c)
 *     GetDPIServerInfo @ 0x1C0060838 (GetDPIServerInfo.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     GreGetLayout @ 0x1C0062728 (GreGetLayout.c)
 *     GreExtGetObjectW @ 0x1C0065958 (GreExtGetObjectW.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, __int64 *a2)
{
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  HBRUSH DCObject; // rax
  __int64 CompatibleBitmapInternal; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  int TextAlign; // eax
  unsigned int v12[8]; // [rsp+60h] [rbp-28h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 0LL)
    || (DCObject = (HBRUSH)NtGdiGetDCObject((__int64)a1, 327680),
        !(unsigned int)GreExtGetObjectW(DCObject, 32LL, (char *)v12)) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, v12[1], v12[2], 0, 0LL, 0LL);
  v9 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v9 )
      GreDeleteObject(v9);
    return 0LL;
  }
  GreSelectBitmap(v6, v9);
  GetDPIServerInfo(v10);
  GreSelectFont(a1);
  GreSelectFont(a1);
  GreSelectFont(v6);
  TextAlign = GreGetTextAlign(a1);
  GreSetTextAlign(v6, TextAlign);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v6, v12[1] - 1, 1LL);
  NtGdiBitBltInternal(v6, 0, 0, v12[1], v12[2], a1, 0, 0, 13369376, 0, 0);
  result = v6;
  *a2 = v9;
  return result;
}
