/*
 * XREFs of _UserIsWindowOnDesktopAndComposed@8 @ 0xCF5E0
 * Callers:
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

BOOL __fastcall UserIsWindowOnDesktopAndComposed(unsigned int a1, int a2)
{
  int v3; // esi
  int v4; // eax

  v3 = 0;
  v4 = HMValidateHandleNoSecure(a1, 1);
  if ( v4 && a2 == ***(_DWORD ***)(*(_DWORD *)(v4 + 12) + 4) )
    return IsWindowDesktopComposed(v4) != 0;
  return v3;
}
