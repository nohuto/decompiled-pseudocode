/*
 * XREFs of _IsWindowUnderActiveLockScreen@4 @ 0x26C7A
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x26176 (-DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _DCELogicalSpeedTopLevelHitTest@8 @ 0x150A63 (_DCELogicalSpeedTopLevelHitTest@8.c)
 *     ?_IsTaskWindow@@YGHPAUtagWND@@0@Z @ 0x15C703 (-_IsTaskWindow@@YGHPAUtagWND@@0@Z.c)
 *     __GetNextQueueWindow@12 @ 0x15D1B0 (__GetNextQueueWindow@12.c)
 * Callees:
 *     <none>
 */

int __thiscall IsWindowUnderActiveLockScreen(_DWORD *this)
{
  PVOID v1; // esi
  int v2; // edx
  int v4; // eax

  v1 = (PVOID)this[3];
  v2 = 0;
  if ( v1 )
  {
    if ( _gbLockScreenActive )
    {
      if ( grpdeskLogon != v1 )
      {
        v4 = *(_DWORD *)(this[5] + 148);
        if ( v4 < 2 || v4 > 3 && v4 != 14 && (unsigned int)(v4 - 17) > 1 )
          return 1;
      }
    }
  }
  return v2;
}
