/*
 * XREFs of PopFxActivateComponentWorker @ 0x140355144
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140355534 (PopFxIdleWorkerTail.c)
 *     PoFxActivateComponent @ 0x140357D10 (PoFxActivateComponent.c)
 *     PopFxActivateComponent @ 0x1403BA340 (PopFxActivateComponent.c)
 * Callees:
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 *     PopFxActivateComponentDependencies @ 0x1403551C8 (PopFxActivateComponentDependencies.c)
 *     PopFxAddRefDevice @ 0x140355350 (PopFxAddRefDevice.c)
 *     PopFxCompleteComponentActivation @ 0x140355774 (PopFxCompleteComponentActivation.c)
 *     PopPluginComponentActive @ 0x140356350 (PopPluginComponentActive.c)
 */

__int64 __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, char a3, int *a4)
{
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r8

  PopFxAddRefDevice(a1);
  LOBYTE(v8) = a3;
  result = PopFxActivateComponentDependencies(a2, v8);
  if ( a3 )
    return PopFxCompleteComponentActivation(a1);
  if ( (_BYTE)result )
  {
    LOBYTE(v10) = 1;
    result = PopPluginComponentActive(a1, *(unsigned int *)(a2 + 16), v10, a4);
    if ( (_BYTE)result == 1 )
      return PopFxProcessWork(0LL, a4, v11);
  }
  return result;
}
