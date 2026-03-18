/*
 * XREFs of ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0064850
 * Callers:
 *     UserDispatchMITCompletion @ 0x1C00647BC (UserDispatchMITCompletion.c)
 * Callees:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C004179C (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0064888 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 */

void __fastcall IOCPDispatcher::Dispatch(IOCPDispatcher *a1, int a2, unsigned int a3)
{
  if ( a2 == 1 )
  {
    IOCPDispatcher::HandleSensorDispatcherSignal(a1, a3);
  }
  else if ( a2 == 2 )
  {
    IOCPDispatcher::HandleThreadDispatcherSignal(a1, a3);
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, a2, a3, 0LL, 0LL, 0LL, 0LL, 0);
  }
}
