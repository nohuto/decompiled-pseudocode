/*
 * XREFs of ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C003F120
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C003D8D0 (imp_WdfWmiInstanceCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qDd @ 0x1C002F728 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 *     ??0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiProvider@@@Z @ 0x1C003E900 (--0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiPr.c)
 *     WPP_IFR_SF_iid @ 0x1C003F450 (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C003F53C (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C003F768 (WPP_IFR_SF_qdqqqqd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
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
  const void *_a5; // rax
  int _a6; // edx
  const void **v16; // r8
  unsigned __int16 v17; // r9
  __int64 result; // rax
  unsigned __int8 v19; // dl
  unsigned __int16 v20; // r9
  int v21; // ebp
  int (__fastcall *EvtWmiInstanceSetInstance)(WDFWMIINSTANCE__ *, unsigned int, void *); // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rdi
  unsigned __int64 ContextSizeOverride; // rax
  unsigned int v25; // ebx
  const void *ObjectHandleUnchecked; // rax
  int v27; // edx
  unsigned int v28; // r8d
  unsigned __int16 v29; // r9
  FxWmiInstanceExternal *v30; // rax
  FxWmiInstanceExternal *v31; // rax
  FxWmiInstanceExternal *v32; // rbx
  const _GUID *_a1; // [rsp+20h] [rbp-68h]
  int level; // [rsp+40h] [rbp-48h]
  int v35; // [rsp+58h] [rbp-30h]
  WDFWMIINSTANCE__ *hInstance; // [rsp+98h] [rbp+10h] BYREF

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
    WPP_IFR_SF_qdqqqqd(FxDriverGlobals, _a6, (unsigned int)v16, v17, _a1, _a5, _a6, v16[4], v16[5], v16[6], v16[7], v35);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(FxDriverGlobals, InstanceAttributes, 1);
  v21 = result;
  if ( (int)result >= 0 )
  {
    if ( !WmiInstanceConfig->UseContextForQuery )
      goto LABEL_26;
    EvtWmiInstanceSetInstance = WmiInstanceConfig->EvtWmiInstanceSetInstance;
    if ( EvtWmiInstanceSetInstance || WmiInstanceConfig->EvtWmiInstanceSetItem )
    {
      WPP_IFR_SF_qid(
        FxDriverGlobals,
        2u,
        0x12u,
        0xCu,
        WPP_FxWmiInstance_cpp_Traceguids,
        EvtWmiInstanceSetInstance,
        (__int64)WmiInstanceConfig->EvtWmiInstanceSetItem,
        -1073741811);
      return 3221225485LL;
    }
    if ( !InstanceAttributes || (ContextTypeInfo = InstanceAttributes->ContextTypeInfo) == 0LL )
    {
      WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxWmiInstance_cpp_Traceguids, InstanceAttributes, 0xC000000D);
      return 3221225485LL;
    }
    ContextSizeOverride = InstanceAttributes->ContextSizeOverride;
    ContextSize = (char *)ContextTypeInfo->ContextSize;
    if ( ContextSizeOverride )
    {
      if ( &ContextSize[ContextSizeOverride] < ContextSize )
      {
        v25 = -1073741675;
        WPP_IFR_SF_iid(FxDriverGlobals, v19, 0, v20, _a1, -1LL, ContextSizeOverride, -1073741675);
        return v25;
      }
      ContextSize += ContextSizeOverride;
      v21 = 0;
    }
    if ( (unsigned __int64)ContextSize > 0xFFFFFFFF )
    {
      v25 = -1073741675;
      WPP_IFR_SF_qDd(
        FxDriverGlobals,
        v19,
        0x12u,
        0xFu,
        WPP_FxWmiInstance_cpp_Traceguids,
        ContextSize,
        0xFFFFFFFF,
        0xC0000095);
      return v25;
    }
    if ( (unsigned __int64)ContextSize < Provider->m_MinInstanceBufferSize )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
      WPP_IFR_SF_iqdd(FxDriverGlobals, v27, v28, v29, _a1, (__int64)ContextSize, ObjectHandleUnchecked, v27, level);
      return 3221225507LL;
    }
    else
    {
LABEL_26:
      v30 = (FxWmiInstanceExternal *)FxObjectHandleAlloc(
                                       FxDriverGlobals,
                                       ExDefaultNonPagedPoolType,
                                       0xB8uLL,
                                       0,
                                       InstanceAttributes,
                                       0,
                                       FxObjectTypeExternal);
      if ( v30 )
      {
        FxWmiInstanceExternal::FxWmiInstanceExternal(v30, FxDriverGlobals, WmiInstanceConfig, Provider);
        v32 = v31;
      }
      else
      {
        v32 = 0LL;
      }
      if ( !v32 )
      {
        v25 = -1073741670;
        WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxWmiInstance_cpp_Traceguids, -1073741670);
        return v25;
      }
      if ( ContextSize )
        v32->m_ContextLength = (unsigned int)ContextSize;
      if ( v21 < 0
        || (v21 = FxObject::Commit(v32, (_FX_DRIVER_GLOBALS *)InstanceAttributes, (void **)&hInstance, Provider, 1u),
            v21 < 0) )
      {
        FxObject::ClearEvtCallbacks(v32);
        v32->DeleteObject(v32);
      }
      else
      {
        *v8 = hInstance;
        *v6 = v32;
      }
      return (unsigned int)v21;
    }
  }
  return result;
}
