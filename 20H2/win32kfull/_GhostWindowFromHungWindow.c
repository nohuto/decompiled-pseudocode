/*
 * XREFs of _GhostWindowFromHungWindow @ 0x1C0038DE0
 * Callers:
 *     DWP_GetEnabledPopup @ 0x1C00071C0 (DWP_GetEnabledPopup.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C0038D80 (NtUserGhostWindowFromHungWindow.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C00E43A4 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C00E4598 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     _VisrgnFromWindow @ 0x1C0114638 (_VisrgnFromWindow.c)
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall GhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 Prop; // rax
  __int64 v4; // rdx
  __int64 v6; // rax

  v2 = 0LL;
  if ( **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL);
    if ( Prop )
    {
      if ( Prop == -1 )
        Prop = 0LL;
    }
    else
    {
      Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
    }
    if ( Prop )
    {
      LOBYTE(v4) = 1;
      v6 = HMValidateHandleNoSecure(Prop, v4);
      v2 = v6;
      if ( v6 )
      {
        if ( (unsigned int)IsWindowBeingDestroyed(v6) )
          return 0LL;
      }
    }
  }
  return v2;
}
