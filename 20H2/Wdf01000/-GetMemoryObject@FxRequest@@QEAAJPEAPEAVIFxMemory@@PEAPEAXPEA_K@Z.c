/*
 * XREFs of ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C000371C
 * Callers:
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0002FC0 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0003620 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestRetrieveInputMemory @ 0x1C0049FC0 (imp_WdfRequestRetrieveInputMemory.c)
 *     imp_WdfRequestRetrieveOutputMemory @ 0x1C004A170 (imp_WdfRequestRetrieveOutputMemory.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002F42C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C004DF80 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C004E9A4 (WPP_IFR_SF_Dqq.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2A10 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMemoryObject(
        FxRequest *this,
        FxRequestSystemBuffer **MemoryObject,
        void **Buffer,
        unsigned __int64 *Length)
{
  unsigned __int8 v4; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int IsNotCompleted; // edi
  unsigned int Options; // ebp
  bool v9; // r14
  unsigned int MajorFunction; // esi
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _MDL *m_Mdl; // rcx
  FxObject *v17; // r8
  const void *_a1; // rax
  __int64 _a2; // rdx
  const _GUID *v20; // r10
  const void *v21; // rax
  unsigned int v22; // r8d
  unsigned __int16 v23; // r9
  const void *v24; // rax
  const void *v25; // rdx
  unsigned int v26; // r8d
  const void *ObjectHandleUnchecked; // rax
  const void *v28; // rdx
  unsigned int v29; // r8d
  unsigned __int16 v30; // r9
  __int64 MdlAddress; // rsi
  PVOID v32; // rax
  const void *v33; // rax
  _MDL *v34; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  int v36; // [rsp+40h] [rbp-48h]
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  void **v38; // [rsp+A0h] [rbp+18h]

  v38 = Buffer;
  v4 = 0;
  m_Globals = this->m_Globals;
  IsNotCompleted = 0;
  irql = 0;
  Options = 0;
  v9 = 0;
  MajorFunction = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( !m_Globals->FxVerifierIO )
    goto LABEL_2;
  if ( m_Globals->FxVerifierOn )
    IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
  if ( IsNotCompleted >= 0 )
  {
    if ( this->m_Irp.m_Irp->RequestorMode == 1
      && (unsigned __int8)(MajorFunction - 3) <= 1u
      && this->m_DeviceBase[1].m_Refcnt == 1 )
    {
      IsNotCompleted = -1073741808;
      FxObject::GetObjectHandleUnchecked(this);
      _a1 = FxObject::GetObjectHandleUnchecked(v17);
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x19u, v20, _a1, _a2, -1073741808);
      WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x1Au, WPP_FxRequest_cpp_Traceguids);
      FxVerifierDbgBreakPoint(this->m_Globals);
    }
LABEL_2:
    if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
    {
      FxNonPagedObject::Lock(this, &irql);
      v4 = irql;
    }
    if ( (_BYTE)MajorFunction == 3 )
    {
      m_Irp = this->m_Irp.m_Irp;
      Options = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
      if ( this->m_DeviceBase[1].m_Refcnt == 3 )
        v9 = 1;
    }
    else if ( (_BYTE)MajorFunction == 4 )
    {
      m_Irp = this->m_Irp.m_Irp;
      Options = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
      v9 = this->m_DeviceBase[1].m_Refcnt == 3;
    }
    else
    {
      if ( (unsigned __int8)(MajorFunction - 14) > 1u )
      {
        FxObject::GetObjectHandleUnchecked(this);
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_Dqq(
          this->m_Globals,
          (unsigned __int8)v28,
          v29,
          v30,
          traceGuid,
          MajorFunction,
          ObjectHandleUnchecked,
          v28);
        FxVerifierDbgBreakPoint(this->m_Globals);
        IsNotCompleted = -1073741808;
        goto $Done_1;
      }
      m_Irp = this->m_Irp.m_Irp;
      CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
      Options = CurrentStackLocation->Parameters.Create.Options;
      if ( !Options )
      {
        IsNotCompleted = -1073741789;
        v21 = FxObject::GetObjectHandleUnchecked(this);
        v23 = 27;
        goto LABEL_28;
      }
      if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3
        && m_Irp->RequestorMode
        && (_BYTE)MajorFunction != 15 )
      {
        IsNotCompleted = -1073741808;
        FxObject::GetObjectHandleUnchecked(this);
        v24 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_Dqqd(
          this->m_Globals,
          (unsigned __int8)v25,
          v26,
          0x1Cu,
          WPP_FxRequest_cpp_Traceguids,
          v26,
          v24,
          v25,
          v36);
        WPP_IFR_SF_d(this->m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequest_cpp_Traceguids, -1073741808);
        goto $Done_1;
      }
    }
    if ( Options )
    {
      if ( !v9 || (this->m_RequestBaseFlags & 1) != 0 )
        goto $Done_1;
      MdlAddress = (__int64)m_Irp->MdlAddress;
      if ( MdlAddress )
      {
        if ( (*(_BYTE *)(MdlAddress + 10) & 5) != 0 )
          v32 = *(PVOID *)(MdlAddress + 24);
        else
          v32 = MmMapLockedPagesSpecifyCache((PMDL)MdlAddress, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
        if ( v32 )
        {
          v34 = this->m_Irp.m_Irp->MdlAddress;
          this->m_RequestBaseFlags |= 1u;
          this->m_SystemBuffer.m_Buffer = v34;
        }
        else
        {
          IsNotCompleted = -1073741670;
          v33 = FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x21u, WPP_FxRequest_cpp_Traceguids, v33, MdlAddress, -1073741670);
        }
        goto $Done_1;
      }
      IsNotCompleted = -1073741789;
      v21 = FxObject::GetObjectHandleUnchecked(this);
      v23 = 32;
    }
    else
    {
      IsNotCompleted = -1073741789;
      v21 = FxObject::GetObjectHandleUnchecked(this);
      v23 = 31;
    }
LABEL_28:
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0x10u, v23, WPP_FxRequest_cpp_Traceguids, v21, v22);
  }
$Done_1:
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
    *v38 = m_Mdl;
    *Length = Options;
  }
  return (unsigned int)IsNotCompleted;
}
