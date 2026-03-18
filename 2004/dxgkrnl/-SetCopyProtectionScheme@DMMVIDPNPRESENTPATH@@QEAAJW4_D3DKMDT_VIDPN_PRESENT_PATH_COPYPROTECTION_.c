/*
 * XREFs of ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000CD7C
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000CB44 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C013FF54 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C0147F20 (-RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I.c)
 * Callees:
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000CDCC (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rax

  v2 = (int)a2;
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    v5 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v5 + 24) = v2;
    WdLogEvent5_WdError(v5);
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8);
    v9[3] = v2;
    v9[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v9[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdWarning(v9);
    return 3223192399LL;
  }
  else if ( DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
              this,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)a2) )
  {
    *((_DWORD *)this + 43) = v2;
    return 0LL;
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v10[3] = v2;
    v10[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v10[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdDmmEvent(v10);
    return 3223192326LL;
  }
}
