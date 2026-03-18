/*
 * XREFs of PnpCancelStopDeviceSubtree @ 0x1408B3F54
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x1408B3F54 (PnpCancelStopDeviceSubtree.c)
 *     PnpRebalance @ 0x1408B4384 (PnpRebalance.c)
 * Callees:
 *     PnpCancelStopDeviceNode @ 0x1408B3EC4 (PnpCancelStopDeviceNode.c)
 *     PnpCancelStopDeviceSubtree @ 0x1408B3F54 (PnpCancelStopDeviceSubtree.c)
 */

__int64 __fastcall PnpCancelStopDeviceSubtree(ULONG_PTR a1)
{
  __int64 result; // rax
  _QWORD *i; // rbx

  result = PnpCancelStopDeviceNode(a1);
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    result = PnpCancelStopDeviceSubtree(i);
  return result;
}
