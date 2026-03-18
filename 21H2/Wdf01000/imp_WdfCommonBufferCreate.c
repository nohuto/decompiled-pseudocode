/*
 * XREFs of imp_WdfCommonBufferCreate @ 0x1C0029DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C002A060 (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x1C002A1B8 (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCommonBufferCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  WDFCOMMONBUFFER__ **v7; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  FxCommonBuffer *v10; // rax
  FxObject *v11; // rax
  FxCommonBuffer *v12; // rdi
  int CommonBuffer; // ebx
  unsigned int _a1; // edi
  unsigned __int16 v15; // r9
  void *handle; // [rsp+40h] [rbp-20h] BYREF
  FxPoolTypeOrPoolFlags v17; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  FxDmaEnabler *pDmaEnabler; // [rsp+90h] [rbp+30h] BYREF

  pDmaEnabler = 0LL;
  handle = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  v7 = CommonBufferHandle;
  m_Globals = pDmaEnabler->m_Globals;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *CommonBufferHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( Length )
    {
      result = FxValidateObjectAttributes(m_Globals, Attributes, 1);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)&v17.UsePoolType = 0LL;
      v17.u.PoolFlags = 64LL;
      v10 = (FxCommonBuffer *)FxObjectHandleAllocCommon(
                                m_Globals,
                                &v17,
                                0xB8uLL,
                                0,
                                Attributes,
                                0,
                                FxObjectTypeExternal);
      if ( v10 )
      {
        FxCommonBuffer::FxCommonBuffer(v10, m_Globals, pDmaEnabler);
        v12 = (FxCommonBuffer *)v11;
        if ( v11 )
        {
          CommonBuffer = FxObject::Commit(v11, (_FX_DRIVER_GLOBALS *)Attributes, &handle, pDmaEnabler, 1u);
          if ( CommonBuffer < 0 || (CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v12, Length), CommonBuffer < 0) )
          {
            FxObject::ClearEvtCallbacks(v12);
            v12->DeleteObject(v12);
          }
          else
          {
            *v7 = (WDFCOMMONBUFFER__ *)handle;
          }
          return (unsigned int)CommonBuffer;
        }
      }
      _a1 = -1073741670;
      v15 = 11;
    }
    else
    {
      _a1 = -1073741811;
      v15 = 10;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0xFu, v15, WPP_FxCommonBufferAPI_cpp_Traceguids, _a1);
    return _a1;
  }
  return result;
}
