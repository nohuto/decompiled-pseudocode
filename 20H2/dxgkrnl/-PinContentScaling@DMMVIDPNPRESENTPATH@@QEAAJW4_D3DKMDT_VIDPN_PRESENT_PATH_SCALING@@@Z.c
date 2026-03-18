/*
 * XREFs of ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0005B94
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000CBA4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C010E450 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02DD464 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C02DE818 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00058D0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0005C40 (-IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALIN.c)
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0005CB0 (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C010E3F4 (-IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::PinContentScaling(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax

  v2 = (int)a2;
  if ( (_DWORD)a2 == 253 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v16[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v16[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
LABEL_13:
    WdLogEvent5_WdError(v16);
    return 3223192389LL;
  }
  if ( DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 255 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v18 + 24) = 614LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 5 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v19 + 24) = 617LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 4 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v20 + 24) = 618LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(this, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v2) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v16[3] = v2;
    v16[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v16[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    goto LABEL_13;
  }
  if ( DMMVIDPNPRESENTPATH::IsScalingTransformationSupported(this, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v2) )
  {
    v12 = *((_DWORD *)this + 28);
    *((_DWORD *)this + 28) = v2;
    if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(this) )
      return 0LL;
    v17 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v17 + 24) = v2;
    *(_QWORD *)(v17 + 32) = this;
    WdLogEvent5_WdError(v17);
    *((_DWORD *)this + 28) = v12;
    return 3223192389LL;
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdWarning();
  v21[3] = v2;
  v21[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  v21[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdWarning(v21);
  return 3223192326LL;
}
