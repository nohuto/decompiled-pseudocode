/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x14076F604
 * Callers:
 *     WmipSendEnableRequest @ 0x1406F204C (WmipSendEnableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x14074211C (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140742764 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDoDisableRequest @ 0x140768230 (WmipDoDisableRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

LONG __fastcall WmipReleaseCollectionEnabled(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 16);
  if ( (result & 8) != 0 )
  {
    result = KeSetEvent(*(PRKEVENT *)(a1 + 96), 0, 0);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  return result;
}
