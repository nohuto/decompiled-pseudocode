/*
 * XREFs of ?AddRef@CD3DResource@@$4PPPPPPPM@II@EAAKXZ @ 0x1800EE500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DResource::AddRef(__int64 a1)
{
  return CManipulationFrame::AddRef((CManipulationFrame *)(a1 - *(int *)(a1 - 4) - 136));
}
