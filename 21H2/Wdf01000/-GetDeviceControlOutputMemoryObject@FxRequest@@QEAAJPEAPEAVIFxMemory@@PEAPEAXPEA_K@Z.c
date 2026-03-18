/*
 * XREFs of ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0001A4C
 * Callers:
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0001930 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveOutputMemory @ 0x1C0064CD0 (imp_WdfRequestRetrieveOutputMemory.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C00681F0 (WPP_IFR_SF_Dqqd.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7B00 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxRequest::GetDeviceControlOutputMemoryObject(
        FxRequest *this,
        IFxMemory **MemoryObject,
        _MDL **Buffer,
        unsigned __int64 *Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 v5; // bp
  int v6; // edi
  char v7; // r15
  _IRP *m_Irp; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int64 v13; // r14
  unsigned __int8 MajorFunction; // cl
  unsigned int v15; // eax
  _MDL *m_Mdl; // rcx
  int result; // eax
  const void *_a1; // rax
  unsigned int _a2; // edx
  unsigned __int16 v20; // r9
  const void *ObjectHandleUnchecked; // rax
  const void *level; // rdx
  unsigned int v23; // r8d
  _MDL *MdlAddress; // rsi
  PVOID MappedSystemVa; // rax
  const void *v26; // rax
  int v27; // [rsp+40h] [rbp-48h]
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  IFxMemory **v29; // [rsp+98h] [rbp+10h]

  v29 = MemoryObject;
  m_Globals = this->m_Globals;
  v5 = 0;
  v6 = 0;
  irql = 0;
  v7 = 0;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      result = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      v6 = result;
      if ( result < 0 )
        return result;
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 2) == 0 )
  {
    FxNonPagedObject::Lock(this, &irql);
    v5 = irql;
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  v13 = CurrentStackLocation->Parameters.Read.Length;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->Parameters.Read.Length )
  {
    v6 = -1073741789;
    _a1 = FxObject::GetObjectHandleUnchecked(this);
    v20 = 34;
LABEL_21:
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0x10u, v20, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
    goto $Done;
  }
  v15 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3;
  if ( v15 )
  {
    if ( v15 > 2 )
    {
      if ( m_Irp->RequestorMode && MajorFunction != 15 )
      {
        v6 = -1073741808;
        FxObject::GetObjectHandleUnchecked(this);
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_Dqqd(
          this->m_Globals,
          (unsigned __int8)level,
          v23,
          0x23u,
          WPP_FxRequest_cpp_Traceguids,
          v23,
          ObjectHandleUnchecked,
          level,
          v27);
        WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x24u, WPP_FxRequest_cpp_Traceguids);
      }
      goto $Done;
    }
    v7 = 1;
    if ( (this->m_RequestBaseFlags & 2) == 0 )
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
          this->m_OutputBuffer.m_Buffer = MdlAddress;
          this->m_RequestBaseFlags |= 2u;
          v6 = 0;
        }
        else
        {
          v6 = -1073741670;
          v26 = FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_qqd(this->m_Globals, 2u, 0x10u, 0x26u, WPP_FxRequest_cpp_Traceguids, v26, MdlAddress, -1073741670);
        }
        goto $Done;
      }
      v6 = -1073741789;
      _a1 = FxObject::GetObjectHandleUnchecked(this);
      v20 = 37;
      goto LABEL_21;
    }
  }
$Done:
  if ( (this->m_RequestBaseStaticFlags & 2) == 0 )
    FxNonPagedObject::Unlock(this, v5);
  if ( v6 >= 0 )
  {
    *v29 = &this->m_OutputBuffer;
    m_Mdl = this->m_OutputBuffer.m_Mdl;
    if ( v7 )
    {
      if ( (m_Mdl->MdlFlags & 5) != 0 )
        m_Mdl = (_MDL *)m_Mdl->MappedSystemVa;
      else
        m_Mdl = (_MDL *)MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
    }
    *Buffer = m_Mdl;
    *Length = v13;
  }
  return v6;
}
