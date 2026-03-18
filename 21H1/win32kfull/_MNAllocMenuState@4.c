/*
 * XREFs of _MNAllocMenuState@4 @ 0x1843C6
 * Callers:
 *     _xxxMNStartMenuState@12 @ 0x184D3D (_xxxMNStartMenuState@12.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _MNSetupAnimationDC@4 @ 0xD6DB0 (_MNSetupAnimationDC@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __thiscall MNAllocMenuState(_DWORD **this)
{
  HDC v2; // eax
  HDC v3; // esi
  HDC result; // eax

  if ( (_gdwPUDFlags & 0x2000000) != 0 )
  {
    v2 = (HDC)Win32AllocPoolWithQuota(100, 1953330005);
    v3 = v2;
    if ( !v2 )
      return 0;
    *((_DWORD *)v2 + 24) = 0;
    if ( !MNSetupAnimationDC((HDC *)v2) )
    {
      Win32FreePool(v3);
      return 0;
    }
  }
  else
  {
    _gdwPUDFlags |= 0x2000000u;
    v3 = _gMenuState[0];
    GreSetDCOwnerEx(_gMenuState[24], -2147483646, 0, 1);
  }
  memset(v3, 0, 0x60u);
  if ( *(_DWORD *)(_gptiCurrent + 236) == _gpqForeground )
  {
    *((_DWORD *)v3 + 1) |= 0x2000000u;
    ++guSFWLockCount;
  }
  *(_DWORD *)v3 = *(_DWORD *)(HDC)*this;
  *((_DWORD *)v3 + 6) = _gptiCurrent;
  *(_DWORD *)**this |= 0x20000000u;
  *(_DWORD *)(v3 + 8) = *(_DWORD *)(HDC)(_gptiCurrent + 328);
  result = v3;
  *(_DWORD *)(_gptiCurrent + 328) = v3;
  return result;
}
