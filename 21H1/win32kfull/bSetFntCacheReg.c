/*
 * XREFs of bSetFntCacheReg @ 0xDF9A2
 * Callers:
 *     _EngCloseFNTCache@0 @ 0xD742A (_EngCloseFNTCache@0.c)
 *     _InitFNTCache@0 @ 0xDF48C (_InitFNTCache@0.c)
 *     bServicingStackModifiedFonts @ 0xDF960 (bServicingStackModifiedFonts.c)
 *     _EngFntCacheFault@8 @ 0x1E8664 (_EngFntCacheFault@8.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall bSetFntCacheReg(unsigned int a1, int a2)
{
  struct _UNICODE_STRING DestinationString; // [esp+4h] [ebp-Ch] BYREF
  int Data; // [esp+Ch] [ebp-4h] BYREF

  Data = a2;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  if ( a1 >= 3 )
    return 0;
  RtlInitUnicodeString(&DestinationString, (&g_fntCacheRegistryPaths)[a1]);
  return ZwSetValueKey(ghkeyGreInitialize, &DestinationString, 0, 4u, &Data, 4u) >= 0;
}
