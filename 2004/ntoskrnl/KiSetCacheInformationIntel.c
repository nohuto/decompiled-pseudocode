/*
 * XREFs of KiSetCacheInformationIntel @ 0x14099AA60
 * Callers:
 *     KiSetCacheInformation @ 0x14099A970 (KiSetCacheInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiSetStandardizedCacheInformation @ 0x14099AAC0 (KiSetStandardizedCacheInformation.c)
 */

__int64 KiSetCacheInformationIntel()
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 0LL;
  __asm { cpuid }
  result = (unsigned int)(_RAX - 3);
  CurrentPrcb->CacheCount = 0;
  if ( (unsigned int)result <= 0x7FFFFFFC )
    return KiSetStandardizedCacheInformation(CurrentPrcb, 4LL);
  return result;
}
