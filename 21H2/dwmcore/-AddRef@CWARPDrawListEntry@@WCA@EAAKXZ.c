/*
 * XREFs of ?AddRef@CWARPDrawListEntry@@WCA@EAAKXZ @ 0x1800F6440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWARPDrawListEntry::AddRef(__int64 a1)
{
  return CManipulationFrame::AddRef((CManipulationFrame *)(a1 - 32));
}
