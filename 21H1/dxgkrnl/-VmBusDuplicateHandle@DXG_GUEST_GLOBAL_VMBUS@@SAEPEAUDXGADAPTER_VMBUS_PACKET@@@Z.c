/*
 * XREFs of ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023C450
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0234A68 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C02490EC (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0266798 (-ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusDuplicateHandle(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2)
{
  __int64 v2; // rdi
  PVOID v3; // rsi
  struct _KPROCESS *v4; // r14
  DXGGLOBAL *Global; // rax
  struct ADAPTER_RENDER **v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // ebx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct DXGGLOBAL *v24; // rax
  struct _MDL *v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  void *ProcessHandle; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v34; // [rsp+40h] [rbp-C0h] BYREF
  void *Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h] BYREF
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  int v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A8h] [rbp-58h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  void *v45; // [rsp+C0h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v47[144]; // [rsp+100h] [rbp+0h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  Handle = 0LL;
  v3 = 0LL;
  v34 = 0LL;
  v4 = 0LL;
  Object = 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v6 = (struct ADAPTER_RENDER **)DXGGLOBAL::ReferenceAdapterByHostLuid(
                                   Global,
                                   *(struct _LUID *)(v2 + 24),
                                   (unsigned __int64 *)&Object);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, (struct DXGADAPTER *const)v6, 0LL);
  if ( !v6
    || (v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47, 0LL),
        DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v6),
        v15 < 0) )
  {
    v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v11 + 24) = *(int *)(v2 + 28);
    v14 = *(unsigned int *)(v2 + 24);
    *(_QWORD *)(v11 + 32) = v14;
    goto LABEL_12;
  }
  ClientId.UniqueProcess = *(HANDLE *)(v2 + 40);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ClientId.UniqueThread = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ProcessHandle = 0LL;
  v16 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
  v13 = v16;
  if ( v16 < 0
    || (Object = 0LL,
        v20 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL),
        v4 = (struct _KPROCESS *)Object,
        v13 = v20,
        ZwClose(ProcessHandle),
        (int)v13 < 0) )
  {
    v19 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(v2 + 40);
    *(_QWORD *)(v19 + 32) = v13;
LABEL_11:
    WdLogEvent5_WdError(v19);
    goto LABEL_12;
  }
  LODWORD(v13) = DxgkpCreateSharedObjectFromHostDesc(v6[335], (const unsigned __int8 *)v2, (struct _LIST_ENTRY **)&v34);
  if ( (int)v13 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v23 + 24) = 12225LL;
    WdLogEvent5_WdError(v23);
    v3 = v34;
    goto LABEL_12;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v4, &ApcState);
  v3 = v34;
  LODWORD(v13) = ObInsertObject(v34, 0LL, *(_DWORD *)(v2 + 48), 0, 0LL, &Handle);
  KeUnstackDetachProcess(&ApcState);
  if ( (int)v13 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v14, v12);
    *(_QWORD *)(v19 + 24) = 12250LL;
    goto LABEL_11;
  }
LABEL_12:
  v43 = *(_QWORD *)(v2 + 32);
  v45 = Handle;
  v38 = 0LL;
  v39 = 0;
  v40 = 1;
  v41 = 1011;
  v42 = v13;
  v44 = 8;
  v24 = DXGGLOBAL::GetGlobal(v14, v12);
  v26 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
          *((DXG_VMBUS_CHANNEL_BASE **)v24 + 183),
          (struct DXGKVMB_COMMAND_BASE *)&v38,
          0x38u,
          v25);
  v29 = v26;
  if ( v26 < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v30 + 24) = v29;
    WdLogEvent5_WdError(v30);
    LODWORD(v13) = -1073741823;
  }
  if ( (int)v13 < 0 )
  {
    if ( Handle )
    {
      ObCloseHandle(Handle, 1);
    }
    else if ( v3 )
    {
      ObfDereferenceObject(v3);
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47, v27);
  return 0;
}
