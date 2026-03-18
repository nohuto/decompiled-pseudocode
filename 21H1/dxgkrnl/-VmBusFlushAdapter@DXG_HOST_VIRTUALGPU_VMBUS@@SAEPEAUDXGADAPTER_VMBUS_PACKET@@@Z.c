/*
 * XREFs of ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023CD30
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E8CC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00DD24C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // r12d
  __int64 v15; // rdx
  unsigned int v16; // edi
  __int64 v17; // r15
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // r12
  _QWORD **v21; // r15
  _QWORD *i; // rbx
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGADAPTER *v25; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v26[8]; // [rsp+40h] [rbp-C0h] BYREF
  DXGPUSHLOCK *v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+50h] [rbp-B0h]
  DXGADAPTER *v29; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v30[144]; // [rsp+70h] [rbp-90h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v27);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v28 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 2847LL;
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_26;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v8 = v7;
  if ( !v7 )
    goto LABEL_4;
  v9 = *((_QWORD *)a1 + 5);
  v25 = 0LL;
  v24 = -1073741811;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v29,
    *(unsigned int *)(v7 + 24),
    *(struct _KTHREAD ***)(v9 + 96),
    &v25,
    1);
  if ( !v25 )
  {
    v11 = WdLogNewEntry5_WdError(v10, 0LL);
    v12 = *(unsigned int *)(v8 + 24);
LABEL_22:
    *(_QWORD *)(v11 + 24) = v12;
    goto LABEL_23;
  }
  if ( (unsigned int)(*(_DWORD *)(v8 + 28) - 1) > 9 )
  {
    v11 = WdLogNewEntry5_WdError(v10, v25);
    v12 = *(int *)(v8 + 28);
    goto LABEL_22;
  }
  if ( *((_QWORD *)v25 + 335) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v25, 0LL);
    v14 = v13 + 2;
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v30, v13 + 2, v13) >= 0 )
    {
      v16 = v14 + 1;
      v17 = *((_QWORD *)a1 + 5);
      v18 = *(_DWORD *)(v8 + 28) - (v14 + 1);
      if ( !v18 )
      {
        v16 = v14;
LABEL_16:
        v20 = v17 + 264;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v17 + 264));
        v21 = (_QWORD **)(v17 + 296);
        for ( i = *v21; i != v21; i = (_QWORD *)*i )
          DXGDEVICE::FlushScheduler(i - 15, v16);
        ExReleasePushLockSharedEx(v20, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_16;
      if ( v19 == 1 )
      {
        v16 = v14 + 2;
        goto LABEL_16;
      }
    }
LABEL_20:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30, v15);
    goto LABEL_24;
  }
  v11 = WdLogNewEntry5_WdError(v10, v25);
  *(_QWORD *)(v11 + 24) = 2870LL;
LABEL_23:
  WdLogEvent5_WdError(v11);
LABEL_24:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v24, 4u);
  if ( v29 )
    DXGADAPTER::ReleaseReferenceNoTracking(v29);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  return v5;
}
