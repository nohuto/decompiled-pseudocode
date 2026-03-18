/*
 * XREFs of DbgkpSendApiMessage @ 0x14092A070
 * Callers:
 *     DbgkPostModuleMessage @ 0x1405400A4 (DbgkPostModuleMessage.c)
 *     DbgkUnMapViewOfSection @ 0x1406C321C (DbgkUnMapViewOfSection.c)
 *     DbgkForwardException @ 0x1406EA7D0 (DbgkForwardException.c)
 *     DbgkCreateThread @ 0x140702604 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x140757090 (DbgkMapViewOfSection.c)
 *     DbgkCreateMinimalProcess @ 0x140831AEC (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x140927394 (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x14092A888 (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x14092A938 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14092A9F4 (DbgkExitThread.c)
 * Callees:
 *     PsThawMultiProcess @ 0x140257280 (PsThawMultiProcess.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     EtwTraceDebuggerEvent @ 0x14062D734 (EtwTraceDebuggerEvent.c)
 *     DbgkpQueueMessage @ 0x1409283F4 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x14092AC20 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *Object, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r12
  int v7; // ebp
  int v8; // esi

  CurrentThread = KeGetCurrentThread();
  if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)CurrentThread, 1);
  do
  {
    v7 = 0;
    if ( Object == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v7 = (unsigned __int8)DbgkpSuspendProcess(Object);
    *(_DWORD *)(a3 + 44) = 259;
    v8 = DbgkpQueueMessage(Object, (char *)CurrentThread, a3, 32 * (a2 & 2u), 0LL);
    if ( v7 )
    {
      PsThawMultiProcess((ULONG_PTR)Object, 0LL, 1u);
      KeLeaveCriticalRegion();
    }
  }
  while ( v8 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v8;
}
