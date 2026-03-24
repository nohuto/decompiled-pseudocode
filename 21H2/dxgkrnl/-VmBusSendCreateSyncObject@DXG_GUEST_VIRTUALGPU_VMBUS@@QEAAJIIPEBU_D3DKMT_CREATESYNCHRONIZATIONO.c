/*
 * XREFs of ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C0247598
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010E7F8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024CF2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
        DXG_VMBUS_CHANNEL_BASE *a1,
        int a2,
        int a3,
        __int128 *a4,
        int a5,
        _OWORD *a6)
{
  __int128 v6; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  __int64 result; // rax
  __int128 v17; // xmm1
  __int64 v18; // rax
  struct _MDL *v19; // [rsp+28h] [rbp-81h]
  unsigned int v20[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v21; // [rsp+40h] [rbp-69h] BYREF
  int v22; // [rsp+48h] [rbp-61h]
  int v23; // [rsp+4Ch] [rbp-5Dh]
  int v24; // [rsp+50h] [rbp-59h]
  __int128 v25; // [rsp+58h] [rbp-51h]
  __int128 v26; // [rsp+68h] [rbp-41h]
  __int128 v27; // [rsp+78h] [rbp-31h]
  __int128 v28; // [rsp+88h] [rbp-21h]
  __int128 v29; // [rsp+98h] [rbp-11h]
  __int128 v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+B8h] [rbp+Fh]
  _OWORD v32[2]; // [rsp+C0h] [rbp+17h] BYREF

  v6 = *a4;
  v8 = a4[1];
  v21 = 0LL;
  v23 = 0;
  v25 = v6;
  v31 = a5;
  v9 = a4[2];
  v22 = a2;
  v26 = v8;
  LODWORD(v25) = a3;
  v10 = a4[3];
  v24 = 8;
  v27 = v9;
  v20[0] = 32;
  v11 = a4[4];
  v28 = v10;
  v12 = a4[5];
  v29 = v11;
  v30 = v12;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(a1, (struct DXGKVMB_COMMAND_BASE *)&v21, 0x80u, v32, v20, v19) < 0
    || v20[0] < 0x20
    || (!a3 ? (v15 = DWORD1(v32[0]) == 0) : (v15 = LODWORD(v32[0]) == 0), v15) )
  {
    v18 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v18 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v18);
    return 3221225473LL;
  }
  else
  {
    result = 0LL;
    v17 = v32[1];
    *a6 = v32[0];
    a6[1] = v17;
  }
  return result;
}
