/*
 * XREFs of ?GetTopByReference@?$CWatermarkStack@M$0EA@$01$09@@QEBAPEBMXZ @ 0x1801B5050
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1801B4E34 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B5874 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<float,64,2,10>::GetTopByReference(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 16) + 4LL * (unsigned int)(*(_DWORD *)a1 - 1);
  return result;
}
