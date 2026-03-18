/*
 * XREFs of ?VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373550
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C694 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkReclaimAllocations2 @ 0x1C01CC650 (DxgkReclaimAllocations2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReclaimAllocations(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // rbx
  __int64 v5; // r9
  __int128 *v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // r8
  unsigned int v9; // r12d
  unsigned __int64 v10; // rdx
  int v11; // eax
  struct _D3DKMT_RECLAIMALLOCATIONS2 v13; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v14[8]; // [rsp+78h] [rbp-1h] BYREF
  DXGPUSHLOCK *v15; // [rsp+80h] [rbp+7h]
  int v16; // [rsp+88h] [rbp+Fh]
  __int128 v17; // [rsp+90h] [rbp+17h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v15);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v16 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( v4 )
    {
      v6 = &v17;
      LODWORD(v7) = -1073741811;
      v17 = 0LL;
      v8 = *(unsigned int *)(v4 + 32);
      v9 = 16;
      memset(&v13, 0, sizeof(v13));
      if ( (_DWORD)v8
        && (v10 = ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) % v8,
            ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v8 >= 4) )
      {
        if ( !*(_BYTE *)(v4 + 37)
          || (unsigned int)v8 <= 1
          || (v9 = 4 * v8 + 12, (v6 = (__int128 *)operator new[](v9, 0x4B677844u, 64LL, v5)) != 0LL) )
        {
          *(_QWORD *)&v13.hPagingQueue = *(_QWORD *)(v4 + 28);
          if ( *(_BYTE *)(v4 + 36) )
            v13.pResources = (D3DKMT_HANDLE *)(v4 + 40);
          else
            v13.HandleList = (const D3DKMT_HANDLE *)(v4 + 40);
          if ( *(_BYTE *)(v4 + 37) )
            v13.pDiscarded = (BOOL *)v6 + 3;
          v11 = DxgkReclaimAllocations2(&v13, v10, v8);
          v7 = v11;
          if ( v11 < 0 )
          {
            WdLogSingleEntry1(2LL, v11);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DxgkReclaimAllocations failed: 0x%I64x",
              v7,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          WdLogSingleEntry1(6LL, 1638LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for reclaim results",
            1638LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v7) = -1073741801;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 1628LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size", 1628LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_QWORD *)v6 = v13.PagingFenceValue;
      *((_DWORD *)v6 + 2) = v7;
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v6, v9);
      if ( v6 != &v17 )
        operator delete[](v6);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 1615LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1615LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v3;
}
