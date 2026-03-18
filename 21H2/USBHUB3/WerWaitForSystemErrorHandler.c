/*
 * XREFs of WerWaitForSystemErrorHandler @ 0x1C0042E28
 * Callers:
 *     WerKernelSubmitReport @ 0x1C0042EF8 (WerKernelSubmitReport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WerWaitForSystemErrorHandler(int a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  union _LARGE_INTEGER *v3; // r8
  NTSTATUS v4; // ebx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+78h] [rbp+18h] BYREF
  __int64 v8; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v5[0] = 4718662LL;
  v5[1] = L"\\KernelObjects\\SystemErrorPortReady";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v5;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  EventHandle = 0LL;
  v8 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenEvent(&EventHandle, 0x100001u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( (_DWORD)v1 != -1 )
      v8 = -10000 * v1;
    v3 = (union _LARGE_INTEGER *)&v8;
    if ( (_DWORD)v1 == -1 )
      v3 = 0LL;
    v4 = ZwWaitForSingleObject(EventHandle, 0, v3);
    ZwClose(EventHandle);
    return v4;
  }
  return result;
}
