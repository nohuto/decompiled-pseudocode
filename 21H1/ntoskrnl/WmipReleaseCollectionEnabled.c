/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x14076CE64
 * Callers:
 *     WmipSendEnableRequest @ 0x1406EAE74 (WmipSendEnableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x14074059C (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140740BE4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDoDisableRequest @ 0x140765E4C (WmipDoDisableRequest.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
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
