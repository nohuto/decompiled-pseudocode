/*
 * XREFs of _ValidateHwndIAMComponetUIAware@4 @ 0x260B6
 * Callers:
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAE592 (-GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall ValidateHwndIAMComponetUIAware(void *this)
{
  struct tagWND *Host; // eax
  const struct tagWND *v4; // [esp+0h] [ebp-Ch]
  const struct tagWND *v5; // [esp+0h] [ebp-Ch]

  _gbValidateHandleForIL = 0;
  if ( ValidateHwnd(this) )
  {
    if ( CoreWindowProp::IsComponent(v4) )
    {
      Host = CoreWindowProp::GetHost(v5);
      if ( Host )
      {
        if ( *(_DWORD *)(*((_DWORD *)Host + 2) + 232) == *(_DWORD *)(_gptiCurrent + 232) )
          _gbValidateHandleForIL = 0;
      }
    }
  }
  if ( IAMThreadAccessGranted(_gptiCurrent) )
    _gbValidateHandleForIL = 0;
  return ValidateHwnd(this);
}
