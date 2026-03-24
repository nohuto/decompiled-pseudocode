/*
 * XREFs of ?VmBusSignalFenceCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DAB90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0026754 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004064C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C00D7F94 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C00DCB58 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0171FD0 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSignalFenceCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  DXGSYNCOBJECT *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  DXGGLOBAL *Global; // rax
  _BYTE v25[32]; // [rsp+20h] [rbp-20h] BYREF
  int v26; // [rsp+50h] [rbp+10h] BYREF

  v1 = ((unsigned __int64)a1 - 40) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64);
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((v1 + 40) & -(__int64)(v1 != 0));
  v3 = v2;
  if ( !v2 )
    return v2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v25, *(struct _KTHREAD ***)(v1 + 96));
  v6 = *(_DWORD *)(v3 + 28);
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v12 = WdLogNewEntry5_WdError(v5, v4);
      v13 = *(int *)(v3 + 28);
      goto LABEL_24;
    }
    v7 = *(unsigned int *)(v3 + 24);
    v17 = *(_QWORD *)(v1 + 96);
    v18 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < *(_DWORD *)(v17 + 256) )
    {
      v10 = *(_QWORD *)(v17 + 240);
      v7 = ((unsigned int)v7 >> 25) & 0x60;
      v17 = *(unsigned int *)(v10 + 16 * v18 + 8);
      if ( (_BYTE)v7 == (*(_BYTE *)(v10 + 16 * v18 + 8) & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
      {
        v17 &= 0x1Fu;
        if ( (_BYTE)v17 == 8 )
        {
          v15 = *(DXGSYNCOBJECT **)(v10 + 16LL * (unsigned int)v18);
          if ( v15 )
            goto LABEL_30;
        }
        else
        {
          v19 = WdLogNewEntry5_WdError(v17, v7);
          *(_QWORD *)(v19 + 24) = 316LL;
          WdLogEvent5_WdError(v19);
        }
      }
    }
    v12 = WdLogNewEntry5_WdError(v17, v7);
    v13 = *(unsigned int *)(v3 + 24);
    *(_QWORD *)(v12 + 32) = 2447LL;
    goto LABEL_24;
  }
  v7 = *(unsigned int *)(v3 + 24);
  v8 = *(_QWORD *)(v1 + 96);
  v9 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 256) )
    goto LABEL_9;
  v10 = *(_QWORD *)(v8 + 240);
  v7 = ((unsigned int)v7 >> 25) & 0x60;
  v8 = *(unsigned int *)(v10 + 16 * v9 + 8);
  if ( (_BYTE)v7 != (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60) || (v8 & 0x2000) != 0 || (v8 & 0x1F) == 0 )
    goto LABEL_9;
  v8 &= 0x1Fu;
  if ( (_BYTE)v8 == 13 )
  {
    v14 = *(_QWORD *)(v10 + 16LL * (unsigned int)v9);
    if ( !v14 || *(_DWORD *)v14 != 11 && *(_DWORD *)v14 != 8 )
      goto LABEL_9;
    v15 = *(DXGSYNCOBJECT **)(v14 + 8);
    if ( !v15 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v16 + 24) = 2452LL;
      WdLogEvent5_WdAssertion(v16);
    }
LABEL_30:
    DXGSYNCOBJECT::AddReference(v15, v7, v10);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
    v26 = DXGSYNCOBJECT::SignalFence(v15, *(_QWORD *)(v3 + 32), 0LL, 0LL);
    if ( v26 < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v22 + 24) = v26;
      WdLogEvent5_WdError(v22);
    }
    Global = DXGGLOBAL::GetGlobal(v21, v20);
    DXGGLOBAL::DestroySyncObject(Global, v15, 0, 0);
    goto LABEL_25;
  }
  v11 = WdLogNewEntry5_WdError(v8, v7);
  *(_QWORD *)(v11 + 24) = 316LL;
  WdLogEvent5_WdError(v11);
LABEL_9:
  v12 = WdLogNewEntry5_WdError(v8, v7);
  v13 = *(unsigned int *)(v3 + 24);
LABEL_24:
  *(_QWORD *)(v12 + 24) = v13;
  WdLogEvent5_WdError(v12);
  v26 = -1073741811;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
LABEL_25:
  if ( v26 < 0 )
    HandleAsyncCommandError((_QWORD *)v1, (unsigned int)v26, 0, 3);
  VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), &v26, 4u);
  LOBYTE(v2) = 1;
  return v2;
}
