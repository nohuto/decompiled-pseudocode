/*
 * XREFs of ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0007230
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003FB0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0010358 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C002FAA4 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0002374 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C00065CC (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0007188 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C0007810 (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0069E70 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7E0C (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::_CreateForPackage(
        FxDevice *Device,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        FX_POOL ***Request)
{
  FX_POOL **RequestMemory; // rax
  FX_POOL **v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // rdx
  __int64 v11; // rax
  char *v12; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  FX_POOL *v15; // rax
  int v16; // ebp
  void *PPObject; // [rsp+78h] [rbp+20h] BYREF

  *Request = 0LL;
  RequestMemory = FxDevice::AllocateRequestMemory(Device, RequestAttributes);
  v9 = RequestMemory;
  if ( RequestMemory )
  {
    FxRequestBase::FxRequestBase(
      (FxRequestBase *)RequestMemory,
      Device->m_Globals,
      0x168u,
      Irp,
      FxRequestDoesNotOwnIrp,
      FxRequestConstructorCallerIsFx,
      FxObjectTypeExternal);
    v9[33] = 0LL;
    v9[32] = (FX_POOL *)FxRequestSystemBuffer::`vftable';
    v9[34] = (FX_POOL *)FxRequestOutputBuffer::`vftable';
    v9[35] = 0LL;
    *((_WORD *)v9 + 116) = 232;
    *((_WORD *)v9 + 108) = 216;
    v9[37] = (FX_POOL *)(v9 + 36);
    v9[36] = (FX_POOL *)(v9 + 36);
    v9[39] = (FX_POOL *)(v9 + 38);
    v9[38] = (FX_POOL *)(v9 + 38);
    v9[41] = (FX_POOL *)(v9 + 40);
    v9[40] = (FX_POOL *)(v9 + 40);
    *v9 = (FX_POOL *)FxRequestFromLookaside::`vftable';
    v9[31] = 0LL;
    *((_BYTE *)v9 + 353) = 0;
    *((_BYTE *)v9 + 352) = 0;
    *((_WORD *)v9 + 177) = 0;
    v9[42] = 0LL;
    v9[43] = 0LL;
    v9[12] = (FX_POOL *)Device->m_DeviceBase;
    if ( Irp )
      FxRequest::AssignMemoryBuffers((FxRequest *)v9, Device->m_ReadWriteIoType);
    if ( Device->m_Globals->FxRequestParentOptimizationOn )
    {
      v10 = 0LL;
      PPObject = 0LL;
      if ( *((_WORD *)v9 + 5) )
      {
        if ( !RequestAttributes )
        {
LABEL_18:
          v15 = v9[2];
          *((_WORD *)v9 + 12) |= 8u;
          if ( *(&v15[2].NonPagedLock.m_DbgFlagIsInitialized + 4) )
            FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v9, v10);
          v16 = 0;
          goto LABEL_21;
        }
        if ( RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
        {
          FxObject::MarkPassiveCallbacks((FxObject *)v9, ObjectLock);
          v10 = (_FX_DRIVER_GLOBALS *)PPObject;
        }
        if ( RequestAttributes->ParentObject )
        {
          FxObjectHandleGetPtr(
            (_FX_DRIVER_GLOBALS *)v9[2],
            (unsigned __int64)RequestAttributes->ParentObject,
            0x1000u,
            &PPObject);
          v10 = (_FX_DRIVER_GLOBALS *)PPObject;
        }
        if ( !v10 || (v16 = FxObject::AssignParentObject((FxObject *)v9, (FxObject *)v10), v16 >= 0) )
        {
          v11 = *((unsigned __int16 *)v9 + 5);
          if ( (_WORD)v11 )
            v12 = (char *)v9 + v11;
          else
            v12 = 0LL;
          EvtDestroyCallback = RequestAttributes->EvtDestroyCallback;
          if ( EvtDestroyCallback )
            *((_QWORD *)v12 + 3) = EvtDestroyCallback;
          EvtCleanupCallback = RequestAttributes->EvtCleanupCallback;
          if ( EvtCleanupCallback )
          {
            *((_QWORD *)v12 + 2) = EvtCleanupCallback;
            *((_WORD *)v9 + 12) |= 0x400u;
          }
          goto LABEL_18;
        }
      }
      else
      {
        v16 = -1073741816;
      }
    }
    else
    {
      v16 = FxObject::Commit((FxObject *)v9, (_FX_DRIVER_GLOBALS *)RequestAttributes, 0LL, Device, 0);
      if ( v16 >= 0 )
      {
LABEL_21:
        *Request = v9;
        return (unsigned int)v16;
      }
    }
    WPP_IFR_SF_d(Device->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v16);
    FxObject::ClearEvtCallbacks((FxObject *)v9);
    ((void (__fastcall *)(FX_POOL **))(*v9)->PagedLock.m_Lock.Owner)(v9);
    return (unsigned int)v16;
  }
  WPP_IFR_SF_d(Device->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
  return 3221225626LL;
}
