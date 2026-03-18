/*
 * XREFs of AnFwConfigureProgressResources @ 0x1409F4608
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F59E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     BgpTxtRegionSize @ 0x14039B418 (BgpTxtRegionSize.c)
 *     BgpGxRectangleSize @ 0x14039B478 (BgpGxRectangleSize.c)
 *     BgpGetBitsPerPixel @ 0x14039B9B0 (BgpGetBitsPerPixel.c)
 *     BgpTxtCreateRegion @ 0x1409F60D4 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x1409F634C (BgpFoGetFontHandle.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(int *a1)
{
  int BitsPerPixel; // eax
  _DWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = 0LL;
  KeInitializeEvent(&stru_140CF3000, NotificationEvent, 1u);
  if ( !a1 )
    return 0LL;
  if ( (a1[6] & 1) == 0 )
    return 0LL;
  if ( (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_140C134B0);
  v4[1] = dword_140C134B8;
  v6 = a1[5];
  v7 = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (unsigned int)&v8, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_140C13354 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_140C13350 = 122 * dword_140C13354;
  dword_140C13358 = BgpTxtRegionSize(v8);
  return v8;
}
