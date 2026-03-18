/*
 * XREFs of imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C000D080
 * Callers:
 *     <none>
 * Callees:
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0001A90 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C000CDB0 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C00196C8 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_dd @ 0x1C002E798 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C0032554 (WPP_IFR_SF_.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0049D0C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004ECD8 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z @ 0x1C00536CC (-SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00591D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C0062F94 (WPP_IFR_SF_qqDqqq.c)
 *     WPP_IFR_SF_qqDqqqd @ 0x1C00630DC (WPP_IFR_SF_qqDqqqd.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForInternalIoctlOthers(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        unsigned __int64 Request,
        unsigned int Ioctl,
        WDFMEMORY__ *OtherArg1,
        _WDFMEMORY_OFFSET *OtherArg1Offsets,
        WDFMEMORY__ *OtherArg2,
        _WDFMEMORY_OFFSET *OtherArg2Offsets,
        WDFMEMORY__ *OtherArg4,
        _WDFMEMORY_OFFSET *OtherArg4Offsets)
{
  unsigned int _a6; // r10d
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  FxIoTarget *v14; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  __int64 v16; // rdx
  FxRequest *v17; // rcx
  __int64 v18; // rbx
  unsigned int v19; // edi
  WDFMEMORY__ *v20; // rdx
  FxRequest *v21; // r14
  FxIoTarget *v22; // r13
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rbx
  _FX_DRIVER_GLOBALS *v25; // rax
  CCHAR m_TargetStackSize; // cl
  void *v27; // rbx
  IFxMemory *Memory; // rax
  IFxMemory *v29; // rax
  unsigned __int16 v30; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _WDFMEMORY_OFFSET **v32; // r15
  unsigned int v33; // edi
  FxRequestBuffer::<unnamed_type_u> *p_u; // rsi
  _IO_STACK_LOCATION *v35; // rcx
  _QWORD *p_ProviderId; // rbx
  int Mdl; // ecx
  int id; // ebx
  _FX_DRIVER_GLOBALS *v39; // rax
  void *level; // rdx
  void *flags; // r8
  FxRequestContext *v42; // rcx
  void *globals; // rax
  _WDFMEMORY_OFFSET *v45; // r14
  int v46; // ecx
  __int64 (*GetBuffer)(void); // rax
  __int64 v48; // rcx
  FX_POOL **v49; // rax
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v51; // r15
  unsigned __int16 v52; // ax
  const void *v53; // r13
  unsigned __int16 v54; // r9
  _IRP *Irp; // rax
  unsigned __int8 v56; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v58; // rcx
  unsigned __int64 v59; // r13
  _IRP *v60; // rax
  _IRP *v61; // rbx
  const void *v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r8
  int v65; // ecx
  int v66; // ecx
  _MDL *v67; // rcx
  char *MappedSystemVa; // rax
  _WDFMEMORY_OFFSET *v69; // rcx
  _MDL *v70; // rcx
  PVOID v71; // rax
  const _GUID *Tag; // [rsp+20h] [rbp-E0h]
  FxIoTarget *pTarget; // [rsp+68h] [rbp-98h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp-90h] BYREF
  void *v76; // [rsp+78h] [rbp-88h]
  void *v77; // [rsp+80h] [rbp-80h]
  void *v78; // [rsp+88h] [rbp-78h]
  void *v79; // [rsp+90h] [rbp-70h]
  void *v80; // [rsp+98h] [rbp-68h]
  _WDFMEMORY_OFFSET *offsets[3]; // [rsp+A0h] [rbp-60h] BYREF
  FxRequestBuffer args[3]; // [rsp+C0h] [rbp-40h] BYREF
  IFxMemory *pMemory[3]; // [rsp+120h] [rbp+20h] BYREF
  WDFMEMORY__ *memoryHandles[3]; // [rsp+138h] [rbp+38h]
  void *Caller; // [rsp+198h] [rbp+98h]

  v80 = (void *)Request;
  _a6 = Ioctl;
  v79 = IoTarget;
  v12 = (unsigned __int64)IoTarget;
  v76 = OtherArg1;
  v77 = OtherArg2;
  v78 = OtherArg4;
  pTarget = 0LL;
  pRequest = 0LL;
  args[0].DataType = FxRequestBufferUnspecified;
  args[0].u.RefMdl.Mdl = 0LL;
  args[1].DataType = FxRequestBufferUnspecified;
  args[1].u.RefMdl.Mdl = 0LL;
  args[2].DataType = FxRequestBufferUnspecified;
  args[2].u.RefMdl.Mdl = 0LL;
  memset(pMemory, 0, sizeof(pMemory));
  args[0].u.Memory = 0LL;
  args[1].u.Memory = 0LL;
  args[2].u.Memory = 0LL;
  if ( !IoTarget )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v13) = 0;
  v14 = (FxIoTarget *)(~v12 & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (v12 & 1) != 0 )
  {
    v13 = LOWORD(v14->__vftable);
    v14 = (FxIoTarget *)((char *)v14 - v13);
  }
  if ( v14->m_Type == 4608 )
  {
    pTarget = v14;
  }
  else
  {
    FxObjectHandleGetPtrQI(v14, (void **)&pTarget, (void *)v12, 0x1200u, v13);
    v14 = pTarget;
    v12 = (unsigned __int64)v79;
    _a6 = Ioctl;
  }
  m_Globals = v14->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqq(
      m_Globals,
      v13,
      v12,
      0x37u,
      Tag,
      (const void *)v12,
      (const void *)Request,
      _a6,
      OtherArg1,
      OtherArg2,
      OtherArg4);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v16) = 0;
  v17 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v16 = LOWORD(v17->__vftable);
    v17 = (FxRequest *)((char *)v17 - v16);
  }
  if ( v17->m_Type == 4104 )
    pRequest = v17;
  else
    FxObjectHandleGetPtrQI(v17, (void **)&pRequest, (void *)Request, 0x1008u, v16);
  offsets[0] = OtherArg1Offsets;
  offsets[1] = OtherArg2Offsets;
  memoryHandles[0] = OtherArg1;
  v18 = 0LL;
  memoryHandles[1] = OtherArg2;
  v19 = 0;
  offsets[2] = OtherArg4Offsets;
  memoryHandles[2] = OtherArg4;
  do
  {
    v20 = memoryHandles[v18];
    if ( v20 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)v20, 0x100Au, (void **)&pMemory[v19]);
      v45 = offsets[v18];
      if ( v45 )
      {
        BufferLength = v45->BufferLength;
        v51 = BufferLength + v45->BufferOffset;
        if ( v51 < BufferLength || v51 > pMemory[v18]->GetBufferSize(pMemory[v18]) )
        {
          WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x38u, WPP_FxIoTargetAPI_cpp_Traceguids, v19 + 1, -1073741675);
          return 3221225621LL;
        }
      }
      FxRequestBuffer::SetMemory(&args[v19], pMemory[v18], v45);
    }
    ++v19;
    ++v18;
  }
  while ( v19 < 3 );
  v21 = pRequest;
  v22 = pTarget;
  m_RequestContext = pRequest->m_RequestContext;
  m_Irp = pRequest->m_Irp.m_Irp;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, pRequest);
      v25 = v21->m_Globals;
      if ( v25->FxVerifierOn )
      {
        if ( v25->FxVerifierIO )
          FxRequestBase::ClearVerifierFlags(v21, 128);
      }
    }
  }
  m_TargetStackSize = v22->m_TargetStackSize;
  if ( m_TargetStackSize )
  {
    if ( !m_Irp )
      goto LABEL_68;
    if ( m_Irp->CurrentLocation > m_TargetStackSize )
    {
LABEL_22:
      v27 = v21->m_RequestContext;
      if ( v27 && *((_BYTE *)v27 + 88) == 2 )
      {
LABEL_24:
        (*(void (__fastcall **)(void *, FxRequestBuffer *))(*(_QWORD *)v27 + 16LL))(v27, args);
        if ( args[1].DataType == FxRequestBufferMemory )
        {
          v63 = 130LL;
        }
        else
        {
          if ( args[1].DataType != FxRequestBufferReferencedMdl )
          {
            Memory = 0LL;
            goto LABEL_27;
          }
          v63 = 135LL;
        }
        args[1].u.Memory.Memory->AddRef(
          args[1].u.Memory.Memory,
          v27,
          v63,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
        Memory = args[1].u.Memory.Memory;
LABEL_27:
        *((_QWORD *)v27 + 12) = Memory;
        if ( args[2].DataType == FxRequestBufferMemory )
        {
          v64 = 130LL;
        }
        else
        {
          if ( args[2].DataType != FxRequestBufferReferencedMdl )
          {
            v29 = 0LL;
LABEL_30:
            v30 = Ioctl;
            *((_QWORD *)v27 + 13) = v29;
            CurrentStackLocation = v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
            *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
            *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
            CurrentStackLocation[-1].FileObject = 0LL;
            v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
            v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
            if ( !v21->m_IrpAllocation )
            {
              v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
              v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
            }
            if ( !v22->m_InStack )
              v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = v22->m_TargetFileObject;
            v32 = offsets;
            v33 = 0;
            p_u = &args[0].u;
            v35 = v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
            offsets[1] = (_WDFMEMORY_OFFSET *)&v35[-1].Parameters.NotifyDirectoryEx.CompletionFilter;
            p_ProviderId = &v35[-1].Parameters.WMI.ProviderId;
            offsets[0] = (_WDFMEMORY_OFFSET *)&v35[-1].Parameters;
            offsets[2] = (_WDFMEMORY_OFFSET *)(&v35[-1].Parameters.SetQuota + 6);
            while ( 1 )
            {
              Mdl = (int)p_u[-1].RefMdl.Mdl;
              if ( !Mdl )
                break;
              v46 = Mdl - 1;
              if ( !v46 )
              {
                GetBuffer = (__int64 (*)(void))p_u->Memory.Memory->GetBuffer;
                if ( p_u->Memory.Offsets )
                  v48 = p_u->Memory.Offsets->BufferOffset + GetBuffer();
                else
                  v48 = GetBuffer();
                *p_ProviderId = v48;
                id = 0;
                ++v33;
                goto LABEL_38;
              }
              v65 = v46 - 1;
              if ( v65 )
              {
                v66 = v65 - 1;
                if ( !v66 )
                {
                  ++v33;
                  *p_ProviderId = p_u->Memory.Memory;
                  id = 0;
                  goto LABEL_38;
                }
                if ( v66 != 1 )
                {
                  id = -1073741811;
LABEL_37:
                  ++v33;
                  if ( id < 0 )
                    goto LABEL_110;
                  goto LABEL_38;
                }
                v67 = p_u->RefMdl.Mdl;
                if ( (v67->MdlFlags & 5) != 0 )
                  MappedSystemVa = (char *)v67->MappedSystemVa;
                else
                  MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                             v67,
                                             0,
                                             MmCached,
                                             0LL,
                                             0,
                                             ExDefaultMdlProtection | 0x10);
                *p_ProviderId = MappedSystemVa;
                if ( !MappedSystemVa )
                {
                  id = -1073741670;
                  ++v33;
LABEL_110:
                  WPP_IFR_SF_dd(v22->m_Globals, 2u, 0xEu, 0x36u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v33, id);
                  FxRequestBase::ContextReleaseAndRestore(v21);
                  goto LABEL_41;
                }
                v69 = p_u->Memory.Offsets;
                if ( v69 )
                  *p_ProviderId = &MappedSystemVa[v69->BufferOffset];
                id = 0;
                ++v33;
              }
              else
              {
                v70 = (_MDL *)p_u->Memory.Memory;
                if ( (BYTE2(p_u->Memory.Memory[1].__vftable) & 5) != 0 )
                  v71 = v70->MappedSystemVa;
                else
                  v71 = MmMapLockedPagesSpecifyCache(v70, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
                ++v33;
                *p_ProviderId = v71;
                if ( !v71 )
                {
                  id = -1073741670;
                  goto LABEL_110;
                }
                id = 0;
              }
LABEL_38:
              ++v32;
              p_u = (FxRequestBuffer::<unnamed_type_u> *)((char *)p_u + 32);
              if ( v33 >= 3 )
              {
                v39 = v21->m_Globals;
                if ( v39->FxVerifierOn && v39->FxVerifierIO )
                  FxRequestBase::SetVerifierFlags(v21, 128);
                goto LABEL_41;
              }
              p_ProviderId = *v32;
            }
            *p_ProviderId = 0LL;
            id = 0;
            goto LABEL_37;
          }
          v64 = 135LL;
        }
        args[2].u.Memory.Memory->AddRef(
          args[2].u.Memory.Memory,
          v27,
          v64,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
        v29 = args[2].u.Memory.Memory;
        goto LABEL_30;
      }
      v49 = FxPoolAllocator(
              v22->m_Globals,
              &v22->m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              0x70uLL,
              v22->m_Globals->Tag,
              Caller);
      v27 = v49;
      if ( v49 )
      {
        v49[10] = 0LL;
        *((_BYTE *)v49 + 88) = 2;
        v49[2] = 0LL;
        v49[3] = 0LL;
        v49[4] = 0LL;
        v49[5] = 0LL;
        v49[6] = 0LL;
        v49[7] = 0LL;
        v49[8] = 0LL;
        v49[9] = 0LL;
        *((_DWORD *)v49 + 2) = 72;
        *((_DWORD *)v49 + 3) = 255;
        *((_DWORD *)v49 + 3) = 255;
        *v49 = (FX_POOL *)FxInternalIoctlOthersContext::`vftable';
        *((_OWORD *)v49 + 6) = 0LL;
        FxRequestBase::SetContext(v21, (FxRequestContext *)v49);
        goto LABEL_24;
      }
      WPP_IFR_SF_(v22->m_Globals, 2u, 0xEu, 0x35u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids);
      level = v77;
      id = -1073741670;
      flags = v78;
      goto LABEL_115;
    }
    if ( v21->m_IrpAllocation == 1 )
    {
LABEL_68:
      Irp = IoAllocateIrp(m_TargetStackSize, 0);
      if ( Irp )
      {
        v60 = FxRequestBase::SetSubmitIrp(v21, Irp, v56);
        v21->m_IrpAllocation = 1;
        v61 = v60;
        if ( v60 )
        {
          if ( v21->m_Globals->FxVerboseOn )
          {
            v62 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v21->m_ObjectSize )
              v62 = 0LL;
            if ( !v62 )
              v62 = v21;
            WPP_IFR_SF_qq(v21->m_Globals, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v60, v62);
          }
          IoFreeIrp(v61);
        }
        goto LABEL_22;
      }
      id = -1073741670;
      v54 = 12;
    }
    else
    {
      id = -1073741616;
      v54 = 13;
    }
    m_ObjectSize = v22->m_ObjectSize;
    v58 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v21->m_ObjectSize )
      v58 = 0LL;
    v59 = (unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v59 = 0LL;
    if ( !v58 )
      v58 = v21;
    WPP_IFR_SF_qid(v21->m_Globals, 2u, 0xEu, v54, WPP_FxRequestBase_cpp_Traceguids, v58, v59, id);
  }
  else
  {
    id = -1073741436;
    v52 = v22->m_ObjectSize;
    v53 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v52 )
      v53 = 0LL;
    WPP_IFR_SF_qL(v21->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v53, 0xC0000184);
  }
LABEL_41:
  level = v77;
  flags = v78;
  if ( id < 0 )
  {
LABEL_115:
    globals = v76;
    goto LABEL_43;
  }
  v42 = pRequest->m_RequestContext;
  globals = v76;
  v42->m_CompletionParams.Type = WdfRequestTypeOther;
  v42->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)globals;
  v42->m_CompletionParams.Parameters.Write.Length = (unsigned __int64)level;
  v42->m_CompletionParams.Parameters.Others.Argument4.Value = (unsigned __int64)flags;
LABEL_43:
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqqd(
      m_Globals,
      (unsigned __int8)level,
      (unsigned int)flags,
      v30,
      Tag,
      v79,
      v80,
      Ioctl,
      globals,
      level,
      flags,
      id);
  return (unsigned int)id;
}
