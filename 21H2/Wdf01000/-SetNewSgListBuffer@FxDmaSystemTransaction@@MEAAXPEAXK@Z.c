/*
 * XREFs of ?SetNewSgListBuffer@FxDmaSystemTransaction@@MEAAXPEAXK@Z @ 0x1C00589A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxDmaSystemTransaction::SetNewSgListBuffer(
        FxDmaSystemTransaction *this,
        unsigned __int64 Buffer,
        unsigned int Size)
{
  unsigned __int64 v4; // rsi

  v4 = Size;
  ExFreePoolWithTag(this->m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.SingleListHead.Next, 0);
  this->m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment = Buffer;
  this->m_DmaEnabler->m_SGListSize = v4;
}
