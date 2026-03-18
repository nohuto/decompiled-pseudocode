/*
 * XREFs of ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0249418
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010D0C0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C02397C4 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C0290A60 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        unsigned int a4,
        struct DXGSYNCOBJECT *a5,
        struct DXGDEVICESYNCOBJECT *a6,
        unsigned int a7,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a8)
{
  int v10; // r9d
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _MDL *v22; // [rsp+28h] [rbp-58h]
  unsigned int v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  int v25; // [rsp+40h] [rbp-40h]
  int v26; // [rsp+44h] [rbp-3Ch]
  int v27; // [rsp+48h] [rbp-38h]
  int v28; // [rsp+50h] [rbp-30h]
  int v29; // [rsp+54h] [rbp-2Ch]
  unsigned int v30; // [rsp+58h] [rbp-28h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v31; // [rsp+5Ch] [rbp-24h]
  unsigned int v32[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h]
  unsigned __int64 v34; // [rsp+70h] [rbp-10h]

  v10 = *((_DWORD *)a5 + 19);
  if ( a3 )
    v11 = *((_DWORD *)a3 + 110);
  else
    v11 = 0;
  v12 = *((_DWORD *)a2 + 106);
  v24 = 0LL;
  v25 = v12;
  v30 = a7;
  v31 = a8.0;
  v28 = v11;
  v29 = v10;
  v26 = 1;
  v27 = 1002;
  v23 = 24;
  LODWORD(v15) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                   this,
                   (struct DXGKVMB_COMMAND_BASE *)&v24,
                   0x28u,
                   v32,
                   &v23,
                   v22);
  if ( (int)v15 < 0 )
    goto LABEL_12;
  LODWORD(v15) = -1073741823;
  if ( v23 >= 0x18 )
    LODWORD(v15) = v32[1];
  if ( (int)v15 < 0 )
  {
LABEL_12:
    v20 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v20 + 24) = (int)v15;
    goto LABEL_13;
  }
  if ( a6 )
  {
    v16 = v34;
    *((_DWORD *)a6 + 11) = v32[0];
    *((_QWORD *)a6 + 6) = v33;
    v17 = MapGuestFenceCpuVaToHost(v16, (void **)a6 + 7, (unsigned __int64 *)a6 + 10, (unsigned int *)a6 + 22);
    v15 = v17;
    if ( v17 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v20 + 24) = v15;
      *(_QWORD *)(v20 + 32) = 11631LL;
LABEL_13:
      WdLogEvent5_WdError(v20);
    }
  }
  else
  {
    DXGSYNCOBJECT::SetHostHandle(a5, a4, v32[0]);
  }
  return (unsigned int)v15;
}
