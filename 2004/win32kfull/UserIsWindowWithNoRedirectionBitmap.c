/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C0054838
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C000F13C (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0053B00 (GreTransferSpriteStateToDwmState.c)
 *     GreGetDxSharedSurface @ 0x1C0054578 (GreGetDxSharedSurface.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  LOBYTE(a2) = 1;
  v3 = HMValidateHandleNoSecure(a1, a2);
  if ( v3 )
    return (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 26LL) & 0x20) != 0;
  return v2;
}
