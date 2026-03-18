/*
 * XREFs of imp_WdfRequestSend @ 0x1C0001AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0001D10 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0001F90 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00155C4 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00187B0 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C002EDD8 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003BFE8 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A018 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005A318 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

bool __fastcall imp_WdfRequestSend(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        FxRequest *Request,
        unsigned __int64 Target,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v8; // r10
  unsigned int Flags; // edx
  __int64 v10; // rcx
  unsigned __int16 *v11; // rdi
  unsigned int v12; // eax
  char v14; // al
  unsigned __int64 *v15; // r15
  KIRQL v16; // r12
  char v17; // bl
  unsigned __int8 v18; // r8
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
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v5 = 0;
  v6 = ~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(Offset) = 0;
  if ( ((unsigned __int8)Request & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v6;
    v6 -= Offset;
  }
  if ( *(_WORD *)(v6 + 8) == 4104 )
  {
    v26 = (FxRequest *)v6;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v6, (void **)&v26, Request, 0x1008u, Offset);
    Target = (unsigned __int64)PPObject;
    v6 = (unsigned __int64)v26;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
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
          goto LABEL_10;
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
LABEL_10:
  if ( !Target )
    FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v6 + 16), WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v10) = 0;
  v11 = (unsigned __int16 *)(~Target & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Target & 1) != 0 )
  {
    v10 = *v11;
    v11 = (unsigned __int16 *)((char *)v11 - v10);
  }
  if ( v11[4] == 4608 )
  {
    PPObject = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v11, &PPObject, (void *)Target, 0x1200u, v10);
    v11 = (unsigned __int16 *)PPObject;
    v6 = (unsigned __int64)v26;
  }
  if ( Options && (v12 = Options->Flags, (v12 & 0xA) != 0) )
  {
    if ( (v12 & 2) != 0 )
    {
      LODWORD(Action) = 32;
      FxIoTarget::SubmitSync((FxIoTarget *)v11, (FxRequestBase *)v6, Options, (unsigned int *)&Action);
LABEL_19:
      LOBYTE(v5) = (_BYTE)Action;
      return (v5 & 4) != 0;
    }
    if ( (v12 & 8) == 0 )
      goto LABEL_19;
    if ( *(_BYTE *)(v6 + 213) )
    {
      if ( *(_WORD *)(v6 + 10) )
        v20 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v20 = 0LL;
      WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Cu, WPP_FxRequestApi_cpp_Traceguids, v20);
      v26->m_Irp.m_Irp->IoStatus.Status = -1073741436;
    }
    else
    {
      v19 = *(FxRequestContext **)(v6 + 168);
      if ( !v19 || !v19->m_RequestType )
      {
        FxRequest::PreProcessSendAndForget((FxRequest *)v6);
        (*(void (__fastcall **)(void *, _IRP *))(*(_QWORD *)PPObject + 104LL))(PPObject, v26->m_Irp.m_Irp);
        FxRequest::PostProcessSendAndForget(v26);
        return 1;
      }
      if ( *(_WORD *)(v6 + 10) )
        v21 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v21 = 0LL;
      WPP_IFR_SF_qL(
        *(_FX_DRIVER_GLOBALS **)(v6 + 16),
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
  else if ( *(_QWORD *)(v6 + 192) || *(_BYTE *)(v6 + 213) )
  {
    if ( Options )
      v5 = Options->Flags;
    v14 = *((_BYTE *)v11 + 24);
    LOBYTE(Action) = 0;
    if ( v14 < 0 && (v23 = (FxVerifierLock *)*((_QWORD *)v11 - 5)) != 0LL )
    {
      FxVerifierLock::Lock(v23, (unsigned __int8 *)&Action, Target);
      v16 = (unsigned __int8)Action;
      v15 = (unsigned __int64 *)(v11 + 56);
    }
    else
    {
      v15 = (unsigned __int64 *)(v11 + 56);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 14);
    }
    v17 = FxIoTarget::SubmitLocked((FxIoTarget *)v11, (FxRequestBase *)v6, Options, v5);
    if ( *((char *)v11 + 24) < 0 && (v24 = (FxVerifierLock *)*((_QWORD *)v11 - 5)) != 0LL )
      FxVerifierLock::Unlock(v24, v16, v18);
    else
      KeReleaseSpinLock(v15, v16);
    LOBYTE(v5) = v17;
    if ( (v17 & 1) != 0 )
    {
      LOBYTE(v5) = v17 | 4;
      (*(void (__fastcall **)(void *, _IRP *))(*(_QWORD *)PPObject + 104LL))(PPObject, v26->m_Irp.m_Irp);
    }
    else if ( (v17 & 2) != 0 )
    {
      LOBYTE(v5) = v17 | 4;
    }
  }
  else
  {
    if ( *(_WORD *)(v6 + 10) )
      v22 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v22 = 0LL;
    WPP_IFR_SF_qL(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Eu, WPP_FxRequestApi_cpp_Traceguids, v22, 0xC0000010);
    v26->m_Irp.m_Irp->IoStatus.Status = -1073741808;
    FxVerifierDbgBreakPoint(v26->m_Globals);
  }
  return (v5 & 4) != 0;
}
