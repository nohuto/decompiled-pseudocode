/*
 * XREFs of ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C0168CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C012F360 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall DxgkGetMaximumAdapterCount(__int64 a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  __int64 v3; // rdx

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  return DXGGLOBAL::GetMaximumAdapterCount(Global, v3);
}
