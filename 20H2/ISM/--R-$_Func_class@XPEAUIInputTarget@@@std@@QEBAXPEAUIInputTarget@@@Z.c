/*
 * XREFs of ??R?$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z @ 0x1800AEC40
 * Callers:
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800AFBE0 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 *     ?CreateSpatialInteractionObjectDevices@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@SAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WV?$function@$$A6AJPEAVSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800D6CB0 (-CreateSpatialInteractionObjectDevices@SpatialInteractionObjectDevice@SpatialInteractions@Intern.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,IInputTarget *>::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
