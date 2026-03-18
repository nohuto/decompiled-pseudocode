/*
 * XREFs of bSetFntCacheReg @ 0x1C000A0E4
 * Callers:
 *     EngCloseFNTCache @ 0x1C00097F0 (EngCloseFNTCache.c)
 *     bServicingStackModifiedFonts @ 0x1C000A090 (bServicingStackModifiedFonts.c)
 *     InitFNTCache @ 0x1C000A170 (InitFNTCache.c)
 *     EngFntCacheFault @ 0x1C0289BB0 (EngFntCacheFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSetFntCacheReg(unsigned int a1, int a2)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  Data = a2;
  DestinationString = 0LL;
  if ( a1 >= 3 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(&g_fntCacheRegistryPaths)[a1]);
  return ZwSetValueKey(ghkeyGreInitialize, &DestinationString, 0, 4u, &Data, 4u) >= 0;
}
