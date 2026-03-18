/*
 * XREFs of imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x1C0011FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C001207C (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListAddOrUpdateChildDescriptionAsPresent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  unsigned int *v7; // r9
  FxChildList *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int _a3; // eax
  unsigned int AddressDescriptionSize; // edx
  unsigned int v12; // ebx
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // r9
  unsigned __int8 v16; // dl
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxChildList *pList; // [rsp+60h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)DeviceList, 0x1029u, (void **)&pList);
  v8 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x21u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v8 = pList;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( AddressDescription )
  {
    _a3 = v8->m_AddressDescriptionSize;
    if ( !_a3 )
    {
      v12 = -1073741808;
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x22u, WPP_FxChildListAPI_cpp_Traceguids, -1073741808);
      return v12;
    }
    AddressDescriptionSize = AddressDescription->AddressDescriptionSize;
    if ( _a3 != AddressDescription->AddressDescriptionSize )
    {
      v14 = 35;
LABEL_15:
      v12 = -1073741808;
      WPP_IFR_SF_DDd(
        m_Globals,
        AddressDescriptionSize,
        0xCu,
        v14,
        WPP_FxChildListAPI_cpp_Traceguids,
        AddressDescriptionSize,
        _a3,
        -1073741808);
      return v12;
    }
  }
  else if ( v8->m_AddressDescriptionSize )
  {
    v12 = -1073741808;
    v15 = 36;
    v16 = 2;
LABEL_18:
    WPP_IFR_SF_qL(m_Globals, v16, 0xCu, v15, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, v12);
    return v12;
  }
  _a3 = v8->m_IdentificationDescriptionSize;
  AddressDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
  if ( _a3 != IdentificationDescription->IdentificationDescriptionSize )
  {
    v14 = 37;
    goto LABEL_15;
  }
  v12 = FxChildList::Add(v8, IdentificationDescription, AddressDescription, v7);
  if ( m_Globals->FxVerboseOn )
  {
    v15 = 38;
    v16 = 5;
    goto LABEL_18;
  }
  return v12;
}
