/*
 * XREFs of imp_WdfIoTargetOpen @ 0x1C002C9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002CAD0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     FxIoTargetValidateOpenParams @ 0x1C002CEA8 (FxIoTargetValidateOpenParams.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoTargetOpen(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  unsigned int v8; // edx
  bool IsVersionGreaterThanOrEqualTo; // al
  unsigned __int8 v10; // dl
  size_t Size; // rsi
  unsigned int v12; // eax
  int v13; // edi
  _DWORD v14[36]; // [rsp+40h] [rbp-A8h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  FxIoTargetRemote *pTarget; // [rsp+F0h] [rbp+8h] BYREF

  pTarget = 0LL;
  memset(v14, 0, 0x88uLL);
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1201u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x14u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
  if ( !OpenParams )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 0xDu);
    Size = OpenParams->Size;
    if ( (_DWORD)Size != 136 )
    {
      if ( (_DWORD)Size != 120 )
      {
        v13 = -1073741820;
        WPP_IFR_SF_DDd(
          m_Globals,
          v10,
          0xEu,
          0x15u,
          WPP_FxIoTargetAPI_cpp_Traceguids,
          Size,
          IsVersionGreaterThanOrEqualTo ? 136 : 120,
          -1073741820);
        return v13;
      }
      memset(&v14[1], 0, 0x84uLL);
      memmove(v14, OpenParams, Size);
      v14[0] = 136;
      OpenParams = (_WDF_IO_TARGET_OPEN_PARAMS *)v14;
    }
    result = FxIoTargetValidateOpenParams(m_Globals, OpenParams);
    if ( result < 0 )
      return result;
    v12 = FxIoTargetRemote::Open(pTarget, OpenParams);
    v13 = v12;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qL(m_Globals, 5u, 0xEu, 0x16u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, v12);
    return v13;
  }
  return result;
}
