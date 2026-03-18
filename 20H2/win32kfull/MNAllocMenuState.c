/*
 * XREFs of MNAllocMenuState @ 0x1C02213E8
 * Callers:
 *     xxxMNStartMenuState @ 0x1C02225EC (xxxMNStartMenuState.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     MNSetupAnimationDC @ 0x1C0022E98 (MNSetupAnimationDC.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall MNAllocMenuState(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax

  if ( (gdwPUDFlags & 0x2000000) != 0 )
  {
    v2 = (_QWORD *)Win32AllocPoolWithQuota(144LL, 1953330005LL);
    if ( !v2 )
      return 0LL;
    v2[17] = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC((__int64)v2) )
    {
      Win32FreePool(v2);
      return 0LL;
    }
  }
  else
  {
    gdwPUDFlags |= 0x2000000u;
    v2 = (_QWORD *)gMenuState[0];
    GreSetDCOwnerEx(gMenuState[17], 2147483650LL, 0LL, 1LL);
  }
  memset(v2, 0, 0x88uLL);
  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground )
  {
    *((_DWORD *)v2 + 2) |= 0x2000000u;
    ++guSFWLockCount;
  }
  *v2 = **a1;
  v2[4] = gptiCurrent;
  *(_DWORD *)**a1 |= 0x20000000u;
  v2[6] = *(_QWORD *)(gptiCurrent + 608LL);
  result = v2;
  *(_QWORD *)(gptiCurrent + 608LL) = v2;
  return result;
}
