/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C014E6C8
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C014E060 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014E388 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0232AEC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0232F54 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C002F63C (GreSetTextAlign.c)
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreGetLayout @ 0x1C00417CC (GreGetLayout.c)
 *     NtGdiGetDCObject @ 0x1C00990B0 (NtGdiGetDCObject.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009AB10 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     GreGetTextAlign @ 0x1C011C378 (GreGetTextAlign.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, __int64 *a2)
{
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  HBRUSH DCObject; // rax
  __int64 CompatibleBitmapInternal; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int TextAlign; // eax
  unsigned int v15[8]; // [rsp+60h] [rbp-28h] BYREF

  memset(v15, 0, sizeof(v15));
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 0LL)
    || (DCObject = (HBRUSH)NtGdiGetDCObject((__int64)a1, 327680),
        !(unsigned int)GreExtGetObjectW(DCObject, 32LL, (char *)v15)) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, v15[1], v15[2], 0, 0LL, 0LL);
  v9 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v9 )
      GreDeleteObject(v9);
    return 0LL;
  }
  GreSelectBitmap(v6, v9);
  GetDPIServerInfo(v11, v10, v12, v13);
  GreSelectFont(a1);
  GreSelectFont(a1);
  GreSelectFont(v6);
  TextAlign = GreGetTextAlign(a1);
  GreSetTextAlign(v6, TextAlign);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v6, v15[1] - 1, 1LL);
  NtGdiBitBltInternal(v6, 0, 0, v15[1], v15[2], a1, 0, 0, 13369376, 0, 0);
  result = v6;
  *a2 = v9;
  return result;
}
