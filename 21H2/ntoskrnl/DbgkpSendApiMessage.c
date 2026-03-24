/*
 * XREFs of DbgkpSendApiMessage @ 0x140887154
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404EDF6C (DbgkPostModuleMessage.c)
 *     DbgkCreateThread @ 0x140647420 (DbgkCreateThread.c)
 *     DbgkUnMapViewOfSection @ 0x1406A89C8 (DbgkUnMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1407129A4 (DbgkMapViewOfSection.c)
 *     DbgkForwardException @ 0x1407321F0 (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x1407C6578 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x1408844DC (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x14088795C (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x140887A0C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140887AC8 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     EtwTraceDebuggerEvent @ 0x1405A761C (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x14067D0F8 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x140885518 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140887CE0 (DbgkpSuspendProcess.c)
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
