/*
 * XREFs of ?GetSgListBufferSize@FxDmaSystemTransaction@@MEAAKXZ @ 0x1C000DA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDmaSystemTransaction::GetSgListBufferSize(FxDmaSystemTransaction *this)
{
  return LODWORD(this->m_DmaEnabler->m_SGListSize);
}
