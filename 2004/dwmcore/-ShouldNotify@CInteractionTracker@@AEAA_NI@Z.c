/*
 * XREFs of ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801CE2BC
 * Callers:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1801CB5C0 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801CCA84 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1801CD0B8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800A01FC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

unsigned __int8 __fastcall CInteractionTracker::ShouldNotify(CInteractionTracker *this)
{
  char ShouldNotify; // al
  __int64 v2; // rcx
  unsigned int v3; // r9d
  char v4; // r8
  int v5; // eax

  ShouldNotify = CNotificationResource::ShouldNotify(this);
  v4 = 0;
  if ( ShouldNotify )
  {
    v5 = *(_DWORD *)(v2 + 176);
    return _bittest(&v5, v3);
  }
  return v4;
}
