/*
 * XREFs of DbgkpSendApiMessage @ 0x1408872B4
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404EE1AC (DbgkPostModuleMessage.c)
 *     DbgkUnMapViewOfSection @ 0x140606948 (DbgkUnMapViewOfSection.c)
 *     DbgkCreateThread @ 0x14063C210 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x1406C0FF4 (DbgkMapViewOfSection.c)
 *     DbgkForwardException @ 0x1407323B0 (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x1407C6898 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x14088463C (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x140887ABC (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x140887B6C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140887C28 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     EtwTraceDebuggerEvent @ 0x1405A784C (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x1406001EC (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x140885678 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140887E40 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *Object, char a2, __int64 a3)
{
  int v6; // ebp
  int v7; // esi

  if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)KeGetCurrentThread(), 1);
  do
  {
    v6 = 0;
    if ( Object == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v6 = (unsigned __int8)DbgkpSuspendProcess(Object);
    *(_DWORD *)(a3 + 44) = 259;
    v7 = DbgkpQueueMessage(Object, (char *)KeGetCurrentThread(), a3, 32 * (a2 & 2u), 0LL);
    if ( v6 )
    {
      PsThawProcess((ULONG_PTR)Object, 0);
      KeLeaveCriticalRegion();
    }
  }
  while ( v7 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v7;
}
