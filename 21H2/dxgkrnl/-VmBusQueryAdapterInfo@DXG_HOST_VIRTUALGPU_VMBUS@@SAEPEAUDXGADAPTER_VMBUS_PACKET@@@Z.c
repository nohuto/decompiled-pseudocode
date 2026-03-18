/*
 * XREFs of ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0372900
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C664 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  char v4; // r15
  __int64 v5; // r9
  __int64 v6; // r14
  _DWORD *v7; // rdi
  unsigned __int64 v8; // rcx
  UINT v9; // r12d
  __int64 v10; // rax
  int v11; // eax
  UINT PrivateDriverDataSize; // r8d
  void *pPrivateDriverData; // rdx
  struct _D3DKMT_QUERYADAPTERINFO v15; // [rsp+50h] [rbp-30h] BYREF
  char v16[8]; // [rsp+68h] [rbp-18h] BYREF
  DXGPUSHLOCK *v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+78h] [rbp-8h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v17);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v18 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = 0;
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v6 )
      goto LABEL_20;
    memset(&v15, 0, sizeof(v15));
    v7 = 0LL;
    v15.Type = *(_DWORD *)(v6 + 24);
    v8 = *(unsigned int *)(v6 + 28);
    v9 = v8 + 4;
    if ( (_DWORD)v8 )
    {
      if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 32 < v8 || (unsigned int)v8 > 0x20000 )
      {
        WdLogSingleEntry1(2LL, (unsigned int)v8);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid OutputBufferSize",
          *(unsigned int *)(v6 + 28),
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_19:
        v3 = v4;
        goto LABEL_20;
      }
      v15.PrivateDriverDataSize = *(_DWORD *)(v6 + 28);
      v10 = operator new[](v9, 0x4B677844u, 64LL, v5);
      v7 = (_DWORD *)v10;
      if ( !v10 )
      {
        WdLogSingleEntry1(6LL, 4726LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate pPrivateDriverDate",
          4726LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_19;
      }
      v15.pPrivateDriverData = (void *)(v10 + 4);
      memmove((void *)(v10 + 4), (const void *)(v6 + 32), *(unsigned int *)(v6 + 28));
    }
    v11 = DxgkQueryAdapterInfoImpl(&v15, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL));
    if ( *((_DWORD *)a1 + 38) < 0x27u )
    {
      if ( v11 < 0 )
        goto LABEL_17;
      PrivateDriverDataSize = v15.PrivateDriverDataSize;
      pPrivateDriverData = v15.pPrivateDriverData;
    }
    else
    {
      *v7 = v11;
      PrivateDriverDataSize = v9;
      pPrivateDriverData = v7;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), pPrivateDriverData, PrivateDriverDataSize);
    v4 = 1;
LABEL_17:
    if ( v7 )
      operator delete[](v7);
    goto LABEL_19;
  }
  WdLogSingleEntry1(2LL, 4702LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4702LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_20:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v3;
}
