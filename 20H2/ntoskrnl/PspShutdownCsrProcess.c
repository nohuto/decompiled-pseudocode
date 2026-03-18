/*
 * XREFs of PspShutdownCsrProcess @ 0x140908EA0
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x140909634 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     RtlStringCchPrintfW @ 0x140340D00 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1403F81F0 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1403F8330 (ZwSetEvent.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenEvent @ 0x1403F8970 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x1403F8A70 (ZwCreateEvent.c)
 *     PsInvokeWin32Callout @ 0x140628330 (PsInvokeWin32Callout.c)
 *     PsTerminateProcess @ 0x1406DC8DC (PsTerminateProcess.c)
 *     PspWaitForUsermodeExit @ 0x14090DB3C (PspWaitForUsermodeExit.c)
 */

__int64 __fastcall PspShutdownCsrProcess(struct _LIST_ENTRY *a1, unsigned int a2, _KPROCESS *a3)
{
  struct _LIST_ENTRY *v5; // rdi
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  int v8; // ebx
  HANDLE v9; // rcx
  __int64 result; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v16[3]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[120]; // [rsp+C0h] [rbp-40h] BYREF

  v13 = a2;
  memset(v16, 0, sizeof(v16));
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  EventHandle = 0LL;
  v5 = PsAttachSiloToCurrentThread(a1);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventShutdownCSRSS", a2);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventRitExited", a2);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  v7 = Handle;
  if ( v6 < 0 )
    v7 = 0LL;
  Handle = v7;
  PsDetachSiloFromCurrentThread(v5);
  KiStackAttachProcess(a3, 0, (__int64)v16);
  v8 = PsInvokeWin32Callout(31, 0LL, 1, (__int64)&v13);
  KiUnstackDetachProcess((__int64)v16, 0);
  if ( EventHandle )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
    EventHandle = 0LL;
  }
  v9 = Handle;
  if ( Handle )
  {
    if ( v8 >= 0 )
    {
      ZwWaitForSingleObject(Handle, 0, 0LL);
      v9 = Handle;
    }
    ZwClose(v9);
    Handle = 0LL;
  }
  result = PsTerminateProcess((ULONG_PTR)a3, 0xC00002EB);
  if ( (int)result >= 0 )
    return PspWaitForUsermodeExit(a3);
  return result;
}
