/*
 * XREFs of imp_WdfDeviceAddQueryInterface @ 0x1C002BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001C758 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z @ 0x1C002BEF4 (-AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     WPP_IFR_SF_qddd @ 0x1C0053A68 (WPP_IFR_SF_qddd.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C005FD00 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceAddQueryInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_QUERY_INTERFACE_CONFIG *InterfaceConfig)
{
  unsigned int v4; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned __int8 v8; // dl
  _INTERFACE *Interface; // r14
  unsigned __int8 SendQueryToParentStack; // r8
  int _a3; // eax
  ULONG Tag; // ecx
  void *v13; // rax
  unsigned __int8 v14; // r8
  FxQueryInterface *v15; // r15
  FxDevice *v16; // rax
  unsigned __int64 Size; // r9
  ULONG v18; // ecx
  void *v19; // rax
  FX_POOL **v20; // rax
  unsigned __int16 v21; // r9
  unsigned int v22; // edx
  __m128i v23; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  FxDevice *pDevice; // [rsp+90h] [rbp+30h] BYREF

  v4 = 0;
  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Device )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !InterfaceConfig )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !InterfaceConfig->InterfaceType )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    Interface = InterfaceConfig->Interface;
    if ( InterfaceConfig->Size != 48 )
    {
      v4 = -1073741820;
      WPP_IFR_SF_qddd(
        m_Globals,
        v8,
        2u,
        0xAu,
        WPP_FxQueryInterfaceAPI_cpp_Traceguids,
        Device,
        InterfaceConfig->Size,
        48,
        -1073741820);
      return v4;
    }
    SendQueryToParentStack = InterfaceConfig->SendQueryToParentStack;
    if ( SendQueryToParentStack && !FxDevice::IsPdo(pDevice) )
    {
      v4 = -1073741811;
      v21 = 11;
      goto LABEL_37;
    }
    if ( Interface || SendQueryToParentStack )
    {
      if ( !InterfaceConfig->ImportInterface )
      {
LABEL_9:
        if ( Interface )
        {
          _a3 = Interface->Size;
          if ( (unsigned __int16)_a3 < 0x20u )
          {
            v4 = -1073741811;
            WPP_IFR_SF_qddd(
              m_Globals,
              0x20u,
              2u,
              0xEu,
              WPP_FxQueryInterfaceAPI_cpp_Traceguids,
              Device,
              _a3,
              32,
              -1073741811);
            return v4;
          }
        }
        Tag = m_Globals->Tag;
        v13 = retaddr;
        v23.m128i_i64[0] = 0LL;
        v23.m128i_i64[1] = 256LL;
        if ( !m_Globals->FxPoolTrackingOn )
          v13 = 0LL;
        v15 = (FxQueryInterface *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v23, 0x38uLL, Tag, v13);
        if ( !v15 )
        {
          v4 = -1073741670;
          WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0xFu, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, 0xC000009A);
          return v4;
        }
        v16 = pDevice;
        v15->m_ProcessRequest.m_Method = 0LL;
        v15->m_Device = v16;
        v15->m_Interface = 0LL;
        v15->m_Entry.Next = 0LL;
        v15->m_EmbeddedInterface = 0;
        v15->m_SendQueryToParentStack = InterfaceConfig->SendQueryToParentStack;
        v15->m_ImportInterface = InterfaceConfig->ImportInterface;
        v15->m_ProcessRequest.m_Method = InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest;
        v15->m_InterfaceType = *InterfaceConfig->InterfaceType;
        if ( Interface )
        {
          Size = Interface->Size;
          v18 = m_Globals->Tag;
          v19 = retaddr;
          v23.m128i_i64[0] = 0LL;
          v23.m128i_i64[1] = 256LL;
          if ( !m_Globals->FxPoolTrackingOn )
            v19 = 0LL;
          v20 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v23, Size, v18, v19);
          v15->m_Interface = (_INTERFACE *)v20;
          if ( !v20 )
          {
            v4 = -1073741670;
            WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x10u, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, 0xC000009A);
            FxQueryInterface::`scalar deleting destructor'(v15, v22);
            return v4;
          }
          memmove(v20, Interface, Interface->Size);
          if ( !Interface->InterfaceReference )
            v15->m_Interface->InterfaceReference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
          if ( !Interface->InterfaceDereference )
            v15->m_Interface->InterfaceDereference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
        }
        FxPkgPnp::AddQueryInterface(pDevice->m_PkgPnp, v15, v14);
        return v4;
      }
    }
    else if ( !InterfaceConfig->ImportInterface )
    {
      v4 = -1073741811;
      v21 = 12;
      goto LABEL_37;
    }
    if ( !InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest )
    {
      v4 = -1073741811;
      v21 = 13;
LABEL_37:
      WPP_IFR_SF_qL(m_Globals, 2u, 2u, v21, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, 0xC000000D);
      return v4;
    }
    goto LABEL_9;
  }
  return result;
}
