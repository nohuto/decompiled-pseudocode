/*
 * XREFs of imp_WdfInterruptCreate @ 0x1C001E960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001C758 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C001EB1C (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     WPP_IFR_SF_DD @ 0x1C005A3C8 (WPP_IFR_SF_DD.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C00851D4 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 */

int __fastcall imp_WdfInterruptCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_INTERRUPT_CONFIG *Configuration,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFINTERRUPT__ **Interrupt)
{
  unsigned int v9; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFINTERRUPT__ **v11; // r12
  unsigned int v12; // edx
  _FX_DRIVER_GLOBALS *v13; // rcx
  int globals; // eax
  size_t Size; // rbx
  int result; // eax
  unsigned __int8 v17; // r8
  void *ParentObject; // rdx
  FxDevice *v19; // r14
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptRaw; // r10
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptTranslated; // r8
  unsigned __int8 CanWakeDevice; // r9
  int v23; // edx
  unsigned __int8 m_CallbackFlags; // bl
  unsigned __int8 v25; // r8
  unsigned int v26; // ebx
  unsigned __int16 v27; // r9
  FxObject *pParent; // [rsp+40h] [rbp-61h] BYREF
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp-59h] BYREF
  _WDF_INTERRUPT_CONFIG intConfig; // [rsp+50h] [rbp-51h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]
  unsigned __int8 PreviousIrql; // [rsp+100h] [rbp+5Fh] BYREF
  FxDevice *pDevice; // [rsp+110h] [rbp+6Fh] BYREF

  pFxInterrupt = 0LL;
  pDevice = 0LL;
  pParent = 0LL;
  memset(&intConfig, 0, sizeof(intConfig));
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Configuration )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v11 = Interrupt;
  if ( !Interrupt )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v9, 0xDu) )
    globals = 104;
  else
    globals = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v13, v12, 0xBu) ? 96 : 56;
  Size = Configuration->Size;
  if ( (_DWORD)Size != 104 )
  {
    if ( (_DWORD)Size != 96 && (_DWORD)Size != 56 )
    {
      WPP_IFR_SF_DD(m_Globals, v12, 0xCu, 0xAu, WPP_FxInterruptApi_cpp_Traceguids, Size, globals);
      return -1073741820;
    }
    memset(&intConfig, 0, sizeof(intConfig));
    intConfig.EvtInterruptIsr = Configuration->EvtInterruptIsr;
    intConfig.EvtInterruptDpc = Configuration->EvtInterruptDpc;
    intConfig.ShareVector = WdfUseDefault;
    intConfig.ReportInactiveOnPowerDown = WdfUseDefault;
    memmove(&intConfig, Configuration, Size);
    intConfig.Size = 104;
    Configuration = &intConfig;
  }
  if ( !Configuration->EvtInterruptIsr )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xBu, WPP_FxInterruptApi_cpp_Traceguids, Configuration);
    return -1073741811;
  }
  result = FxValidateObjectAttributes(m_Globals, Attributes, Configuration->AutomaticSerialization == 0);
  if ( result < 0 )
    return result;
  if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v19 = pDevice;
  }
  else
  {
    v19 = pDevice;
    pParent = pDevice;
  }
  if ( v19->m_CurrentPnpState != WdfDevStatePnpInit )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(v19, &PreviousIrql, v17);
    m_CallbackFlags = v19->m_CallbackFlags;
    FxNonPagedObject::Unlock(v19, PreviousIrql, v25);
    if ( (m_CallbackFlags & 1) == 0 )
    {
      v26 = -1073741436;
      WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, 0xCu, WPP_FxInterruptApi_cpp_Traceguids, Device, 0xC0000184);
      return v26;
    }
    InterruptRaw = Configuration->InterruptRaw;
    if ( InterruptRaw && (InterruptTranslated = Configuration->InterruptTranslated) != 0LL )
    {
      if ( Configuration->ShareVector == WdfUseDefault )
      {
        v19 = pDevice;
        goto LABEL_15;
      }
      v26 = -1073741436;
      v27 = 16;
    }
    else
    {
      v26 = -1073741436;
      v27 = 15;
    }
LABEL_62:
    WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, v27, WPP_FxInterruptApi_cpp_Traceguids, Configuration, v26);
    return v26;
  }
  InterruptRaw = Configuration->InterruptRaw;
  if ( InterruptRaw || (InterruptTranslated = Configuration->InterruptTranslated) != 0LL )
  {
    v27 = 13;
    goto LABEL_61;
  }
  if ( Configuration->CanWakeDevice )
  {
    v27 = 14;
    goto LABEL_61;
  }
LABEL_15:
  CanWakeDevice = Configuration->CanWakeDevice;
  if ( CanWakeDevice )
  {
    if ( (InterruptTranslated->Flags & 0x20) != 0 )
    {
      if ( v19->m_PkgPnp->m_PowerPolicyMachine.m_Owner )
      {
        if ( !FxDevice::IsPdo(v19) )
          goto LABEL_16;
        v27 = 19;
      }
      else
      {
        v27 = 18;
      }
    }
    else
    {
      v27 = 17;
    }
LABEL_61:
    v26 = -1073741811;
    goto LABEL_62;
  }
LABEL_16:
  if ( Configuration->EvtInterruptDpc && Configuration->EvtInterruptWorkItem )
  {
    v27 = 20;
    goto LABEL_61;
  }
  if ( !Configuration->PassiveHandling )
  {
    if ( Configuration->WaitLock )
    {
      v27 = 21;
    }
    else
    {
      if ( !CanWakeDevice )
        goto LABEL_21;
      v27 = 22;
    }
    goto LABEL_61;
  }
  if ( !FxLibraryGlobals.PassiveLevelInterruptSupport )
  {
    v26 = -1073741637;
    v27 = 23;
    goto LABEL_62;
  }
  if ( Configuration->SpinLock )
  {
    v27 = 24;
    goto LABEL_61;
  }
LABEL_21:
  if ( m_Globals->FxVerifierOn && InterruptRaw )
  {
    result = FxPkgPnp::ValidateInterruptResourceCm(v19->m_PkgPnp, InterruptRaw, InterruptTranslated, Configuration);
    if ( result < 0 )
      return result;
    v19 = pDevice;
  }
  v23 = FxInterrupt::_CreateAndInit(m_Globals, v19, pParent, Attributes, Configuration, &pFxInterrupt);
  if ( v23 >= 0 )
    *v11 = (WDFINTERRUPT__ *)FxObject::GetObjectHandleUnchecked(pFxInterrupt);
  return v23;
}
