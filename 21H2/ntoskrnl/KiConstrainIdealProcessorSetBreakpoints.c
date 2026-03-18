/*
 * XREFs of KiConstrainIdealProcessorSetBreakpoints @ 0x1402A09C8
 * Callers:
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x1402930CC (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 *     KiSelectIdealProcessorSetsForProcess @ 0x1402A08EC (KiSelectIdealProcessorSetsForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiConstrainIdealProcessorSetBreakpoints(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( *a1 < *a2 )
    *a1 = *a2;
  result = (unsigned int)a2[1];
  if ( a1[1] > (unsigned int)result )
    a1[1] = result;
  return result;
}
