/*
 * XREFs of imp_WdfIoTargetOpen @ 0x1C0063640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     memmove @ 0x1C001D440 (memmove.c)
 *     WPP_IFR_SF_DDd @ 0x1C002E65C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     FxIoTargetValidateOpenParams @ 0x1C0062A8C (FxIoTargetValidateOpenParams.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0067030 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetOpen(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned int v8; // edx
  bool IsVersionGreaterThanOrEqualTo; // al
  unsigned __int8 v10; // dl
  int v11; // r8d
  size_t Size; // rsi
  unsigned int v13; // edi
  unsigned int v14; // eax
  _DWORD v15[36]; // [rsp+40h] [rbp-A8h] BYREF
  ULONG_PTR retaddr; // [rsp+E8h] [rbp+0h]
  FxIoTargetRemote *pTarget; // [rsp+F0h] [rbp+8h] BYREF

  pTarget = 0LL;
  memset(v15, 0, 0x88uLL);
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)IoTarget,
    0x1201u,
    (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x14u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
  if ( !OpenParams )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 0xDu);
    Size = OpenParams->Size;
    if ( (((_DWORD)Size - 120) & 0xFFFFFFEF) != 0 )
    {
      v13 = -1073741820;
      WPP_IFR_SF_DDd(
        m_Globals,
        v10,
        v11 + 1,
        v11 + 8,
        WPP_FxIoTargetAPI_cpp_Traceguids,
        Size,
        IsVersionGreaterThanOrEqualTo ? 136 : 120,
        -1073741820);
      return v13;
    }
    if ( (unsigned int)Size < 0x88 )
    {
      memset(&v15[1], 0, 0x84uLL);
      memmove(v15, OpenParams, Size);
      v15[0] = 136;
      OpenParams = (_WDF_IO_TARGET_OPEN_PARAMS *)v15;
    }
    result = FxIoTargetValidateOpenParams(m_Globals, OpenParams);
    if ( (int)result >= 0 )
    {
      v14 = FxIoTargetRemote::Open(pTarget, OpenParams);
      v13 = v14;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qL(m_Globals, 5u, 0xEu, 0x16u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, v14);
      return v13;
    }
  }
  return result;
}
