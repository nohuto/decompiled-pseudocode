/*
 * XREFs of ?ContainsButtonTransition@CMouseProcessor@@CA_NAEBVCMouseEvent@1@@Z @ 0x1C00445B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMouseProcessor::ContainsButtonTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  return (*(_WORD *)(*((_QWORD *)a1 + 1) + 28LL) & 0xF3FF) != 0;
}
