/*
 * XREFs of ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C004DC04
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0030770 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C004AB40 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C002F6A8 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C002FB90 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_ @ 0x1C0032554 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C004E850 (WPP_IFR_SF_Dqqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C005BC9C (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6A10 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetDeviceControlOutputMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int Length; // ebp
  void *MasterIrp; // r15
  unsigned int LowPart; // r8d
  unsigned int v9; // edi
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  const void *_a2; // rax
  unsigned __int8 v13; // dl
  unsigned int _a3; // r8d
  const void *v15; // rax
  const void *v16; // rdx
  unsigned int v17; // r8d
  _MDL *v18; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v20; // r9
  _MDL *MdlAddress; // rax
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v24; // rdi
  const void *v25; // rax
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // r8
  unsigned __int8 v29; // dl
  const void *v30; // rax
  unsigned __int16 v31; // r9
  unsigned __int8 _a1; // [rsp+20h] [rbp-48h]
  int _a4; // [rsp+40h] [rbp-28h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  Length = 0;
  MasterIrp = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierIO )
  {
    v9 = m_Globals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals) : 0;
    if ( (v9 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 14) <= 1u )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (LowPart & 3) != 0 )
    {
      switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3 )
      {
        case 1u:
          MdlAddress = m_Irp->MdlAddress;
          *pMdl = MdlAddress;
          if ( !MdlAddress )
          {
            v9 = -1073741789;
            ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
            v20 = 21;
            goto LABEL_15;
          }
          break;
        case 2u:
          v18 = m_Irp->MdlAddress;
          *pMdl = v18;
          if ( !v18 )
          {
            v9 = -1073741789;
            ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
            v20 = 22;
LABEL_15:
            WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, v20, WPP_FxRequestKm_cpp_Traceguids, ObjectHandleUnchecked, 0xC0000023);
            goto LABEL_28;
          }
          break;
        case 3u:
          FxObject::GetObjectHandleUnchecked(this);
          v15 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          WPP_IFR_SF_Dqqd(
            m_Globals,
            (unsigned __int8)v16,
            v17,
            0x17u,
            WPP_FxRequestKm_cpp_Traceguids,
            v17,
            v15,
            v16,
            _a4);
          WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0x18u, WPP_FxRequestKm_cpp_Traceguids);
          *pMdl = 0LL;
          v9 = -1073741808;
          goto LABEL_28;
        default:
LABEL_30:
          v29 = irql;
          *pMdl = 0LL;
          FxNonPagedObject::Unlock(this, v29, LowPart);
          v9 = -1073741789;
          if ( MasterIrp )
          {
            if ( Length )
              return v9;
            v30 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            v31 = 26;
          }
          else
          {
            v30 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            v31 = 25;
          }
          WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, v31, WPP_FxRequestKm_cpp_Traceguids, v30, 0xC0000023);
          return v9;
      }
    }
    else
    {
      MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
      Length = CurrentStackLocation->Parameters.Read.Length;
      if ( !MasterIrp || !Length )
        goto LABEL_30;
      m_AllocatedMdl = this->m_AllocatedMdl;
      if ( !m_AllocatedMdl )
      {
        if ( m_Globals->FxVerifierOn )
          Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, Length, _a1, 0, retaddr);
        else
          Debug = IoAllocateMdl(MasterIrp, Length, 0, 0, 0LL);
        v24 = Debug;
        if ( Debug )
        {
          MmBuildMdlForNonPagedPool(Debug);
          v26 = irql;
          this->m_AllocatedMdl = v24;
          *pMdl = v24;
          FxNonPagedObject::Unlock(this, v26, v27);
          return 0LL;
        }
        v25 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v9 = -1073741670;
        WPP_IFR_SF_qqDd(
          m_Globals,
          2u,
          0x10u,
          0x1Bu,
          WPP_FxRequestKm_cpp_Traceguids,
          v25,
          MasterIrp,
          Length,
          -1073741670);
        *pMdl = 0LL;
        goto LABEL_28;
      }
      *pMdl = m_AllocatedMdl;
    }
    v9 = 0;
    goto LABEL_28;
  }
  _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  v9 = -1073741808;
  WPP_IFR_SF_qDd(m_Globals, v13, 0x10u, 0x14u, WPP_FxRequestKm_cpp_Traceguids, _a2, _a3, 0xC0000010);
  *pMdl = 0LL;
LABEL_28:
  FxNonPagedObject::Unlock(this, irql, LowPart);
  return v9;
}
