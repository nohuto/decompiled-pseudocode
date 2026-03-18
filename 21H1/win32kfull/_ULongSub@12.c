/*
 * XREFs of _ULongSub@12 @ 0x145E8B
 * Callers:
 *     _NtUserSetTimer@20 @ 0x2CA4E (_NtUserSetTimer@20.c)
 *     __NotifyOverlayWindow@8 @ 0x145F10 (__NotifyOverlayWindow@8.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAH@Z @ 0x20FDCC (-bSendLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAH@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongSub(ULONG ulMinuend, ULONG ulSubtrahend, ULONG *pulResult)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // esi
  HRESULT result; // eax

  if ( v4 < v3 )
    v5 = -1;
  else
    v5 = v4 - v3;
  result = v4 < v3 ? 0x80070216 : 0;
  *(_DWORD *)ulMinuend = v5;
  return result;
}
