/*
 * XREFs of DbgkpSendApiMessage @ 0x140882D44
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404E87CC (DbgkPostModuleMessage.c)
 *     DbgkCreateThread @ 0x14064C314 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x14064E6A0 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1406D5C2C (DbgkUnMapViewOfSection.c)
 *     DbgkForwardException @ 0x14071E1F0 (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x140787780 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x1408800CC (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x14088354C (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x1408835FC (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1408836B8 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     EtwTraceDebuggerEvent @ 0x1405A1A5C (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x1406CF790 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x140881108 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x1408838D0 (DbgkpSuspendProcess.c)
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
