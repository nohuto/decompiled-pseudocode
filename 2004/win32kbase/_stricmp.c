/*
 * XREFs of _stricmp @ 0x1C00CCF68
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00D3C30 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     __ascii_stricmp @ 0x1C00CCF20 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
