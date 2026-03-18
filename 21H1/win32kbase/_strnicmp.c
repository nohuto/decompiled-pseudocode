/*
 * XREFs of _strnicmp @ 0x1C00CC54C
 * Callers:
 *     rimLoadImage @ 0x1C0021C70 (rimLoadImage.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00AD620 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     ivrLoadImage @ 0x1C01BD1EC (ivrLoadImage.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1C00CC4E8 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
