/*
 * XREFs of ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1802547D0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AB870 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x180254208 (-AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802549C4 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicExclusiveView::ProcessSetSwapChain(
        CHolographicExclusiveView *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN *a3)
{
  unsigned int v6; // edx
  struct CResource *v7; // rbx
  struct CResource *ResourceWithoutType; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx

  if ( *((_BYTE *)this + 75) )
    return 2147942487LL;
  v6 = *((_DWORD *)a3 + 2);
  v7 = 0LL;
  if ( v6
    && (ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v6), (v7 = ResourceWithoutType) != 0LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
          ResourceWithoutType,
          40LL) )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x82u, 0LL);
  }
  else
  {
    CHolographicExclusiveView::ReleaseSwapChain(this);
    v11 = CHolographicExclusiveView::AttachSwapChain((RTL_SRWLOCK *)this, v7);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x89u, 0LL);
  }
  return v10;
}
