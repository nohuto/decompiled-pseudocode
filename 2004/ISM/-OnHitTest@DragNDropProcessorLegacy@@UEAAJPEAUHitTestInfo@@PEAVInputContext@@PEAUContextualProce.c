/*
 * XREFs of ?OnHitTest@DragNDropProcessorLegacy@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801754D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragNDropProcessorLegacy::OnHitTest(
        DragNDropProcessorLegacy *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a4 = (*(_DWORD *)a2 & 0x4000) == 0 && (*(_DWORD *)a2 & 0x1A) != 0;
  return result;
}
