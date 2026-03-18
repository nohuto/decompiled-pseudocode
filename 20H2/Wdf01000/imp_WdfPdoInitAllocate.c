/*
 * XREFs of imp_WdfPdoInitAllocate @ 0x1C00459A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C004EFE4 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 */

WDFDEVICE_INIT *__fastcall imp_WdfPdoInitAllocate(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *ParentDevice)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 v4; // r9
  FX_POOL **v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  FxDevice *v8; // rax
  void *Caller; // [rsp+38h] [rbp+0h]
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)ParentDevice,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) < 0 )
    return 0LL;
  if ( pDevice->m_PkgPnp->m_Type != 4353 )
  {
    v4 = 51;
LABEL_5:
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, v4, WPP_FxDeviceInitApi_cpp_Traceguids);
    return 0LL;
  }
  v5 = FxPoolAllocator(
         m_Globals,
         &m_Globals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         0x3B0uLL,
         m_Globals->Tag,
         Caller);
  if ( v5 )
  {
    WDFDEVICE_INIT::WDFDEVICE_INIT((WDFDEVICE_INIT *)v5, pDevice->m_Driver);
    v7 = v6;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v4 = 52;
    goto LABEL_5;
  }
  v8 = pDevice;
  *(_DWORD *)(v7 + 56) |= 0x80u;
  *(_DWORD *)(v7 + 36) = 1;
  *(_QWORD *)(v7 + 792) = v8;
  if ( !v8->m_PowerPageableCapable )
    *(_BYTE *)(v7 + 26) = 0;
  *(_BYTE *)(v7 + 901) = 1;
  return (WDFDEVICE_INIT *)v7;
}
