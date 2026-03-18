/*
 * XREFs of ?VmBusWnfNotification@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024FE40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusWnfNotification(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  void *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _CLIENT_ID ClientId; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *ProcessHandle; // [rsp+90h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  ClientId.UniqueProcess = *(HANDLE *)(v1 + 32);
  v2 = 0LL;
  ClientId.UniqueThread = 0LL;
  ProcessHandle = 0LL;
  if ( *(_QWORD *)(v1 + 32) )
  {
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId) < 0 )
    {
      v5 = WdLogNewEntry5_WdError(v4, v3);
      *(_QWORD *)(v5 + 24) = ClientId.UniqueProcess;
      WdLogEvent5_WdError(v5);
      return 0;
    }
    v2 = ProcessHandle;
  }
  v6 = (_QWORD *)(v1 + 44);
  ZwUpdateWnfStateData(v1 + 24, v1 + 44, *(unsigned int *)(v1 + 40), 0LL, v2, 0, 0);
  if ( RtlCompareMemory((const void *)(v1 + 24), &WNF_DX_VIDMM_TRIM_NOTIFICATION, 8uLL) == 8 )
  {
    v10 = *((unsigned int *)DXGGLOBAL::GetGlobal(v8, v7) + 212);
    if ( *(_DWORD *)v6 == (_DWORD)v10 && *(_DWORD *)(v1 + 48) == *((_DWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 213) )
    {
      *v6 = *((_QWORD *)DXGGLOBAL::GetGlobal(v12, v11) + 107);
      ZwUpdateWnfStateData(v1 + 24, v1 + 44, *(unsigned int *)(v1 + 40), 0LL, ProcessHandle, 0, 0);
    }
  }
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  return 0;
}
