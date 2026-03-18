/*
 * XREFs of GetBaseObject @ 0x1C0019CB4
 * Callers:
 *     DerefOf @ 0x1C000A880 (DerefOf.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     AMLIFindNameSpaceObject @ 0x1C001F5E4 (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0024258 (AMLIEvalPackageElement.c)
 *     DebugRunMethod @ 0x1C00676F0 (DebugRunMethod.c)
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
