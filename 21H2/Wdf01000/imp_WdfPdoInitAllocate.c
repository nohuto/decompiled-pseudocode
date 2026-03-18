/*
 * XREFs of imp_WdfPdoInitAllocate @ 0x1C001F300
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C001FA58 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 */

void __fastcall imp_WdfPdoInitAllocate(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *ParentDevice)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  bool v3; // zf
  ULONG Tag; // ecx
  void *v5; // rax
  FX_POOL **v6; // rax
  __int64 v7; // rax
  FxDevice *v8; // rcx
  unsigned __int16 v9; // r9
  __m128i v10; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ParentDevice,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) < 0 )
    return;
  if ( pDevice->m_PkgPnp->m_Type != 4353 )
  {
    v9 = 51;
    goto LABEL_14;
  }
  v3 = m_Globals->FxPoolTrackingOn == 0;
  Tag = m_Globals->Tag;
  v10.m128i_i64[0] = 0LL;
  v10.m128i_i64[1] = 64LL;
  if ( v3 )
    v5 = 0LL;
  else
    v5 = retaddr;
  v6 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v10, 0x3B0uLL, Tag, v5);
  if ( !v6 || (WDFDEVICE_INIT::WDFDEVICE_INIT((WDFDEVICE_INIT *)v6, pDevice->m_Driver), !v7) )
  {
    v9 = 52;
LABEL_14:
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, v9, WPP_FxDeviceInitApi_cpp_Traceguids);
    return;
  }
  v8 = pDevice;
  *(_DWORD *)(v7 + 56) |= 0x80u;
  *(_DWORD *)(v7 + 36) = 1;
  *(_QWORD *)(v7 + 792) = v8;
  if ( !v8->m_PowerPageableCapable )
    *(_BYTE *)(v7 + 26) = 0;
  *(_BYTE *)(v7 + 901) = 1;
}
