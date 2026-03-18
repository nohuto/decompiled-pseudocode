/*
 * XREFs of VidSchNotifyDeviceRemoved @ 0x1C0035150
 * Callers:
 *     VidSchiNotifyDeviceRemoved @ 0x1C003D0C8 (VidSchiNotifyDeviceRemoved.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchNotifyDeviceRemoved(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  int updated; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  _CLIENT_ID ClientId; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+98h] [rbp+18h] BYREF
  void *ProcessHandle; // [rsp+A0h] [rbp+20h] BYREF

  ProcessHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ClientId.UniqueProcess = Context;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId) >= 0 )
  {
    v15 = 1;
    updated = ZwUpdateWnfStateData(&WNF_DX_DEVICE_REMOVAL, &v15, 4LL);
    v12 = updated;
    if ( updated >= 0 )
      goto LABEL_6;
    v7 = WdLogNewEntry5_WdAssertion(v10, v9, v11);
    *(_QWORD *)(v7 + 24) = v12;
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = ClientId.UniqueProcess;
  }
  WdLogEvent5_WdAssertion(v7);
LABEL_6:
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
