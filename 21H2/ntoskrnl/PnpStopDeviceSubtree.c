/*
 * XREFs of PnpStopDeviceSubtree @ 0x14095A388
 * Callers:
 *     PiProcessDeviceResetAction @ 0x140560174 (PiProcessDeviceResetAction.c)
 *     PnpRebalance @ 0x14095A02C (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x14095A388 (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     IopQueryReconfiguration @ 0x1409588F0 (IopQueryReconfiguration.c)
 *     PnpStopDeviceSubtree @ 0x14095A388 (PnpStopDeviceSubtree.c)
 */

__int64 __fastcall PnpStopDeviceSubtree(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    result = PnpStopDeviceSubtree(i);
  if ( *(_DWORD *)(a1 + 300) == 779 )
  {
    IopQueryReconfiguration(4, *(struct _DEVICE_OBJECT **)(a1 + 32));
    return PipSetDevNodeState(a1, 780);
  }
  return result;
}
