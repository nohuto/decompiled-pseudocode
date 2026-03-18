/*
 * XREFs of ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0035714
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C0030060 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002F3F0 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ??0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z @ 0x1C0034D18 (--0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C00358D4 (FxAllocateFromNPagedLookasideList.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $0237CD5032DD45453D76C2980704182A *DmaDescription; // rax
  unsigned __int16 ExtraSize; // r10
  $0237CD5032DD45453D76C2980704182A *v10; // rax
  FxDmaScatterGatherTransaction *v11; // r10
  unsigned __int16 v12; // cx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // edi
  unsigned __int64 v16; // rdx
  void *v17; // rax
  const void *ObjectHandleUnchecked; // rax
  void *hTransaction; // [rsp+40h] [rbp-18h] BYREF

  hTransaction = 0LL;
  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  ExtraSize = 0;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    ExtraSize = 128;
  if ( FxObjectHandleAlloc(
         FxDriverGlobals,
         ExDefaultNonPagedPoolType,
         0x118uLL,
         0,
         Attributes,
         ExtraSize,
         FxObjectTypeExternal) )
  {
    v10 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
    v12 = 0;
    if ( v10->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      v12 = 128;
    FxDmaScatterGatherTransaction::FxDmaScatterGatherTransaction(v11, FxDriverGlobals, v12, DmaEnabler);
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v15 = FxObject::Commit((FxObject *)v14, (_FX_DRIVER_GLOBALS *)Attributes, &hTransaction, DmaEnabler, 1u);
    if ( (v15 & 0x80000000) == 0 )
    {
      if ( (*((_BYTE *)DmaEnabler + 380) & 0x20) != 0 )
      {
        v17 = FxAllocateFromNPagedLookasideList(&DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside, v16);
        *(_QWORD *)(v14 + 264) = v17;
        if ( !v17 )
        {
          v15 = -1073741670;
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v14);
          WPP_IFR_SF_qL(
            FxDriverGlobals,
            2u,
            0xFu,
            0xBu,
            WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
            ObjectHandleUnchecked,
            0xC000009A);
          goto LABEL_14;
        }
        FxObject::AddRef(
          DmaEnabler,
          (void *)v14,
          96,
          "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransactionscattergather.cpp");
        *(_DWORD *)(v14 + 272) = DmaEnabler->m_SGListSize;
        *(_BYTE *)(v14 + 276) = 1;
      }
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
      return v15;
    }
LABEL_14:
    FxObject::ClearEvtCallbacks((FxObject *)v14);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
    return v15;
  }
  v15 = -1073741670;
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, -1073741670);
  return v15;
}
