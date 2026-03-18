/*
 * XREFs of PopPluginComponentActive @ 0x14023BC58
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140236E70 (PopFxIdleWorkerTail.c)
 *     PopFxCompleteComponentActivation @ 0x1402370B4 (PopFxCompleteComponentActivation.c)
 *     PopFxActivateComponentWorker @ 0x140237664 (PopFxActivateComponentWorker.c)
 * Callees:
 *     PopPepProcessEvent @ 0x14023C01C (PopPepProcessEvent.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopFxBugCheck @ 0x1405638EC (PopFxBugCheck.c)
 *     PopPluginNotifyActive @ 0x140567ECC (PopPluginNotifyActive.c)
 */

__int64 __fastcall PopPluginComponentActive(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  char v6; // si
  __int64 v8; // rdi
  __int64 result; // rax

  v6 = a3;
  if ( a4 )
    memset(a4, 0, 0x40uLL);
  v8 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v8 + 124) )
  {
    LOBYTE(a3) = v6;
    PopPluginNotifyActive(*(_QWORD *)(v8 + 32), a2, a3);
  }
  result = PopPepProcessEvent(v8, (unsigned int)v8 + 200 * a2 + 184, v6 != 0 ? 6 : 3, v6 != 0 ? 2 : 6);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
