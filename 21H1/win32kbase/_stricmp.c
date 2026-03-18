/*
 * XREFs of _stricmp @ 0x1C00CC6B8
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00D31B0 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     __ascii_stricmp @ 0x1C00CC670 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
