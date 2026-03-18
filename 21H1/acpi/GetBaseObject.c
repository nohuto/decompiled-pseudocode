/*
 * XREFs of GetBaseObject @ 0x1C001451C
 * Callers:
 *     DerefOf @ 0x1C000B080 (DerefOf.c)
 *     AMLIEvalPackageElement @ 0x1C0012120 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0013CE8 (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     DebugRunMethod @ 0x1C00662B0 (DebugRunMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseObject(__int64 a1)
{
  while ( *(_WORD *)(a1 + 66) == 128 )
    a1 = *(_QWORD *)(a1 + 80);
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  return a1;
}
