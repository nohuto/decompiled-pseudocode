/*
 * XREFs of _PowerOffGdi@0 @ 0xD4366
 * Callers:
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned int __thiscall PowerOffGdi(void *this)
{
  int MDEVPowerState; // esi
  unsigned int result; // eax

  TransitionCursorSuppressionState((int)this, 2, 0);
  MDEVPowerState = DrvQueryMDEVPowerState(*(_DWORD *)(_gpDispInfo + 8));
  if ( MDEVPowerState )
  {
    SafeDisableMDEV(2);
    DestroyMonitorDCs();
    _gbGDIOn = 0;
  }
  DrvDxgkLogCodePointPacket(12, _gPowerState[10] == 5, 0, 0);
  result = DrvSetMDEVPowerState(*(_DWORD *)(_gpDispInfo + 8), 0);
  if ( MDEVPowerState )
  {
    result = _gPowerState[0];
    if ( _gPowerState[10] == 5 )
    {
      result = *(_DWORD *)(_gptiCurrent + 248);
      if ( result )
      {
        result = *(_DWORD *)(result + 4);
        if ( result )
        {
          result = *(_DWORD *)(result + 84);
          if ( result )
            return _PostMessage(result, 536, 12, 0);
        }
      }
    }
  }
  return result;
}
