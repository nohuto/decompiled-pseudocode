/*
 * XREFs of ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C021453C
 * Callers:
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C020BEC8 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkSetStablePowerState @ 0x1C02861D0 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C021D3EC (-DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall ADAPTER_RENDER::AddStablePowerReference(ADAPTER_RENDER *this)
{
  __int64 v2; // rcx

  v2 = *((unsigned int *)this + 400);
  if ( !(_DWORD)v2 && *(_QWORD *)(*((_QWORD *)this + 2) + 912LL) != v2 )
  {
    ADAPTER_RENDER::DdiSetStablePowerState(this, 1);
    LODWORD(v2) = *((_DWORD *)this + 400);
  }
  *((_DWORD *)this + 400) = v2 + 1;
}
