/*
 * XREFs of ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C00336F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002F470 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032C78 (WPP_IFR_SF_qqq.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C00331A4 (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 *     WPP_IFR_SF_dqd @ 0x1C0034404 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqiDq @ 0x1C0034640 (WPP_IFR_SF_qqiDq.c)
 *     WPP_IFR_SF_qqqD @ 0x1C00349A8 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_sqqii @ 0x1C0034BEC (WPP_IFR_SF_sqqii.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StageTransfer(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  int v2; // edi
  const void *_a1; // rax
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *v6; // r10
  const void *v7; // r13
  unsigned __int8 v8; // r8
  _FX_DRIVER_GLOBALS *v9; // rcx
  char v10; // si
  unsigned __int64 m_Remaining; // r11
  unsigned __int64 flags; // rdi
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned __int64 v14; // r10
  __int64 v15; // r8
  unsigned int m_MapRegistersReserved; // r9d
  _MDL *m_CurrentFragmentMdl; // rcx
  unsigned __int64 ByteCount; // rax
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // r9
  const void *globals; // rax
  __int64 id; // r8
  _FX_DRIVER_GLOBALS *v24; // r9
  const char *v25; // rcx
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int8 *Alignment; // r14
  FxDmaPacketTransaction_vtbl *v28; // rax
  _FX_DRIVER_GLOBALS *v29; // rsi
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 v31; // dl
  unsigned int v32; // r8d
  unsigned __int16 v33; // r9
  unsigned int m_CurrentFragmentLength; // ecx
  const void *v35; // r15
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  const void *v38; // rax
  const void *v39; // rdx
  _FX_DRIVER_GLOBALS *v40; // r10
  WDFDMATRANSACTION__ *v41; // rax
  WDFDEVICE__ *v42; // r8
  unsigned __int8 v43; // r8
  DMA_COMPLETION_STATUS CompletionStatus; // esi
  unsigned __int8 v45; // dl
  const void *v46; // rax
  unsigned __int8 v47; // dl
  _FX_DRIVER_GLOBALS *v48; // r8
  unsigned __int8 v49; // r8
  const _GUID *traceGuid; // [rsp+28h] [rbp-59h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int8 sgListBuffer[40]; // [rsp+70h] [rbp-11h] BYREF

  m_Globals = this->m_Globals;
  LOBYTE(pFxDriverGlobals) = 0;
  v2 = 0;
  *(_QWORD *)sgListBuffer = m_Globals;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  v7 = _a1;
  if ( v6->FxVerifierOn && v6->FxVerboseOn )
    WPP_IFR_SF_q(v6, 5u, 0xFu, 0x1Au, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v5);
  if ( this->m_TransferState.CurrentStagingThread )
  {
    v9 = *(_FX_DRIVER_GLOBALS **)sgListBuffer;
    v10 = 0;
    this->m_TransferState.RerunStaging = 1;
    if ( v9->FxVerifierOn && v9->FxVerboseOn )
      WPP_IFR_SF_q(v9, 5u, 0xFu, 0x1Bu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v7);
  }
  else
  {
    v10 = 1;
    this->m_TransferState.CurrentStagingThread = KeGetCurrentThread();
  }
  FxNonPagedObject::Unlock(this, (unsigned __int8)pFxDriverGlobals, v8);
  FxObject::AddRef(this, sgListBuffer, 0, 0LL);
  while ( v10 )
  {
    m_Remaining = this->m_Remaining;
    flags = this->m_Transferred;
    m_MaxFragmentLength = m_Remaining;
    if ( m_Remaining >= this->m_MaxFragmentLength )
      m_MaxFragmentLength = this->m_MaxFragmentLength;
    v14 = flags + this->m_StartOffset;
    v15 = m_MaxFragmentLength;
    this->m_CurrentFragmentLength = m_MaxFragmentLength;
    this->m_CurrentFragmentOffset = v14;
    if ( !this->m_RequireSingleTransfer )
    {
      m_MapRegistersReserved = this->m_MapRegistersReserved;
      if ( m_MapRegistersReserved )
      {
        if ( this->m_MapRegistersNeeded > m_MapRegistersReserved )
        {
          m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
          while ( m_CurrentFragmentMdl )
          {
            ByteCount = m_CurrentFragmentMdl->ByteCount;
            if ( ByteCount >= v14 )
              break;
            m_CurrentFragmentMdl = m_CurrentFragmentMdl->Next;
            v14 -= ByteCount;
          }
          v19 = m_MapRegistersReserved << 12;
          v20 = ((_WORD)v14 + (unsigned __int16)m_CurrentFragmentMdl->ByteOffset) & 0xFFF;
          if ( m_MaxFragmentLength >= (unsigned __int64)(v19 - 4096) - v20 + 4096 )
            v15 = v19 - 4096 - v20 + 4096;
          this->m_CurrentFragmentLength = v15;
        }
      }
    }
    v21 = *(_QWORD *)sgListBuffer;
    this->m_Remaining = m_Remaining - v15;
    if ( *(_BYTE *)(v21 + 316) && *(_BYTE *)(v21 + 324) )
    {
      globals = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v25 = "first";
      if ( flags )
        v25 = "next";
      WPP_IFR_SF_sqqii(
        v24,
        (unsigned __int8)globals,
        id,
        (unsigned __int16)v24,
        traceGuid,
        v25,
        globals,
        this->m_CurrentFragmentMdl,
        flags,
        id);
    }
    if ( this->m_IsCancelled == 1 )
    {
      v2 = -1073741536;
    }
    else if ( this->PreMapTransfer(this) )
    {
      m_DmaEnabler = this->m_DmaEnabler;
      if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
        Alignment = &sgListBuffer[8];
      else
        Alignment = (unsigned __int8 *)m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment;
      v28 = this->__vftable;
      HIDWORD(pFxDriverGlobals) = 0;
      v28->GetTransferCompletionRoutine(this);
      v29 = this->m_Globals;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      m_CurrentFragmentLength = this->m_CurrentFragmentLength;
      v35 = ObjectHandleUnchecked;
      HIDWORD(pFxDriverGlobals) = m_CurrentFragmentLength;
      if ( v29->FxVerifierOn && v29->FxVerboseOn )
        WPP_IFR_SF_qqiDq(
          v29,
          v31,
          v32,
          v33,
          traceGuid,
          ObjectHandleUnchecked,
          this->m_CurrentFragmentMdl,
          this->m_CurrentFragmentOffset,
          m_CurrentFragmentLength,
          this->m_MapRegisterBase);
      if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      {
        LODWORD(traceGuid) = this->m_DeviceAddressOffset;
        v2 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, unsigned __int64))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransferEx)(
               this->m_AdapterInfo->AdapterObject,
               this->m_CurrentFragmentMdl,
               this->m_MapRegisterBase,
               this->m_CurrentFragmentOffset);
      }
      else
      {
        *(_DWORD *)Alignment = 1;
        *((_QWORD *)Alignment + 1) = 0LL;
        traceGuid = (const _GUID *)((char *)&pFxDriverGlobals + 4);
        *((_QWORD *)Alignment + 2) = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransfer)(
                                       this->m_AdapterInfo->AdapterObject,
                                       this->m_CurrentFragmentMdl,
                                       this->m_MapRegisterBase,
                                       (char *)this->m_CurrentFragmentMdl->StartVa
                                     + this->m_CurrentFragmentMdl->ByteOffset
                                     + this->m_CurrentFragmentOffset);
        v2 = 0;
        *((_DWORD *)Alignment + 6) = HIDWORD(pFxDriverGlobals);
      }
      if ( v29->FxVerifierOn && v29->FxVerboseOn )
        WPP_IFR_SF_dqd(
          v29,
          5u,
          0xFu,
          0xEu,
          WPP_FxDmaTransactionPacket_hpp_Traceguids,
          SHIDWORD(pFxDriverGlobals),
          v35,
          v2);
      if ( v2 >= 0 )
      {
        v36 = this->m_CurrentFragmentLength;
        if ( HIDWORD(pFxDriverGlobals) < v36 )
        {
          v37 = v36 - HIDWORD(pFxDriverGlobals);
          this->m_CurrentFragmentLength = HIDWORD(pFxDriverGlobals);
          this->m_Remaining += v37;
        }
        if ( this->m_DmaAcquiredFunction.Method.ProgramDma )
        {
          if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
          {
            v38 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_qqq(
              v40,
              5u,
              0xFu,
              0x1Du,
              WPP_FxDmaTransactionPacket_cpp_Traceguids,
              v39,
              this->m_DmaAcquiredContext,
              v38);
          }
          FxObject::GetObjectHandleUnchecked(this->m_DmaEnabler->FxDmaTransactionBase::m_DeviceBase);
          v41 = (WDFDMATRANSACTION__ *)FxObject::GetObjectHandleUnchecked(this);
          FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
            &this->m_DmaAcquiredFunction,
            v41,
            v42,
            this->m_DmaAcquiredContext,
            this->m_DmaDirection,
            (_SCATTER_GATHER_LIST *)Alignment);
        }
      }
    }
    else
    {
      v2 = 0;
    }
    FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v15);
    if ( this->m_TransferState.RerunCompletion == 1 )
    {
      CompletionStatus = this->m_TransferState.CompletionStatus;
      v45 = (unsigned __int8)pFxDriverGlobals;
      this->m_TransferState.CompletionStatus = -1;
      this->m_TransferState.RerunCompletion = 0;
      FxNonPagedObject::Unlock(this, v45, v43);
      if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
      {
        v46 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qqqD(
          v48,
          v47,
          (unsigned int)v48,
          0x1Eu,
          WPP_FxDmaTransactionPacket_cpp_Traceguids,
          this[1].m_Globals,
          *(const void **)&this[1].m_ObjectFlags,
          v46,
          CompletionStatus);
      }
      this->CallEvtDmaCompleted(this, CompletionStatus);
      FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v49);
    }
    if ( this->m_TransferState.RerunStaging == 1 )
    {
      v10 = 1;
      this->m_TransferState.RerunStaging = 0;
    }
    else
    {
      this->m_TransferState.CurrentStagingThread = 0LL;
      v10 = 0;
    }
    FxNonPagedObject::Unlock(this, (unsigned __int8)pFxDriverGlobals, v43);
  }
  this->Release(this, sgListBuffer, 0, 0LL);
  if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
    WPP_IFR_SF_qL(
      *(_FX_DRIVER_GLOBALS **)sgListBuffer,
      5u,
      0xFu,
      0x1Fu,
      WPP_FxDmaTransactionPacket_cpp_Traceguids,
      v7,
      v2);
  return (unsigned int)v2;
}
