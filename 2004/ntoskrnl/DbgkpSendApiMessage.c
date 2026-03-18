/*
 * XREFs of DbgkpSendApiMessage @ 0x140884064
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404E8DFC (DbgkPostModuleMessage.c)
 *     DbgkCreateThread @ 0x1406B52F4 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x1406B7680 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1406F90AC (DbgkUnMapViewOfSection.c)
 *     DbgkForwardException @ 0x14071FF90 (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x140781D60 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x1408813EC (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x14088486C (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x14088491C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1408849D8 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     EtwTraceDebuggerEvent @ 0x1405A214C (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x1406F0A90 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x140882428 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140884BF0 (DbgkpSuspendProcess.c)
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
