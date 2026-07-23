/*
 * XREFs of _TppInitializeTimerQueue@8 @ 0x4B2B4037
 * Callers:
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 * Callees:
 *     _TppDestroyTimerSubQueue@4 @ 0x4B2AB7C4 (_TppDestroyTimerSubQueue@4.c)
 *     _TppInitializeTimerSubQueue@12 @ 0x4B2B407F (_TppInitializeTimerSubQueue@12.c)
 */

int __thiscall TppInitializeTimerQueue(_DWORD *this)
{
  int v2; // esi

  *this = 0;
  this[38] = 0;
  v2 = TppInitializeTimerSubQueue(this + 2, 1);
  if ( v2 >= 0 )
  {
    v2 = TppInitializeTimerSubQueue(this + 20, 0);
    if ( v2 < 0 )
      TppDestroyTimerSubQueue((int)(this + 2));
  }
  return v2;
}
