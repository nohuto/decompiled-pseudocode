/*
 * XREFs of VidSchiCompletePreemption @ 0x1C002F364
 * Callers:
 *     VidSchiPreemptEngineNodes @ 0x1C00D147C (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00D1714 (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C00D1FA4 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2892);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption(a1);
  return result;
}
