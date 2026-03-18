/*
 * XREFs of ?AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z @ 0x1C004F760
 * Callers:
 *     <none>
 * Callees:
 *     ?AddChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C007E8A0 (-AddChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 */

void __fastcall FxDevice::AddChildList(FxDevice *this, FxChildList *List)
{
  FxPkgPnp *m_PkgPnp; // rcx

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
    FxPkgPnp::AddChildList(m_PkgPnp, List);
}
