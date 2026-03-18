/*
 * XREFs of ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A8148
 * Callers:
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A7AE0 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00697AC (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C006AA9C (-Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01BD088 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SerializeFunctionalPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  DMMVIDPNSOURCEMODE *v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  DMMVIDPNTARGETMODE *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  DMMVIDPNPRESENTPATH::Serialize(this, a2);
  v4 = *((_QWORD *)this + 11);
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v5 = *(_QWORD *)(v4 + 104);
  }
  v6 = *(DMMVIDPNSOURCEMODE **)(v5 + 144);
  v11 = v5;
  if ( !v6 )
  {
    WdLogSingleEntry2(2LL, *(unsigned int *)(*((_QWORD *)this + 11) + 24LL), this);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v11, 0LL);
    return 1075708679LL;
  }
  DMMVIDPNSOURCEMODE::Serialize(v6, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)&a2[1]);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v11, 0LL);
  v8 = *((_QWORD *)this + 12);
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 96));
    v9 = *(_QWORD *)(v8 + 104);
  }
  v10 = *(DMMVIDPNTARGETMODE **)(v9 + 144);
  v12 = v9;
  if ( !v10 )
  {
    WdLogSingleEntry2(2LL, *(unsigned int *)(*((_QWORD *)this + 12) + 24LL), this);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v12, 0LL);
    return 1075708679LL;
  }
  DMMVIDPNTARGETMODE::Serialize(
    v10,
    (struct _D3DKMDT_VIDPN_TARGET_MODE *const)&a2[1].VisibleFromActiveBROffset.cy,
    (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)&a2[1].CopyProtection.OEMCopyProtection[44],
    (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)&a2[1].CopyProtection.OEMCopyProtection[48]);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v12, 0LL);
  *(_WORD *)&a2[1].CopyProtection.OEMCopyProtection[52] = *((_WORD *)this + 54);
  return 0LL;
}
