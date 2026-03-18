/*
 * XREFs of ?VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02418E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E8A4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkReclaimAllocations2 @ 0x1C010EE80 (DxgkReclaimAllocations2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReclaimAllocations(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  BOOL *v11; // rsi
  unsigned __int64 v12; // r8
  __int64 v13; // r14
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _D3DKMT_RECLAIMALLOCATIONS2 v23; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-38h] BYREF
  DXGPUSHLOCK *v25; // [rsp+50h] [rbp-30h]
  int v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+60h] [rbp-20h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v25);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v26 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 1256LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_22;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
  v10 = v7;
  if ( !v7 )
    goto LABEL_22;
  v11 = (BOOL *)&v27;
  v27 = 0LL;
  v12 = *(unsigned int *)(v7 + 32);
  LODWORD(v13) = -1073741811;
  v14 = 16;
  memset(&v23.pResources, 0, 32);
  if ( !(_DWORD)v12
    || (v8 = ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) % v12,
        ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) / v12 < 4) )
  {
    v21 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v21 + 24) = 1269LL;
LABEL_18:
    WdLogEvent5_WdError(v21);
    goto LABEL_19;
  }
  if ( !*(_BYTE *)(v7 + 37)
    || (unsigned int)v12 <= 1
    || (v14 = 4 * v12 + 12, (v11 = (BOOL *)operator new(v14, 0x4B677844u, 1, (POOL_TYPE)512)) != 0LL) )
  {
    v23.hPagingQueue = *(_DWORD *)(v10 + 28);
    v23.NumAllocations = *(_DWORD *)(v10 + 32);
    if ( *(_BYTE *)(v10 + 36) )
      v23.pResources = (D3DKMT_HANDLE *)(v10 + 40);
    else
      v23.HandleList = (const D3DKMT_HANDLE *)(v10 + 40);
    if ( *(_BYTE *)(v10 + 37) )
      v23.pDiscarded = v11 + 3;
    v18 = DxgkReclaimAllocations2(&v23, v8, v12);
    v13 = v18;
    if ( v18 >= 0 )
      goto LABEL_19;
    v21 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v21 + 24) = v13;
    goto LABEL_18;
  }
  v17 = WdLogNewEntry5_WdLowResource(v15, v8, v12, v16);
  *(_QWORD *)(v17 + 24) = 1279LL;
  WdLogEvent5_WdLowResource(v17);
  LODWORD(v13) = -1073741801;
LABEL_19:
  v11[2] = v13;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v11, v14);
  if ( v11 != (BOOL *)&v27 )
    operator delete[](v11);
  v5 = 1;
LABEL_22:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return v5;
}
