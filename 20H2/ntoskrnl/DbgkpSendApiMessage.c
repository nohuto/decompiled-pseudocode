/*
 * XREFs of DbgkpSendApiMessage @ 0x140889BB4
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404EC68C (DbgkPostModuleMessage.c)
 *     DbgkCreateThread @ 0x140692EF4 (DbgkCreateThread.c)
 *     DbgkUnMapViewOfSection @ 0x1406CB91C (DbgkUnMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1406EFF84 (DbgkMapViewOfSection.c)
 *     DbgkForwardException @ 0x14072DF80 (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x1407C2278 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x140886F3C (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x14088A3BC (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x14088A46C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14088A528 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     EtwTraceDebuggerEvent @ 0x1405A5BEC (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x14071C6B0 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x140887F78 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x14088A740 (DbgkpSuspendProcess.c)
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
      PsThawProcess((__int64)Object, 0);
      KeLeaveCriticalRegion();
    }
  }
  while ( v7 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v7;
}
