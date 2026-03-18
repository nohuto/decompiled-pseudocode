/*
 * XREFs of ?SetWaitForWinstaRundown@@YGXXZ @ 0xCCA68
 * Callers:
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 * Callees:
 *     <none>
 */

void __stdcall SetWaitForWinstaRundown()
{
  void *KernelEvent; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-20h] BYREF
  void *ThreadHandle; // [esp+20h] [ebp-8h] BYREF
  void *Handle; // [esp+24h] [ebp-4h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Handle = 0;
  ThreadHandle = 0;
  KernelEvent = (void *)CreateKernelEvent(1, 0);
  if ( ObOpenObjectByPointer((PVOID)_gpepCSRSS, 0, 0, 2u, 0, 0, &Handle) >= 0 )
  {
    ObjectAttributes.Length = 24;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    if ( PsCreateSystemThread(
           &ThreadHandle,
           (ULONG)&loc_1FFFFC + 3,
           &ObjectAttributes,
           Handle,
           0,
           WaitForWinstaRundown,
           KernelEvent) >= 0 )
    {
      if ( KernelEvent )
        KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0);
      else
        UserSleep(100);
    }
  }
  if ( KernelEvent )
    Win32FreePool(KernelEvent);
  if ( Handle )
    ZwClose(Handle);
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
}
