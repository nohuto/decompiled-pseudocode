/*
 * XREFs of VidSchiCompletePreemption @ 0x1C0038930
 * Callers:
 *     VidSchiPreemptEngineNodes @ 0x1C00F3380 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00F35F0 (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C00F3D78 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2908);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption(a1);
  return result;
}
