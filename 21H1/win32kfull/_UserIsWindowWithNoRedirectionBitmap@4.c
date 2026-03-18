/*
 * XREFs of _UserIsWindowWithNoRedirectionBitmap@4 @ 0x1539D7
 * Callers:
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

BOOL __thiscall UserIsWindowWithNoRedirectionBitmap(void *this)
{
  int v1; // esi
  int v2; // eax

  v1 = 0;
  v2 = HMValidateHandleNoSecure((unsigned int)this, 1);
  if ( v2 )
    return (*(_BYTE *)(*(_DWORD *)(v2 + 20) + 18) & 0x20) != 0;
  return v1;
}
