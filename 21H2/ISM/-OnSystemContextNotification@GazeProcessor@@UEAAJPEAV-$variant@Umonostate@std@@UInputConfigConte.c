/*
 * XREFs of ?OnSystemContextNotification@GazeProcessor@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180189140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::OnSystemContextNotification(__int64 a1, __int64 a2)
{
  if ( !a2 || *(_BYTE *)(a2 + 64) != 1 )
    a2 = 0LL;
  if ( a2 )
    return GazeProcessor::UpdateDeviceTransformsFromInputConfig(
             (GazeProcessor *)(a1 - 8),
             (struct InputConfigContextMessage *)a2);
  else
    return 0LL;
}
