/*
 * XREFs of imp_WdfRequestSend @ 0x1C000AF90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C000AEBC (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C000AF4C (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000B1D0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C001A8A0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C0053924 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006DC28 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

bool __fastcall imp_WdfRequestSend(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        FxRequest *Request,
        unsigned __int64 Target,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  unsigned int v5; // esi
  __int64 Offset; // rcx
  unsigned __int64 v7; // rdi
  _FX_DRIVER_GLOBALS *v8; // r10
  __int64 v9; // rcx
  unsigned __int16 *v10; // rbx
  char v11; // al
  unsigned __int64 *v12; // r15
  KIRQL v13; // r12
  char v14; // di
  unsigned __int8 v15; // r8
  unsigned int Flags; // edx
  unsigned int v18; // eax
  FxRequestContext *v19; // rax
  const void *v20; // rax
  const void *v21; // rax
  const void *v22; // rax
  FxVerifierLock *v23; // rcx
  FxVerifierLock *v24; // rcx
  _WDF_DRIVER_GLOBALS *Action; // [rsp+80h] [rbp+18h] BYREF
  FxRequest *v26; // [rsp+88h] [rbp+20h] BYREF
  void *PPObject; // [rsp+90h] [rbp+28h] BYREF

  PPObject = (void *)Target;
  v26 = Request;
  Action = DriverGlobals;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v5 = 0;
  LOWORD(Offset) = 0;
  v7 = ~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL;
  if ( ((unsigned __int8)Request & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v7;
    v7 -= Offset;
  }
  if ( *(_WORD *)(v7 + 8) == 4104 )
  {
    v26 = (FxRequest *)v7;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v7, (void **)&v26, Request, 0x1008u, Offset);
    Target = (unsigned __int64)PPObject;
    v7 = (unsigned __int64)v26;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(v7 + 16);
  if ( Options )
  {
    if ( Options->Size == 16 )
    {
      Flags = Options->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(v8, Flags, 6u, 0xBu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, Flags, 0xFu);
      }
      else
      {
        if ( (Flags & 0xFFFFFFF7) == 0 || (Flags & 8) == 0 )
          goto LABEL_7;
        WPP_IFR_SF_qDd(v8, Flags, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 8u, Flags);
      }
    }
    else
    {
      WPP_IFR_SF_qdd(v8, 2u, 6u, 0xAu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 16, Options->Size);
    }
    v26->m_Irp.m_Irp->IoStatus.Status = -1073741811;
    FxVerifierDbgBreakPoint(v26->m_Globals);
    return 0;
  }
LABEL_7:
  if ( !Target )
    FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v7 + 16), WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v9) = 0;
  v10 = (unsigned __int16 *)(~Target & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Target & 1) != 0 )
  {
    v9 = *v10;
    v10 = (unsigned __int16 *)((char *)v10 - v9);
  }
  if ( v10[4] == 4608 )
  {
    PPObject = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v10, &PPObject, (void *)Target, 0x1200u, v9);
    v10 = (unsigned __int16 *)PPObject;
    v7 = (unsigned __int64)v26;
  }
  if ( Options && (v18 = Options->Flags, (v18 & 0xA) != 0) )
  {
    if ( (v18 & 2) != 0 )
    {
      LODWORD(Action) = 32;
      FxIoTarget::SubmitSync((FxIoTarget *)v10, (FxRequestBase *)v7, Options, (unsigned int *)&Action);
LABEL_32:
      LOBYTE(v5) = (_BYTE)Action;
      return (v5 & 4) != 0;
    }
    if ( (v18 & 8) == 0 )
      goto LABEL_32;
    if ( *(_BYTE *)(v7 + 213) )
    {
      if ( *(_WORD *)(v7 + 10) )
        v20 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v20 = 0LL;
      WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v7 + 16), 2u, 0xEu, 0x2Cu, WPP_FxRequestApi_cpp_Traceguids, v20);
      v26->m_Irp.m_Irp->IoStatus.Status = -1073741436;
    }
    else
    {
      v19 = *(FxRequestContext **)(v7 + 168);
      if ( !v19 || !v19->m_RequestType )
      {
        FxRequest::PreProcessSendAndForget((FxRequest *)v7);
        (*(void (__fastcall **)(void *, _IRP *))(*(_QWORD *)PPObject + 104LL))(PPObject, v26->m_Irp.m_Irp);
        FxRequest::PostProcessSendAndForget(v26);
        return 1;
      }
      if ( *(_WORD *)(v7 + 10) )
        v21 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v21 = 0LL;
      WPP_IFR_SF_qL(
        *(_FX_DRIVER_GLOBALS **)(v7 + 16),
        2u,
        0xEu,
        0x2Du,
        WPP_FxRequestApi_cpp_Traceguids,
        v21,
        0xC0000010);
      v26->m_Irp.m_Irp->IoStatus.Status = -1073741808;
      FxVerifierDbgBreakPoint(v26->m_Globals);
    }
  }
  else if ( *(_QWORD *)(v7 + 192) || *(_BYTE *)(v7 + 213) )
  {
    if ( Options )
      v5 = Options->Flags;
    v11 = *((_BYTE *)v10 + 24);
    LOBYTE(Action) = 0;
    if ( v11 < 0 && (v23 = (FxVerifierLock *)*((_QWORD *)v10 - 5)) != 0LL )
    {
      FxVerifierLock::Lock(v23, (unsigned __int8 *)&Action, Target);
      v13 = (unsigned __int8)Action;
      v12 = (unsigned __int64 *)(v10 + 56);
    }
    else
    {
      v12 = (unsigned __int64 *)(v10 + 56);
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 14);
    }
    v14 = FxIoTarget::SubmitLocked((FxIoTarget *)v10, (FxRequestBase *)v7, Options, v5);
    if ( *((char *)v10 + 24) < 0 && (v24 = (FxVerifierLock *)*((_QWORD *)v10 - 5)) != 0LL )
      FxVerifierLock::Unlock(v24, v13, v15);
    else
      KeReleaseSpinLock(v12, v13);
    LOBYTE(v5) = v14;
    if ( (v14 & 1) != 0 )
    {
      LOBYTE(v5) = v14 | 4;
      (*(void (__fastcall **)(void *, _IRP *))(*(_QWORD *)PPObject + 104LL))(PPObject, v26->m_Irp.m_Irp);
    }
    else if ( (v14 & 2) != 0 )
    {
      LOBYTE(v5) = v14 | 4;
    }
  }
  else
  {
    if ( *(_WORD *)(v7 + 10) )
      v22 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v22 = 0LL;
    WPP_IFR_SF_qL(*(_FX_DRIVER_GLOBALS **)(v7 + 16), 2u, 0xEu, 0x2Eu, WPP_FxRequestApi_cpp_Traceguids, v22, 0xC0000010);
    v26->m_Irp.m_Irp->IoStatus.Status = -1073741808;
    FxVerifierDbgBreakPoint(v26->m_Globals);
  }
  return (v5 & 4) != 0;
}
