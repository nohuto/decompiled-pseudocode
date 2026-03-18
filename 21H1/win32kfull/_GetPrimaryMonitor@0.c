/*
 * XREFs of _GetPrimaryMonitor@0 @ 0xAE588
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     <none>
 */

int __stdcall GetPrimaryMonitor()
{
  return *(_DWORD *)(GetDispInfo() + 52);
}
