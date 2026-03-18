/*
 * XREFs of ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001BD98
 * Callers:
 *     ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C015DB30 (-QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C021E6F0 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     <none>
 */

struct DXGDEVICE *__fastcall ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(ADAPTER_DISPLAY *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 6088LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return *(struct DXGDEVICE **)(3968 * v3 + *((_QWORD *)this + 14) + 704);
}
