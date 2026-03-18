/*
 * XREFs of ?IsEmptyDrawing@CRedirectedVisualContent@@UEBA_NXZ @ 0x1800CE540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRedirectedVisualContent::IsEmptyDrawing(CRedirectedVisualContent *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 8) + 88LL) & 0x100) == 0;
}
