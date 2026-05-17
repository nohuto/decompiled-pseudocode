/*
 * XREFs of _LdrpGenRandom@0 @ 0x4B2D085D
 * Callers:
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 *     _InitSecurityCookie@0 @ 0x4B331309 (_InitSecurityCookie@0.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 * Callees:
 *     _ZwWow64IsProcessorFeaturePresent@4 @ 0x4B2F4810 (_ZwWow64IsProcessorFeaturePresent@4.c)
 */

int __stdcall LdrpGenRandom()
{
  int v0; // ecx

  if ( !(unsigned __int8)ZwWow64IsProcessorFeaturePresent(28) )
    return 0;
  v0 = 0;
  while ( 1 )
  {
    __asm { rdrand  esi }
    if ( _CF )
      break;
    if ( (unsigned int)++v0 >= 0xA )
      return 0;
  }
  return _ESI;
}
