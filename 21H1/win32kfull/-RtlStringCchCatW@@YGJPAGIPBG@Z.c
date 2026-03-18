/*
 * XREFs of ?RtlStringCchCatW@@YGJPAGIPBG@Z @ 0x14346B
 * Callers:
 *     ?xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z @ 0xD7046 (-xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z.c)
 *     ?GetDefaultWallpaperName@@YGXPAGI@Z @ 0x1850CC (-GetDefaultWallpaperName@@YGXPAGI@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x1434BC (RtlStringCopyWorkerW_1.c)
 *     RtlStringLengthWorkerW_0 @ 0x14350C (RtlStringLengthWorkerW_0.c)
 */

int __userpurge RtlStringCchCatW@<eax>(
        int a1@<edx>,
        unsigned __int16 *cchDest,
        unsigned int a3,
        const unsigned __int16 *a4)
{
  int result; // eax
  wchar_t *v5; // ecx
  size_t v6; // [esp+0h] [ebp-Ch]
  const wchar_t *v7; // [esp+0h] [ebp-Ch]
  size_t *v8; // [esp+4h] [ebp-8h]
  size_t v9; // [esp+4h] [ebp-8h]
  wchar_t psz[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)psz = 0;
  result = 0;
  if ( a1 <= 0 )
    result = -1073741811;
  if ( result >= 0 )
  {
    result = RtlStringLengthWorkerW_0(psz, v6, v8);
    if ( result >= 0 )
      return RtlStringCopyWorkerW_1(v5, (size_t)cchDest, (size_t *)v5, v7, v9);
  }
  return result;
}
