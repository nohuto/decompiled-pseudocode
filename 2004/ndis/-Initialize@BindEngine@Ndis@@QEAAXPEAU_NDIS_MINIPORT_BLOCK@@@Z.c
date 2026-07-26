/*
 * XREFs of ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F87E4
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::Initialize(Ndis::BindEngine *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  this->m_miniport = a2;
  a2->Bindings.Miniport.Miniport = a2;
}
