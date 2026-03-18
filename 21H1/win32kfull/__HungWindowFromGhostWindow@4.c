/*
 * XREFs of __HungWindowFromGhostWindow@4 @ 0x72334
 * Callers:
 *     _GetMonitorMaxArea@8 @ 0x7307A (_GetMonitorMaxArea@8.c)
 *     _NtUserHungWindowFromGhostWindow@4 @ 0xAC196 (_NtUserHungWindowFromGhostWindow@4.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _IsGhostWindow@4 @ 0x72B1C (_IsGhostWindow@4.c)
 */

_DWORD *__fastcall _HungWindowFromGhostWindow(int a1, int a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  unsigned int Prop; // eax
  _DWORD *v7; // eax

  v3 = 0;
  if ( IsGhostWindow(a1, a2) )
  {
    if ( !IsWindowBeingDestroyed(v4) )
    {
      Prop = _GetProp(a1, *(unsigned __int16 *)(_gpsi + 500), 1);
      if ( Prop || (Prop = _GetProp(a1, *(unsigned __int16 *)(_gpsi + 978), 1)) != 0 )
      {
        v7 = (_DWORD *)HMValidateHandleNoSecure(Prop, 1);
        v3 = v7;
        if ( v7 )
          return IsWindowBeingDestroyed(v7) == 0 ? v7 : 0;
      }
    }
  }
  return v3;
}
