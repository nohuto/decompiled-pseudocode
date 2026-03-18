/*
 * XREFs of ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C01465FC
 * Callers:
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0146564 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008208 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C000CA34 (-Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000CA88 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C013A95C (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SerializeFunctionalPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  DMMVIDPNSOURCEMODE *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  DMMVIDPNTARGETMODE *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF
  __int64 v17; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v13);
  }
  DMMVIDPNPRESENTPATH::Serialize(this, a2);
  v5 = *((_QWORD *)this + 11);
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    v6 = *(_QWORD *)(v5 + 104);
  }
  v7 = *(DMMVIDPNSOURCEMODE **)(v6 + 144);
  v16 = v6;
  if ( v7 )
  {
    DMMVIDPNSOURCEMODE::Serialize(v7, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)&a2[1]);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v16, 0LL);
    v9 = *((_QWORD *)this + 12);
    v10 = *(_QWORD *)(v9 + 104);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 96));
      v10 = *(_QWORD *)(v9 + 104);
    }
    v11 = *(DMMVIDPNTARGETMODE **)(v10 + 144);
    v17 = v10;
    if ( v11 )
    {
      DMMVIDPNTARGETMODE::Serialize(
        v11,
        (struct _D3DKMDT_VIDPN_TARGET_MODE *const)&a2[1].VisibleFromActiveBROffset.cy,
        (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)&a2[1].CopyProtection.OEMCopyProtection[36],
        (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)&a2[1].CopyProtection.OEMCopyProtection[40]);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v17, 0LL);
      *(_WORD *)&a2[1].CopyProtection.OEMCopyProtection[44] = *((_WORD *)this + 54);
      return 0LL;
    }
    v15 = WdLogNewEntry5_WdError(0LL, v8);
    *(_QWORD *)(v15 + 24) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdError(v15);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v17, 0LL);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(0LL, v4);
    *(_QWORD *)(v14 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    *(_QWORD *)(v14 + 32) = this;
    WdLogEvent5_WdError(v14);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v16, 0LL);
  }
  return 1075708679LL;
}
