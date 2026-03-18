/*
 * XREFs of __GhostWindowFromHungWindow@4 @ 0x72BC6
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _NtUserGhostWindowFromHungWindow@4 @ 0x72B8C (_NtUserGhostWindowFromHungWindow@4.c)
 *     __VisrgnFromWindow@12 @ 0xA99E4 (__VisrgnFromWindow@12.c)
 *     ?GetLayeredRegion@@YG_NPAUtagWND@@PAUHRGN__@@PA_N@Z @ 0xF4610 (-GetLayeredRegion@@YG_NPAUtagWND@@PAUHRGN__@@PA_N@Z.c)
 *     ?GetVisRgn@@YG_NPAUtagWND@@KPAUHRGN__@@@Z @ 0xF46F8 (-GetVisRgn@@YG_NPAUtagWND@@KPAUHRGN__@@@Z.c)
 *     _DWP_GetEnabledPopup@4 @ 0x1A1D7D (_DWP_GetEnabledPopup@4.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _IsGhostWindowClass@4 @ 0x72C42 (_IsGhostWindowClass@4.c)
 */

_DWORD *__thiscall _GhostWindowFromHungWindow(void *this)
{
  _DWORD *v2; // esi
  int Prop; // eax
  unsigned int v4; // eax
  _DWORD *v6; // eax

  v2 = 0;
  if ( !IsGhostWindowClass(this) )
  {
    Prop = _GetProp((int)this, *(unsigned __int16 *)(_gpsi + 500), 1);
    if ( Prop )
      v4 = Prop != -1 ? Prop : 0;
    else
      v4 = _GetProp((int)this, *(unsigned __int16 *)(_gpsi + 978), 1);
    if ( v4 )
    {
      v6 = (_DWORD *)HMValidateHandleNoSecure(v4, 1);
      v2 = v6;
      if ( v6 )
        return IsWindowBeingDestroyed(v6) == 0 ? v6 : 0;
    }
  }
  return v2;
}
