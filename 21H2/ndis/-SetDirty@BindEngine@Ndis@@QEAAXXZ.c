/*
 * XREFs of ?SetDirty@BindEngine@Ndis@@QEAAXXZ @ 0x1C0122818
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C002E960 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::SetDirty(Ndis::BindEngine *this)
{
  this->m_isDirty = 1;
}
