/*
 * XREFs of ?UsesSoftRealtimeTrustModel@DXGCONTEXT@@QEAA_NXZ @ 0x1C0027678
 * Callers:
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C00E12D0 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00E18D0 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall DXGCONTEXT::UsesSoftRealtimeTrustModel(DXGCONTEXT *this)
{
  return DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) != 0;
}
