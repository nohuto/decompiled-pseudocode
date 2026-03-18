/*
 * XREFs of ?HasOpenGlContext@DXGDEVICE@@QEAAEXZ @ 0x1C0148CC4
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01488B0 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::HasOpenGlContext(DXGDEVICE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *i; // rax
  __int64 v6; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v6 + 24) = 5265LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = (_DWORD *)*((_QWORD *)this + 58); ; i = *(_DWORD **)i )
  {
    if ( i == (_DWORD *)((char *)this + 464) || !i )
      return 0;
    if ( i[36] == 1 )
      break;
  }
  return 1;
}
