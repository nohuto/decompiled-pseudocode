/*
 * XREFs of ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0001C3C
 * Callers:
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0001930 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0001B40 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestRetrieveInputMemory @ 0x1C0064B20 (imp_WdfRequestRetrieveInputMemory.c)
 *     imp_WdfRequestRetrieveOutputMemory @ 0x1C0064CD0 (imp_WdfRequestRetrieveOutputMemory.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C00681F0 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C00688E8 (WPP_IFR_SF_Dqq.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7B00 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMemoryObject(
        FxRequest *this,
        FxRequestSystemBuffer **MemoryObject,
        void **Buffer,
        unsigned __int64 *Length)
{
  unsigned __int8 v4; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int IsNotCompleted; // esi
  unsigned int Options; // edi
  bool v9; // bp
  unsigned __int64 *v10; // r15
  unsigned int MajorFunction; // r14d
  _IRP *v13; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _MDL *m_Mdl; // rcx
  _IRP *m_Irp; // rcx
  unsigned int v18; // r15d
  FxObject *v19; // r8
  const void *_a1; // rax
  const void *_a2; // rdx
  const _GUID *v22; // r10
  const void *v23; // rax
  unsigned int v24; // r8d
  const void *v25; // rax
  const void *v26; // rdx
  unsigned int v27; // r8d
  const void *ObjectHandleUnchecked; // rax
  const void *v29; // rdx
  unsigned int v30; // r8d
  unsigned __int16 v31; // r9
  const void *v32; // rax
  unsigned int v33; // r8d
  _MDL *MdlAddress; // rdi
  const void *v35; // rax
  unsigned int v36; // r8d
  PVOID MappedSystemVa; // rax
  const void *v38; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  int v40; // [rsp+40h] [rbp-48h]
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  void **v42; // [rsp+A0h] [rbp+18h]
  unsigned __int64 *v43; // [rsp+A8h] [rbp+20h]

  v43 = Length;
  v42 = Buffer;
  v4 = 0;
  m_Globals = this->m_Globals;
  IsNotCompleted = 0;
  irql = 0;
  Options = 0;
  v9 = 0;
  v10 = Length;
  MajorFunction = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      if ( IsNotCompleted < 0 )
        goto $Done_0;
    }
    if ( this->m_Irp.m_Irp->RequestorMode == 1
      && (unsigned __int8)(MajorFunction - 3) <= 1u
      && this->m_DeviceBase[1].m_Refcnt == 1 )
    {
      IsNotCompleted = -1073741808;
      FxObject::GetObjectHandleUnchecked(this);
      _a1 = FxObject::GetObjectHandleUnchecked(v19);
      WPP_IFR_SF_qqd(this->m_Globals, 2u, 0x10u, 0x19u, v22, _a1, _a2, -1073741808);
      WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x1Au, WPP_FxRequest_cpp_Traceguids);
      FxVerifierDbgBreakPoint(this->m_Globals);
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
  {
    FxNonPagedObject::Lock(this, &irql);
    v4 = irql;
  }
  if ( (_BYTE)MajorFunction == 4 )
  {
    m_Irp = this->m_Irp.m_Irp;
    Options = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    v9 = this->m_DeviceBase[1].m_Refcnt == 3;
  }
  else
  {
    if ( (_BYTE)MajorFunction != 3 )
    {
      if ( (unsigned __int8)(MajorFunction - 14) > 1u )
      {
        FxObject::GetObjectHandleUnchecked(this);
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_Dqq(
          this->m_Globals,
          (unsigned __int8)v29,
          v30,
          v31,
          traceGuid,
          MajorFunction,
          ObjectHandleUnchecked,
          v29);
        FxVerifierDbgBreakPoint(this->m_Globals);
        IsNotCompleted = -1073741808;
      }
      else
      {
        v13 = this->m_Irp.m_Irp;
        CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
        Options = CurrentStackLocation->Parameters.Create.Options;
        if ( Options )
        {
          if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3
            && v13->RequestorMode
            && (_BYTE)MajorFunction != 15 )
          {
            IsNotCompleted = -1073741808;
            FxObject::GetObjectHandleUnchecked(this);
            v25 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
            WPP_IFR_SF_Dqqd(
              this->m_Globals,
              (unsigned __int8)v26,
              v27,
              0x1Cu,
              WPP_FxRequest_cpp_Traceguids,
              v27,
              v25,
              v26,
              v40);
            WPP_IFR_SF_d(this->m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequest_cpp_Traceguids, -1073741808);
          }
        }
        else
        {
          IsNotCompleted = -1073741789;
          v23 = FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_qL(this->m_Globals, 2u, 0x10u, 0x1Bu, WPP_FxRequest_cpp_Traceguids, v23, v24);
        }
      }
      goto $Done_0;
    }
    m_Irp = this->m_Irp.m_Irp;
    Options = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    if ( this->m_DeviceBase[1].m_Refcnt == 3 )
      v9 = 1;
  }
  v18 = Options;
  if ( Options )
  {
    if ( v9 && (this->m_RequestBaseFlags & 1) == 0 )
    {
      MdlAddress = m_Irp->MdlAddress;
      if ( MdlAddress )
      {
        if ( (MdlAddress->MdlFlags & 5) != 0 )
          MappedSystemVa = MdlAddress->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
        if ( MappedSystemVa )
        {
          this->m_SystemBuffer.m_Buffer = this->m_Irp.m_Irp->MdlAddress;
          this->m_RequestBaseFlags |= 1u;
        }
        else
        {
          IsNotCompleted = -1073741670;
          v38 = FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_qqd(this->m_Globals, 2u, 0x10u, 0x21u, WPP_FxRequest_cpp_Traceguids, v38, MdlAddress, -1073741670);
        }
      }
      else
      {
        IsNotCompleted = -1073741789;
        v35 = FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qL(this->m_Globals, 2u, 0x10u, 0x20u, WPP_FxRequest_cpp_Traceguids, v35, v36);
      }
      Options = v18;
    }
  }
  else
  {
    IsNotCompleted = -1073741789;
    v32 = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0x10u, 0x1Fu, WPP_FxRequest_cpp_Traceguids, v32, v33);
  }
  v10 = v43;
$Done_0:
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
    FxNonPagedObject::Unlock(this, v4);
  if ( IsNotCompleted >= 0 )
  {
    m_Mdl = this->m_SystemBuffer.m_Mdl;
    *MemoryObject = &this->m_SystemBuffer;
    if ( v9 )
    {
      if ( (m_Mdl->MdlFlags & 5) != 0 )
        m_Mdl = (_MDL *)m_Mdl->MappedSystemVa;
      else
        m_Mdl = (_MDL *)MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
    }
    *v42 = m_Mdl;
    *v10 = Options;
  }
  return (unsigned int)IsNotCompleted;
}
