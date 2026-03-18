/*
 * XREFs of MagInputTransform @ 0x1C0214998
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C0106E20 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01CFC50 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01D0030 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C0214940 (EditionMagnificationMousePosition.c)
 * Callees:
 *     <none>
 */

__int64 MagInputTransform()
{
  __int64 result; // rax

  result = 0LL;
  if ( grpdeskRitInput )
    return *(_QWORD *)(grpdeskRitInput + 216LL);
  return result;
}
