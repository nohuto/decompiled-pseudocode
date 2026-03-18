/*
 * XREFs of imp_WdfDmaEnablerCreate @ 0x1C002D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C00193BC (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C002D7CC (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DCC8 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00532C0 (WPP_IFR_SF_qqqd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDmaEnablerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DMA_ENABLER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDMAENABLER__ **DmaEnablerHandle)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  WDFDMAENABLER__ **v11; // r12
  void *ParentObject; // rdx
  bool IsVersionGreaterThanOrEqualTo; // al
  size_t Size; // rdx
  int v15; // ecx
  _WDF_DMA_PROFILE Profile; // ecx
  FxDmaEnabler *v17; // rax
  FxObject *v18; // rax
  FxDmaEnabler *v19; // rsi
  int v20; // ebx
  unsigned int v21; // edx
  FxDeviceBase *v23; // rax
  unsigned int _a1; // esi
  const void *_a2; // rax
  unsigned __int16 v26; // r9
  FxObject *pParent; // [rsp+50h] [rbp-51h] BYREF
  WDFDMAENABLER__ *handle; // [rsp+58h] [rbp-49h] BYREF
  FxPoolTypeOrPoolFlags v29; // [rsp+60h] [rbp-41h] BYREF
  _WDF_DMA_ENABLER_CONFIG dmaConfig; // [rsp+70h] [rbp-31h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]
  FxDeviceBase *pDevice; // [rsp+100h] [rbp+5Fh] BYREF
  __int64 _a3; // [rsp+108h] [rbp+67h]

  _a3 = (__int64)Device;
  pDevice = 0LL;
  handle = 0LL;
  pParent = 0LL;
  memset(&dmaConfig, 0, sizeof(dmaConfig));
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1030u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    v11 = DmaEnablerHandle;
    if ( !DmaEnablerHandle )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    if ( !Config )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    *DmaEnablerHandle = 0LL;
    result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
    if ( (int)result >= 0 )
    {
      if ( Attributes )
      {
        ParentObject = Attributes->ParentObject;
        if ( ParentObject )
        {
          FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
          if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v21, 0xBu) )
          {
            v23 = FxDeviceBase::_SearchForDevice(pParent, 0LL);
            if ( !v23 )
            {
              _a1 = -1071644151;
              WPP_IFR_SF_qL(
                m_Globals,
                2u,
                0xFu,
                0xAu,
                WPP_FxDmaEnablerAPI_cpp_Traceguids,
                Attributes->ParentObject,
                0xC0200209);
              return _a1;
            }
            if ( v23 != pDevice )
            {
              _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v23);
              _a1 = -1071644151;
              WPP_IFR_SF_qqqd(
                m_Globals,
                2u,
                0xFu,
                0xBu,
                WPP_FxDmaEnablerAPI_cpp_Traceguids,
                Attributes->ParentObject,
                _a2,
                _a3,
                -1071644151);
              return _a1;
            }
LABEL_7:
            IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                              m_Globals,
                                              (unsigned int)ParentObject,
                                              0xBu);
            Size = Config->Size;
            v15 = IsVersionGreaterThanOrEqualTo ? 80 : 64;
            if ( (_DWORD)Size != v15 )
            {
              _a1 = -1073741820;
              WPP_IFR_SF_DDd(m_Globals, Size, 0xFu, 0xDu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Size, v15, -1073741820);
              return _a1;
            }
            if ( (unsigned int)Size < 0x50 )
            {
              dmaConfig.Profile = Config->Profile;
              dmaConfig.MaximumLength = Config->MaximumLength;
              memmove(&dmaConfig, Config, Size);
              dmaConfig.Size = 80;
              Config = &dmaConfig;
            }
            Profile = Config->Profile;
            if ( (unsigned int)(Profile - 1) > 7 )
            {
              _a1 = -1073741811;
              WPP_IFR_SF_dd(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Profile, -1073741811);
              return _a1;
            }
            if ( Config->MaximumLength )
            {
              *(_QWORD *)&v29.UsePoolType = 0LL;
              v29.u.PoolFlags = 64LL;
              v17 = (FxDmaEnabler *)FxObjectHandleAllocCommon(
                                      m_Globals,
                                      &v29,
                                      0x2C0uLL,
                                      0,
                                      Attributes,
                                      0,
                                      FxObjectTypeExternal);
              if ( v17 )
              {
                FxDmaEnabler::FxDmaEnabler(v17, m_Globals);
                v19 = (FxDmaEnabler *)v18;
                if ( v18 )
                {
                  v20 = FxObject::Commit(v18, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&handle, pParent, 1u);
                  if ( v20 < 0 || (v20 = FxDmaEnabler::Initialize(v19, Config, pDevice), v20 < 0) )
                  {
                    FxObject::ClearEvtCallbacks(v19);
                    v19->DeleteObject(v19);
                  }
                  else
                  {
                    *v11 = handle;
                  }
                  return (unsigned int)v20;
                }
              }
              _a1 = -1073741670;
              v26 = 16;
            }
            else
            {
              v26 = 15;
              _a1 = -1073741811;
            }
            WPP_IFR_SF_d(m_Globals, 2u, 0xFu, v26, WPP_FxDmaEnablerAPI_cpp_Traceguids, _a1);
            return _a1;
          }
          if ( pParent != pDevice )
          {
            WPP_IFR_SF_qq(
              m_Globals,
              3u,
              0xFu,
              0xCu,
              WPP_FxDmaEnablerAPI_cpp_Traceguids,
              Attributes->ParentObject,
              Device);
            if ( m_Globals->FxVerifyDownlevel )
              FxVerifierDbgBreakPoint(m_Globals);
          }
        }
      }
      pParent = pDevice;
      goto LABEL_7;
    }
  }
  return result;
}
