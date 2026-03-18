/*
 * XREFs of ?GetDefaultWallpaperName@@YGXPAGI@Z @ 0x1850CC
 * Callers:
 *     _LoadWallpaperFilenameFromRegistry@12 @ 0xE6574 (_LoadWallpaperFilenameFromRegistry@12.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?RtlStringCchCatW@@YGJPAGIPBG@Z @ 0x14346B (-RtlStringCchCatW@@YGJPAGIPBG@Z.c)
 */

void __fastcall GetDefaultWallpaperName(char *a1, int a2)
{
  unsigned __int16 *v4; // eax
  unsigned int v5; // [esp+0h] [ebp-Ch]
  unsigned int v6; // [esp+0h] [ebp-Ch]
  const unsigned __int16 *v7; // [esp+4h] [ebp-8h]
  const unsigned __int16 *v8; // [esp+4h] [ebp-8h]
  _NT_PRODUCT_TYPE ProductType; // [esp+8h] [ebp-4h] BYREF

  ProductType = 0;
  RtlGetNtProductType(&ProductType);
  v4 = L"winnt";
  if ( ProductType != NtProductWinNt )
    v4 = L"lanmannt";
  RtlStringCchCopyW(a2, a1, v4, v5, v7);
  if ( *(unsigned __int8 *)(_gpsi + 6246) * (unsigned int)*(unsigned __int8 *)(_gpsi + 6247) > 4 )
    RtlStringCchCatW(a2, L"256", v6, v8);
}
