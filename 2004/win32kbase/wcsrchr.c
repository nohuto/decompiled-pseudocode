/*
 * XREFs of wcsrchr @ 0x1C00CCD0C
 * Callers:
 *     rimLoadImage @ 0x1C000B660 (rimLoadImage.c)
 *     GetWindowsDirectoryDevicePath @ 0x1C0018530 (GetWindowsDirectoryDevicePath.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C00525D8 (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00BC240 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     ivrLoadImage @ 0x1C01B748C (ivrLoadImage.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8
  __int16 v5; // ax

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    v5 = *--Str;
  while ( Str != v2 && v5 != Ch );
  if ( v5 == Ch )
    return (wchar_t *)Str;
  return v3;
}
