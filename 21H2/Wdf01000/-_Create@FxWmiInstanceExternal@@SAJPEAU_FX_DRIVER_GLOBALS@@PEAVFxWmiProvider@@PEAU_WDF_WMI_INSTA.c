/*
 * XREFs of ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0025C18
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C0025AA0 (imp_WdfWmiInstanceCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ??0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiProvider@@@Z @ 0x1C0025D74 (--0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiPr.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qDd @ 0x1C0053924 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_iid @ 0x1C005EAE4 (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C005EBD0 (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C005EDFC (WPP_IFR_SF_qdqqqqd.c)
 */

__int64 __fastcall FxWmiInstanceExternal::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxWmiProvider *Provider,
        _WDF_WMI_INSTANCE_CONFIG *WmiInstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **WmiInstance,
        FxWmiInstanceExternal **Instance)
{
  FxWmiInstanceExternal **v6; // r12
  WDFWMIINSTANCE__ **v8; // r13
  unsigned int m_Flags; // eax
  char *ContextSize; // rdi
  __int64 result; // rax
  unsigned __int8 v15; // dl
  unsigned __int16 v16; // r9
  int v17; // ebp
  FxWmiInstanceExternal *v18; // rax
  __int64 v19; // rax
  FxObject *v20; // rbx
  const void *_a5; // rax
  int _a6; // edx
  const void **v23; // r8
  unsigned __int16 v24; // r9
  int (__fastcall *EvtWmiInstanceSetInstance)(WDFWMIINSTANCE__ *, unsigned int, void *); // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rdi
  unsigned __int64 ContextSizeOverride; // rax
  unsigned int v28; // ebx
  const void *ObjectHandleUnchecked; // rax
  int v30; // edx
  unsigned int v31; // r8d
  unsigned __int16 v32; // r9
  const _GUID *AssignDriverAsDefaultParent; // [rsp+20h] [rbp-78h]
  int level; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+58h] [rbp-40h]
  FxPoolTypeOrPoolFlags v36; // [rsp+60h] [rbp-38h] BYREF
  WDFWMIINSTANCE__ *hInstance; // [rsp+A8h] [rbp+10h] BYREF

  v6 = Instance;
  v8 = WmiInstance;
  hInstance = 0LL;
  m_Flags = Provider->m_Flags;
  *Instance = 0LL;
  *v8 = 0LL;
  ContextSize = 0LL;
  if ( (m_Flags & 1) != 0
    && (WmiInstanceConfig->UseContextForQuery
     || WmiInstanceConfig->EvtWmiInstanceQueryInstance
     || WmiInstanceConfig->EvtWmiInstanceSetInstance
     || WmiInstanceConfig->EvtWmiInstanceSetItem
     || WmiInstanceConfig->EvtWmiInstanceExecuteMethod) )
  {
    _a5 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
    WPP_IFR_SF_qdqqqqd(
      FxDriverGlobals,
      _a6,
      (unsigned int)v23,
      v24,
      AssignDriverAsDefaultParent,
      _a5,
      _a6,
      v23[4],
      v23[5],
      v23[6],
      v23[7],
      v35);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(FxDriverGlobals, InstanceAttributes, 1);
  v17 = result;
  if ( (int)result >= 0 )
  {
    if ( WmiInstanceConfig->UseContextForQuery )
    {
      EvtWmiInstanceSetInstance = WmiInstanceConfig->EvtWmiInstanceSetInstance;
      if ( EvtWmiInstanceSetInstance || WmiInstanceConfig->EvtWmiInstanceSetItem )
      {
        WPP_IFR_SF_qqd(
          FxDriverGlobals,
          2u,
          0x12u,
          0xCu,
          WPP_FxWmiInstance_cpp_Traceguids,
          EvtWmiInstanceSetInstance,
          WmiInstanceConfig->EvtWmiInstanceSetItem,
          -1073741811);
        return 3221225485LL;
      }
      if ( !InstanceAttributes || (ContextTypeInfo = InstanceAttributes->ContextTypeInfo) == 0LL )
      {
        WPP_IFR_SF_qL(
          FxDriverGlobals,
          2u,
          0x12u,
          0xDu,
          WPP_FxWmiInstance_cpp_Traceguids,
          InstanceAttributes,
          0xC000000D);
        return 3221225485LL;
      }
      ContextSizeOverride = InstanceAttributes->ContextSizeOverride;
      ContextSize = (char *)ContextTypeInfo->ContextSize;
      if ( ContextSizeOverride )
      {
        if ( &ContextSize[ContextSizeOverride] < ContextSize )
        {
          v28 = -1073741675;
          WPP_IFR_SF_iid(
            FxDriverGlobals,
            v15,
            0,
            v16,
            AssignDriverAsDefaultParent,
            -1LL,
            ContextSizeOverride,
            -1073741675);
          return v28;
        }
        ContextSize += ContextSizeOverride;
        v17 = 0;
      }
      if ( (unsigned __int64)ContextSize > 0xFFFFFFFF )
      {
        v28 = -1073741675;
        WPP_IFR_SF_qDd(
          FxDriverGlobals,
          v15,
          0x12u,
          0xFu,
          WPP_FxWmiInstance_cpp_Traceguids,
          ContextSize,
          0xFFFFFFFF,
          0xC0000095);
        return v28;
      }
      if ( (unsigned __int64)ContextSize < Provider->m_MinInstanceBufferSize )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
        WPP_IFR_SF_iqdd(
          FxDriverGlobals,
          v30,
          v31,
          v32,
          AssignDriverAsDefaultParent,
          (__int64)ContextSize,
          ObjectHandleUnchecked,
          v30,
          level);
        return 3221225507LL;
      }
    }
    *(_QWORD *)&v36.UsePoolType = 0LL;
    v36.u.PoolFlags = 64LL;
    v18 = (FxWmiInstanceExternal *)FxObjectHandleAllocCommon(
                                     FxDriverGlobals,
                                     &v36,
                                     0xB8uLL,
                                     0,
                                     InstanceAttributes,
                                     0,
                                     FxObjectTypeExternal);
    if ( v18 )
    {
      FxWmiInstanceExternal::FxWmiInstanceExternal(v18, FxDriverGlobals, WmiInstanceConfig, Provider);
      v20 = (FxObject *)v19;
      if ( v19 )
      {
        if ( ContextSize )
          *(_DWORD *)(v19 + 176) = (_DWORD)ContextSize;
        if ( v17 < 0
          || (v17 = FxObject::Commit(
                      (FxObject *)v19,
                      (_FX_DRIVER_GLOBALS *)InstanceAttributes,
                      (void **)&hInstance,
                      Provider,
                      1u),
              v17 < 0) )
        {
          FxObject::ClearEvtCallbacks(v20);
          v20->DeleteObject(v20);
        }
        else
        {
          *v8 = hInstance;
          *v6 = (FxWmiInstanceExternal *)v20;
        }
        return (unsigned int)v17;
      }
    }
    v28 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxWmiInstance_cpp_Traceguids, -1073741670);
    return v28;
  }
  return result;
}
