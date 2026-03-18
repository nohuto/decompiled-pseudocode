/*
 * XREFs of ?VmBusSignalGuestEventPassive@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024E250
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEventPassive(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  void *v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID v11; // rdi
  __int64 v12; // rax
  PEPROCESS Process; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  Process = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v2 = PsLookupProcessByProcessId(*(HANDLE *)(v1 + 32), &Process);
  v5 = v2;
  if ( v2 >= 0 )
  {
    KeStackAttachProcess(Process, &ApcState);
    v7 = *(void **)(v1 + 24);
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(v7, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v11 = Object;
    if ( v8 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v12 + 24) = *(_QWORD *)(v1 + 24);
      *(_QWORD *)(v12 + 32) = Process;
      WdLogEvent5_WdError(v12);
    }
    else
    {
      if ( *(_BYTE *)(v1 + 41) )
        KePulseEvent((PRKEVENT)Object, 0, 0);
      else
        KeSetEvent((PRKEVENT)Object, 0, 0);
      ObfDereferenceObject(v11);
    }
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(Process);
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v6 + 32) = v5;
    WdLogEvent5_WdError(v6);
  }
  return 0;
}
