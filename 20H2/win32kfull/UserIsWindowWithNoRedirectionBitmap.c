/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C01109D0
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C001C1B4 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0080B34 (GreTransferSpriteStateToDwmState.c)
 *     GreGetDxSharedSurface @ 0x1C0110710 (GreGetDxSharedSurface.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax

  v1 = 0;
  v2 = HMValidateHandleNoSecure(a1, 1);
  if ( v2 )
    return (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 26LL) & 0x20) != 0;
  return v1;
}
