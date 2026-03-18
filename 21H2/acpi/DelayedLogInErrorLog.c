/*
 * XREFs of DelayedLogInErrorLog @ 0x1C0068AC0
 * Callers:
 *     <none>
 * Callees:
 *     LogInErrorLog @ 0x1C0069028 (LogInErrorLog.c)
 */

void __fastcall DelayedLogInErrorLog(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  LOBYTE(DeviceObject) = *(_BYTE *)Context;
  LogInErrorLog(DeviceObject, *((unsigned int *)Context + 1), *((unsigned int *)Context + 2));
  IoFreeWorkItem(Context[2]);
  ExFreePoolWithTag(Context, 0);
}
