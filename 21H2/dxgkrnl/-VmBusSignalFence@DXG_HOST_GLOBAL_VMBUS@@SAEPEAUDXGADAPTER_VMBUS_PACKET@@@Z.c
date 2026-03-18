/*
 * XREFs of ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380E20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C6C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0341570 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C0364C78 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSignalFence(struct DXGPROCESS **a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  struct DXGPROCESS *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // r8d
  const wchar_t *v10; // r9
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  struct DXGPROCESS *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r8d
  int v18; // eax
  PERESOURCE *Global; // rax
  __int64 v21; // [rsp+28h] [rbp-48h]
  _BYTE v22[32]; // [rsp+50h] [rbp-20h] BYREF
  int v23; // [rsp+98h] [rbp+28h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v22, a1[12]);
  v4 = *(_DWORD *)(v3 + 28);
  if ( !v4 )
  {
    v5 = *(unsigned int *)(v3 + 24);
    v6 = a1[12];
    v7 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v7 >= *((_DWORD *)v6 + 74) )
      goto LABEL_9;
    v8 = *((_QWORD *)v6 + 35);
    v9 = *(_DWORD *)(v8 + 16 * v7 + 8);
    if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60)
      || (v9 & 0x2000) != 0
      || (v9 & 0x1F) == 0 )
    {
      goto LABEL_9;
    }
    if ( (v9 & 0x1F) != 0xD )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v5 = *(unsigned int *)(v3 + 24);
LABEL_9:
      WdLogSingleEntry1(2LL, v5);
      v10 = L"Invalid shared object handle: 0x%I64x";
      v21 = 0LL;
LABEL_24:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, *(unsigned int *)(v3 + 24), v21, 0LL, 0LL, 0LL);
      goto LABEL_25;
    }
    v11 = *(_QWORD *)(v8 + 16LL * (unsigned int)v7);
    if ( !v11 || *(_DWORD *)v11 != 11 && *(_DWORD *)v11 != 8 )
      goto LABEL_9;
    v12 = *(volatile signed __int32 **)(v11 + 8);
    if ( !v12 )
    {
      WdLogSingleEntry1(1LL, 7409LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject", 7409LL, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_31:
    _InterlockedIncrement(v12 + 6);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    v18 = DXGSYNCOBJECT::SignalFence((__int64)v12, *(_QWORD *)(v3 + 32), 0, 0);
    v23 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry1(2LL, v18);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"SignalFence failed: 0x%I64x", v23, 0LL, 0LL, 0LL, 0LL);
    }
    Global = (PERESOURCE *)DXGGLOBAL_GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, (struct DXGSYNCOBJECT *)v12, 0);
    goto LABEL_26;
  }
  if ( v4 == 1 )
  {
    v13 = *(unsigned int *)(v3 + 24);
    v14 = a1[12];
    v15 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *((_DWORD *)v14 + 74) )
    {
      v16 = *((_QWORD *)v14 + 35);
      v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
      if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
        && (v17 & 0x2000) == 0
        && (v17 & 0x1F) != 0 )
      {
        if ( (v17 & 0x1F) == 8 )
        {
          v12 = *(volatile signed __int32 **)(v16 + 16LL * (unsigned int)v15);
          if ( v12 )
            goto LABEL_31;
        }
        else
        {
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          v13 = *(unsigned int *)(v3 + 24);
        }
      }
    }
    WdLogSingleEntry2(2LL, v13, 7404LL);
    v10 = L"Invalid sync object handle: 0x%I64x";
    v21 = 7404LL;
    goto LABEL_24;
  }
  WdLogSingleEntry1(2LL, *(int *)(v3 + 28));
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid handle type: 0x%I64x",
    *(int *)(v3 + 28),
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_25:
  v23 = -1073741811;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
LABEL_26:
  if ( v23 < 0 )
    HandleAsyncCommandError((__int64 *)a1, v23, 0, 3);
  VmBusCompletePacket(a1[16], &v23, 4u);
  LOBYTE(v2) = 1;
  return v2;
}
