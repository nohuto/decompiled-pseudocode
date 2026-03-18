/*
 * XREFs of ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016724
 * Callers:
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0001A40 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0001F00 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtUnBindCompositionSurface @ 0x1C0002250 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C00026D0 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0002A00 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C0002C10 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C0002ED0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0005880 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000C5F0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C00155C0 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     NtValidateCompositionSurfaceHandle @ 0x1C0018690 (NtValidateCompositionSurfaceHandle.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001BA00 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D4C0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C001D840 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z @ 0x1C006335C (-DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0063560 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C0063620 (NtNotifyPresentToCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C00639C0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0063BC0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0063CC0 (NtSetCompositionSurfaceStatistics.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C006C170 (-Initialize@CContentResource@@IEAAJXZ.c)
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0287DEC (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B46C0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct CompositionSurfaceObject **a4)
{
  struct CompositionSurfaceObject *v4; // rsi
  NTSTATUS v6; // eax
  struct CompositionSurfaceObject *v7; // rdi
  int v8; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = 0LL;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, a2, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v7 = (struct CompositionSurfaceObject *)Object;
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)v7 + 2) + 16LL))(*((_QWORD **)v7 + 2)) == 1 )
        v4 = v7;
      else
        v8 = -1073741788;
    }
    else
    {
      v8 = -1073741816;
    }
    if ( v8 < 0 )
      ObfDereferenceObject(v7);
    else
      *a4 = v4;
  }
  return (unsigned int)v8;
}
