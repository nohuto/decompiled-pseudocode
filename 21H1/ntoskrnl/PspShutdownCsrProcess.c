/*
 * XREFs of PspShutdownCsrProcess @ 0x140902470
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x140902C04 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     RtlStringCchPrintfW @ 0x1402E2030 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1403F23B0 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1403F24F0 (ZwSetEvent.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenEvent @ 0x1403F2B30 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x1403F2C30 (ZwCreateEvent.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     PsTerminateProcess @ 0x1406E666C (PsTerminateProcess.c)
 *     PspWaitForUsermodeExit @ 0x140906C6C (PspWaitForUsermodeExit.c)
 */

__int64 __fastcall PspShutdownCsrProcess(struct _LIST_ENTRY *a1, unsigned int a2, _KPROCESS *a3)
{
  struct _LIST_ENTRY *v5; // rdi
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  _DWORD *v8; // r9
  int v9; // ebx
  __int64 v10; // r8
  _DWORD *v11; // r9
  HANDLE v12; // rcx
  __int64 result; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v19[3]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[120]; // [rsp+C0h] [rbp-40h] BYREF

  v16 = a2;
  memset(v19, 0, sizeof(v19));
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
  KiStackAttachProcess(a3, 0LL, (__int64)v19, v8);
  v9 = PsInvokeWin32Callout(31, 0LL, 1, (__int64)&v16);
  KiUnstackDetachProcess((__int64)v19, 0LL, v10, v11);
  if ( EventHandle )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
    EventHandle = 0LL;
  }
  v12 = Handle;
  if ( Handle )
  {
    if ( v9 >= 0 )
    {
      ZwWaitForSingleObject(Handle, 0, 0LL);
      v12 = Handle;
    }
    ZwClose(v12);
    Handle = 0LL;
  }
  result = PsTerminateProcess((ULONG_PTR)a3);
  if ( (int)result >= 0 )
    return PspWaitForUsermodeExit(a3);
  return result;
}
