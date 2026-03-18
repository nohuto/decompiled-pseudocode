/*
 * XREFs of ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C003D238
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1C021E6F0 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  DXGADAPTER *v8; // rdx
  unsigned __int8 result; // al

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 6101LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 6102LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = this[14];
  result = 1;
  if ( *((_DWORD *)v8 + 992 * v3 + 174) != 1 || !*((_QWORD *)v8 + 496 * v3 + 88) )
    return 0;
  return result;
}
