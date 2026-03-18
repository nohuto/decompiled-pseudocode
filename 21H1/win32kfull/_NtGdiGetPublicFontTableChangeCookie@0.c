/*
 * XREFs of _NtGdiGetPublicFontTableChangeCookie@0 @ 0xE3084
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

struct _FONTHASH *__thiscall NtGdiGetPublicFontTableChangeCookie(void *this)
{
  struct _FONTHASH *v1; // esi
  void *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this;
  if ( !_ghsemPublicPFT || !gpPFTPublic )
    return 0;
  v3 = (void *)_ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v1 = gpPFTPublic[5];
  SEMOBJ::vUnlock((SEMOBJ *)&v3);
  return v1;
}
