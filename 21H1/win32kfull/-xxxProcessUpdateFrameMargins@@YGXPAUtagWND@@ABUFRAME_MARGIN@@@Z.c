/*
 * XREFs of ?xxxProcessUpdateFrameMargins@@YGXPAUtagWND@@ABUFRAME_MARGIN@@@Z @ 0x17210
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     _SetWindowCompositionInfo@8 @ 0x2550C (_SetWindowCompositionInfo@8.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 */

void __fastcall xxxProcessUpdateFrameMargins(int a1, _DWORD *a2)
{
  _DWORD v4[9]; // [esp+Ch] [ebp-24h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( _GetWindowCompositionInfo(a1, v4) )
  {
    v4[7] = *a2;
    v4[8] = a2[1];
    SetWindowCompositionInfo(a1, v4);
  }
}
