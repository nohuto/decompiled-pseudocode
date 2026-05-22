/*
 * XREFs of ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F5DC
 * Callers:
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x1800224F8 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ??0TestCommandHost@@AEAA@XZ @ 0x180022640 (--0TestCommandHost@@AEAA@XZ.c)
 *     ?CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ @ 0x18003A0B0 (-CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ.c)
 *     ??$GetActivationFactory@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@@wil@@YA?AV?$com_ptr_t@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18007F478 (--$GetActivationFactory@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@.c)
 *     ??$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@@wil@@YA?AV?$com_ptr_t@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18008BBB0 (--$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Window.c)
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18008DBD8 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 *     _lambda_e553b185ff1de720e49cf48bc3fd719c_::_lambda_invoker_cdecl_ @ 0x1800BBF40 (_lambda_e553b185ff1de720e49cf48bc3fd719c_--_lambda_invoker_cdecl_.c)
 *     ??$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UIDispatcherQueueControllerStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180105BC4 (--$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA-AV-$com_ptr_.c)
 *     ??$copy_to@UIPropertyValue@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x18010F514 (--$copy_to@UIPropertyValue@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy.c)
 *     ?AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x18013B590 (-AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCust.c)
 *     ?CreateCursorForDevice@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x18013B900 (-CreateCursorForDevice@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z.c)
 *     ?CreateCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x18013BAE0 (-CreateCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x18013BD30 (-CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStu.c)
 *     ?DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x18013C1C0 (-DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K.c)
 *     ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x18013C480 (-DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerSt.c)
 *     ?EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x18013C890 (-EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800357A8 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Throw_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, a2, a3, 0LL, 0LL, retaddr);
}
