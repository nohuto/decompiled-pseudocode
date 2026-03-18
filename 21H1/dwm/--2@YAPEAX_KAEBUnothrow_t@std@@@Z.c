/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140003980
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x140005674 (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 *     ??$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVHotKeyCallback@@_N@Details@WRL@Microsoft@@YAJPEAPEAUIHotKeyClient@@$$QEAPEAVHotKeyCallback@@$$QEA_N@Z @ 0x140008124 (--$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVHotKeyCallback@@_N@Details@WRL@Microsoft.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyClient@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVHotKeyClient@@@Z @ 0x14000A468 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyClient@@@Deta.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140003F88 (--2@YAPEAX_K@Z.c)
 */

void *__fastcall operator new(size_t a1, const struct std::nothrow_t *a2)
{
  void *result; // rax

  try
  {
    result = operator new(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
