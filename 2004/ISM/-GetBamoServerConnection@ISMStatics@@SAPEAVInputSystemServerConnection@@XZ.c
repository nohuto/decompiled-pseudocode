/*
 * XREFs of ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8
 * Callers:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B38 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x180013E50 (std--_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAGE.c)
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015620 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180019390 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800274D4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x180033170 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800461B8 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B370 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x18009B500 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009B5F0 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C1C0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x18009C360 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800BBC1C (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?StartManualDrag@DragAreaClientProxy@@MEAAJI@Z @ 0x1800F56D0 (-StartManualDrag@DragAreaClientProxy@@MEAAJI@Z.c)
 *     ?Initialize@DragNDropProcessor@@AEAAJXZ @ 0x1800F9CC8 (-Initialize@DragNDropProcessor@@AEAAJXZ.c)
 *     ?Initialize@ResizeProcessor@@AEAAJXZ @ 0x1800FDEDC (-Initialize@ResizeProcessor@@AEAAJXZ.c)
 *     ?OnDockDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1801264B8 (-OnDockDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?OnDockableDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x180126758 (-OnDockableDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 *     ?PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ @ 0x18012C934 (-PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ.c)
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x18012ED94 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 *     ?RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x180171910 (-RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV-$ComPtr@UISystemInputRouter@@@WRL@Mic.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x180177320 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ?Initialize@DockProcessor@@IEAAJXZ @ 0x1801880D8 (-Initialize@DockProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180030E98 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180033518 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct InputSystemServerConnection *ISMStatics::GetBamoServerConnection(void)
{
  struct InputSystemServerConnection *result; // rax
  int v1; // eax
  struct InputSystemServerConnection **v2; // rax
  struct InputSystemServerConnection *v3; // rcx
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v8; // [rsp+38h] [rbp+10h] BYREF

  result = ISMStatics::s_inputSystemBamoConnection;
  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v7);
    v1 = CoreUICreate(&v7);
    if ( v1 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v1,
        v5);
      JUMPOUT(0x180059B60LL);
    }
    v2 = (struct InputSystemServerConnection **)InputSystemServerConnection::Create((unsigned int)&v8);
    v3 = *v2;
    *v2 = 0LL;
    ISMStatics::s_inputSystemBamoConnection = v3;
    v4 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v4);
    }
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v7);
    return ISMStatics::s_inputSystemBamoConnection;
  }
  return result;
}
