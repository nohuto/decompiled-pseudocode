/*
 * XREFs of imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0065490
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C002B06C (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_Dd @ 0x1C003511C (WPP_IFR_SF_Dd.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     FxValiateCx @ 0x1C0065314 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        int (__fastcall *EvtCxDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        unsigned __int8 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 _a1; // r14
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  unsigned int v11; // edi
  bool v12; // zf
  ULONG Tag; // ecx
  void *v14; // rax
  FxIrpPreprocessInfo *v15; // rax
  unsigned __int16 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // r14
  ULONG v19; // ecx
  void *v20; // rax
  unsigned __int8 *v21; // rcx
  __int64 v22; // rcx
  __m128i v24; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  _a1 = MajorFunction;
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(v6, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  v11 = FxValiateCx(ClientDriverGlobals, v6);
  if ( (v11 & 0x80000000) == 0 )
  {
    if ( !EvtCxDeviceWdmIrpPreprocess )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( NumMinorFunctions && !MinorFunctions )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( (unsigned __int8)_a1 >= 0x1Cu )
    {
      v11 = -1073741811;
      WPP_IFR_SF_Dd(ClientDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxCxDeviceInitApi_cpp_Traceguids, _a1, -1073741811);
      return v11;
    }
    if ( !CxDeviceInit->PreprocessInfo )
    {
      v12 = ClientDriverGlobals->FxPoolTrackingOn == 0;
      Tag = ClientDriverGlobals->Tag;
      v24.m128i_i64[0] = 0LL;
      v24.m128i_i64[1] = 64LL;
      if ( v12 )
        v14 = 0LL;
      else
        v14 = retaddr;
      v15 = (FxIrpPreprocessInfo *)FxPoolAllocator(
                                     ClientDriverGlobals,
                                     &ClientDriverGlobals->FxPoolFrameworks,
                                     &v24,
                                     0x2B8uLL,
                                     Tag,
                                     v14);
      if ( v15 )
        FxIrpPreprocessInfo::FxIrpPreprocessInfo(v15);
      CxDeviceInit->PreprocessInfo = v15;
      if ( !v15 )
      {
        v11 = -1073741670;
        v16 = 12;
LABEL_19:
        WPP_IFR_SF_d(ClientDriverGlobals, 2u, 0x12u, v16, WPP_FxCxDeviceInitApi_cpp_Traceguids, -1073741670);
        return v11;
      }
      v15->ClassExtension = 1;
    }
    v17 = _a1;
    if ( NumMinorFunctions )
    {
      v18 = _a1;
      if ( CxDeviceInit->PreprocessInfo->Dispatch[v18].NumMinorFunctions )
      {
        v11 = -1073741808;
        WPP_IFR_SF_d(ClientDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxCxDeviceInitApi_cpp_Traceguids, -1073741808);
        return v11;
      }
      v12 = ClientDriverGlobals->FxPoolTrackingOn == 0;
      v19 = ClientDriverGlobals->Tag;
      v24.m128i_i64[0] = 0LL;
      v24.m128i_i64[1] = 64LL;
      if ( v12 )
        v20 = 0LL;
      else
        v20 = retaddr;
      CxDeviceInit->PreprocessInfo->Dispatch[v18].MinorFunctions = (unsigned __int8 *)FxPoolAllocator(
                                                                                        ClientDriverGlobals,
                                                                                        &ClientDriverGlobals->FxPoolFrameworks,
                                                                                        &v24,
                                                                                        NumMinorFunctions,
                                                                                        v19,
                                                                                        v20);
      v21 = CxDeviceInit->PreprocessInfo->Dispatch[v18].MinorFunctions;
      if ( !v21 )
      {
        v11 = -1073741670;
        v16 = 14;
        goto LABEL_19;
      }
      memmove(v21, MinorFunctions, NumMinorFunctions);
      CxDeviceInit->PreprocessInfo->Dispatch[v18].NumMinorFunctions = NumMinorFunctions;
    }
    v22 = v17;
    v11 = 0;
    CxDeviceInit->PreprocessInfo->Dispatch[v22].EvtDevicePreprocess = EvtCxDeviceWdmIrpPreprocess;
  }
  return v11;
}
