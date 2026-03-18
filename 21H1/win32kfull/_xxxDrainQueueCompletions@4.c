/*
 * XREFs of _xxxDrainQueueCompletions@4 @ 0x6EB04
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     __GetQueueStatus@4 @ 0x6E7E0 (__GetQueueStatus@4.c)
 *     __DrainThreadCoreMessagingCompletions@0 @ 0x6E99A (__DrainThreadCoreMessagingCompletions@0.c)
 *     _NtUserGetQueueStatusReadonly@4 @ 0x6EA4E (_NtUserGetQueueStatusReadonly@4.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YGXPAUtagTHREADINFO@@QAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x6EBE2 (-xxxHandleCoreMessagingQueueCompletion@@YGXPAUtagTHREADINFO@@QAU_FILE_IO_COMPLETION_INFORMATION@.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __thiscall xxxDrainQueueCompletions(void *this)
{
  PKTHREAD CurrentThread; // edi
  _DWORD *v3; // esi
  _DWORD *ThreadWin32Thread; // eax
  int v5; // edi
  int result; // eax
  int v7; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v8[2]; // [esp+10h] [ebp-18h] BYREF
  int v9; // [esp+18h] [ebp-10h] BYREF
  int v10; // [esp+1Ch] [ebp-Ch]
  int v11; // [esp+20h] [ebp-8h]
  int v12; // [esp+24h] [ebp-4h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (_DWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = (_DWORD *)*ThreadWin32Thread;
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v7 = 0;
  v5 = 0;
  v8[0] = 0;
  v8[1] = 0;
  ZwSetIoCompletionEx(v3[204], v3[208], 0, 2, 0, 0);
  while ( 1 )
  {
    result = ZwRemoveIoCompletionEx(v3[204], &v9, 1, &v7, v8, 0);
    if ( result )
      break;
    result = v10;
    if ( v10 == 1 )
    {
      v5 = 1;
    }
    else
    {
      if ( v10 || !v3[209] )
        break;
      xxxHandleCoreMessagingQueueCompletion(this);
    }
  }
  if ( v5 )
    return ZwAssociateWaitCompletionPacket(v3[207], v3[204], v3[206], 0, 1, 0, 0, 0);
  return result;
}
