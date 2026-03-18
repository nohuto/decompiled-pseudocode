/*
 * XREFs of ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0006360
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000CBA4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C010DF30 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C010E33C (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C010E398 (-IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::SetScalingSupport(
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  this[30] = *a2;
  if ( !DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported((DMMVIDPNPRESENTPATH *)this)
    && (*(_DWORD *)&this[30] & 0x10) != 0 )
  {
    v5 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v5);
    *(_DWORD *)&this[30] &= ~0x10u;
  }
  if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)this)
    && (*(_DWORD *)&this[30] & 8) != 0 )
  {
    v6 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v6);
    *(_DWORD *)&this[30] &= ~8u;
  }
}
