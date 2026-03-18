/*
 * XREFs of ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C024894C
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C00F76C0 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0284E64 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_GETDEVICESTATE *a4)
{
  unsigned int HostProcess; // eax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  struct _MDL *v18; // [rsp+28h] [rbp-81h]
  unsigned int v19[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-61h]
  int v22; // [rsp+4Ch] [rbp-5Dh]
  int v23; // [rsp+50h] [rbp-59h]
  __int128 v24; // [rsp+58h] [rbp-51h]
  __int128 v25; // [rsp+68h] [rbp-41h]
  __int128 v26; // [rsp+78h] [rbp-31h]
  __int64 v27; // [rsp+88h] [rbp-21h]
  _OWORD v28[3]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+17h]
  int v30; // [rsp+C8h] [rbp+1Fh]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = *(_OWORD *)&a4->hDevice;
  v20 = 0LL;
  v9 = *(_OWORD *)(&a4->PresentQueueState + 1);
  v22 = 0;
  v24 = v8;
  v21 = HostProcess;
  v10 = *(_OWORD *)(&a4->PresentQueueState + 3);
  LODWORD(v24) = *((_DWORD *)a3 + 110);
  v25 = v9;
  v23 = 28;
  *(_QWORD *)&v9 = *((_QWORD *)&a4->PresentQueueState + 5);
  v26 = v10;
  v19[0] = 64;
  v27 = v9;
  v13 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v20, 0x50u, v28, v19, v18);
  if ( v13 < 0 )
    goto LABEL_4;
  v13 = -1073741823;
  if ( v19[0] < 0x40 )
    goto LABEL_4;
  v14 = v28[1];
  v13 = v30;
  *(_OWORD *)&a4->hDevice = v28[0];
  v15 = v28[2];
  *(_OWORD *)(&a4->PresentQueueState + 1) = v14;
  *(_QWORD *)&v14 = v29;
  *(_OWORD *)(&a4->PresentQueueState + 3) = v15;
  *((_QWORD *)&a4->PresentQueueState + 5) = v14;
  if ( v13 < 0 )
  {
LABEL_4:
    v16 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v16 + 24) = v13;
    WdLogEvent5_WdError(v16);
    v13 = 0;
    a4->PresentState.VidPnSourceId = 4;
  }
  return (unsigned int)v13;
}
