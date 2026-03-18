/*
 * XREFs of _PostMousePointerLeaveAndCleanup@8 @ 0x14E54F
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     __PostTransformableMessage@20 @ 0x7F9FE (__PostTransformableMessage@20.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     ?StopMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z @ 0x14DB71 (-StopMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z.c)
 *     _IsMiPEnabledForWindow@4 @ 0x14E372 (_IsMiPEnabledForWindow@4.c)
 */

int __stdcall PostMousePointerLeaveAndCleanup(int a1, _DWORD *a2)
{
  int *v2; // edi
  int v3; // edi
  char v4; // al
  int Prop; // eax
  int v6; // ebx

  v2 = a2 + 2;
  if ( !a2 )
    v2 = (int *)_gptiCurrent;
  v3 = *v2;
  if ( *(_DWORD *)(v3 + 720) )
  {
    v4 = a2 ? _GetProp((int)a2, _gatomMiPFlags, 1) : 0;
    if ( (v4 & 1) == 0 )
    {
      if ( a2 )
        Prop = _GetProp((int)a2, _gatomMiPFlags, 1);
      else
        Prop = 0;
      if ( a2 )
        InternalSetProp((int)a2, _gatomMiPFlags, Prop | 1, 5);
      if ( !a1 || v3 != *(_DWORD *)(a1 + 8) )
      {
        **(_DWORD **)(v3 + 720) &= ~4u;
        **(_DWORD **)(v3 + 720) &= ~0x10u;
        **(_DWORD **)(v3 + 720) &= ~2u;
        **(_DWORD **)(v3 + 720) &= ~8u;
      }
      v6 = *(_DWORD *)(v3 + 720);
      if ( (*(_BYTE *)v6 & 1) != 0 )
      {
        if ( !a2 )
          goto LABEL_22;
        if ( IsMiPEnabledForWindow(a2) )
          _PostTransformableMessage(a2, 586, ((*(_WORD *)(v6 + 28) & 0xE1F7) << 16) | 1, 0, 0);
      }
      if ( a2 && *a2 != *(_DWORD *)(*(_DWORD *)(v3 + 236) + 324) )
      {
LABEL_23:
        if ( a2 )
          StopMiPIdleNotificationTimer(a2);
        return 1;
      }
LABEL_22:
      *(_DWORD *)(*(_DWORD *)(v3 + 236) + 324) = 0;
      goto LABEL_23;
    }
  }
  return 1;
}
