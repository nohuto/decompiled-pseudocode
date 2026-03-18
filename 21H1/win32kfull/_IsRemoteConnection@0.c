/*
 * XREFs of _IsRemoteConnection@0 @ 0x749B4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall IsRemoteConnection()
{
  return _gProtocolType != 0;
}
