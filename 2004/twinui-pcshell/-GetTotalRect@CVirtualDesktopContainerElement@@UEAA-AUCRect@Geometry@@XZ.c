/*
 * XREFs of ?GetTotalRect@CVirtualDesktopContainerElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1803C0350
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z @ 0x1803BFF58 (-CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z.c)
 */

_DWORD *__fastcall CVirtualDesktopContainerElement::GetTotalRect(__int64 a1, _DWORD *a2)
{
  int v2; // edi
  int v4; // ebx
  int v5; // eax
  _DWORD *result; // rax

  v2 = *(_DWORD *)(a1 - 156);
  v4 = *(_DWORD *)(a1 - 164);
  v5 = CVirtualDesktopContainerElement::CalcWidthForDesktopCount(
         (CVirtualDesktopContainerElement *)(a1 - 224),
         *(_DWORD *)(a1 - 224 + 800));
  *a2 = 0;
  a2[1] = 0;
  a2[2] = v5;
  result = a2;
  a2[3] = v2 - v4;
  return result;
}
