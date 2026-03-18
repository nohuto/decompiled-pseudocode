/*
 * XREFs of ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036C5F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C030BD88 (-ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C03627DC (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C037E984 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusDuplicateHandle(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rsi
  PVOID v2; // r14
  struct _KPROCESS *v3; // r15
  DXGGLOBAL *Global; // rax
  struct ADAPTER_RENDER **v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ebx
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  __int64 v13; // r9
  struct DXG_VMBUS_CHANNEL_BASE *v14; // rbx
  struct DXGKVMB_COMMAND_BASE *v15; // rcx
  void *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rbx
  struct _MDL *Object; // [rsp+28h] [rbp-E0h]
  PVOID v22; // [rsp+58h] [rbp-B0h] BYREF
  void *ProcessHandle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v24; // [rsp+68h] [rbp-A0h] BYREF
  void *Handle; // [rsp+70h] [rbp-98h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+78h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  struct DXGKVMB_COMMAND_BASE *v28[2]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v29; // [rsp+C8h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v31[144]; // [rsp+208h] [rbp+100h] BYREF

  v1 = *((_QWORD *)a1 + 17);
  Handle = 0LL;
  v2 = 0LL;
  v24 = 0LL;
  v3 = 0LL;
  v22 = 0LL;
  Global = DXGGLOBAL_GetGlobal();
  v5 = (struct ADAPTER_RENDER **)DXGGLOBAL::ReferenceAdapterByHostLuid(
                                   Global,
                                   *(struct _LUID *)(v1 + 24),
                                   (unsigned __int64 *)&v22);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, (struct DXGADAPTER *const)v5, 0LL);
  if ( v5
    && (v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31, 0LL),
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v5),
        v10 >= 0) )
  {
    ClientId.UniqueProcess = *(HANDLE *)(v1 + 40);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ClientId.UniqueThread = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ProcessHandle = 0LL;
    v11 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v22 = 0LL;
      v12 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &v22, 0LL);
      v3 = (struct _KPROCESS *)v22;
      v9 = v12;
      ZwClose(ProcessHandle);
      if ( (int)v9 >= 0 )
      {
        LODWORD(v9) = DxgkpCreateSharedObjectFromHostDesc(
                        v5[350],
                        (const unsigned __int8 *)v1,
                        (struct _LIST_ENTRY **)&v24,
                        v13);
        if ( (int)v9 >= 0 )
        {
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(v3, &ApcState);
          LODWORD(v9) = ObInsertObject(v24, 0LL, *(_DWORD *)(v1 + 48), 0, 0LL, &Handle);
          KeUnstackDetachProcess(&ApcState);
          if ( (int)v9 < 0 )
          {
            WdLogSingleEntry1(2LL, 14131LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to create nt handle in guest process",
              14131LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, 14099LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to create shared resource for guest",
            14099LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v2 = v24;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 40), v9);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to reference process by handle for process id 0x%I64x, Status=0x%.8x",
          *(_QWORD *)(v1 + 40),
          v9,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 40), v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to open process handle for process id 0x%I64x, Status=0x%.8x",
        *(_QWORD *)(v1 + 40),
        v9,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdTrace(v7, v6);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v8 + 24) = *(int *)(v1 + 28);
    *(_QWORD *)(v8 + 32) = *(unsigned int *)(v1 + 24);
  }
  while ( 1 )
  {
    v14 = (struct DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 218);
    *(_OWORD *)v28 = 0LL;
    v29 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v28, v14, 0x38u, 0LL, 0LL, 0LL);
    v15 = v28[0];
    if ( v28[0] )
      break;
    LODWORD(v9) = -1073741801;
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v28);
  }
  v16 = Handle;
  v17 = *(_QWORD *)(v1 + 32);
  *((_BYTE *)v28[0] + 12) = 1;
  *((_DWORD *)v15 + 3) &= 0x1FFu;
  *((_QWORD *)v15 + 4) = v17;
  *((_QWORD *)v15 + 6) = v16;
  *(_QWORD *)v15 = 0LL;
  *((_DWORD *)v15 + 2) = 0;
  *((_QWORD *)v15 + 2) = 1011LL;
  *((_DWORD *)v15 + 6) = v9;
  *((_DWORD *)v15 + 10) = 8;
  v18 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v14, (unsigned __int8 *)v28[1], v28[0], v29, Object);
  if ( v18 >= 0 )
  {
    if ( (int)v9 >= 0 )
      goto LABEL_21;
  }
  else
  {
    v19 = v18;
    WdLogSingleEntry1(2LL, v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendCompleteTransaction failed: 0x%I64x",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( Handle )
  {
    ObCloseHandle(Handle, 1);
  }
  else if ( v2 )
  {
    ObfDereferenceObject(v2);
  }
LABEL_21:
  if ( v3 )
    ObfDereferenceObject(v3);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v28);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
  return 0;
}
