/*
 * XREFs of ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C314C
 * Callers:
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C02BB714 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkSetStablePowerState @ 0x1C03389E0 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C02CC728 (-DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall ADAPTER_RENDER::AddStablePowerReference(ADAPTER_RENDER *this)
{
  __int64 v2; // rcx

  v2 = *((unsigned int *)this + 416);
  if ( !(_DWORD)v2 && *(_QWORD *)(*((_QWORD *)this + 2) + 1000LL) != v2 )
  {
    ADAPTER_RENDER::DdiSetStablePowerState(this, 1);
    LODWORD(v2) = *((_DWORD *)this + 416);
  }
  *((_DWORD *)this + 416) = v2 + 1;
}
