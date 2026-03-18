/*
 * XREFs of _DestroyProcessInfoEditionRundown@4 @ 0xB1F96
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YGXQAUtagPROCESSINFO@@@Z @ 0xB1FC2 (-TraceLoggingProcessUsageOnTerminationEvent@@YGXQAUtagPROCESSINFO@@@Z.c)
 */

void __stdcall DestroyProcessInfoEditionRundown(int a1)
{
  struct tagPROCESSINFO *v1; // [esp+0h] [ebp-4h]

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 528) )
    {
      TraceLoggingProcessUsageOnTerminationEvent(v1);
      *(_DWORD *)(a1 + 528) = 0;
    }
  }
}
