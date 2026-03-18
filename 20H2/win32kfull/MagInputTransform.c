/*
 * XREFs of MagInputTransform @ 0x1C0213B18
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C01070F0 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01CEE40 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01CF220 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C0213AC0 (EditionMagnificationMousePosition.c)
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
