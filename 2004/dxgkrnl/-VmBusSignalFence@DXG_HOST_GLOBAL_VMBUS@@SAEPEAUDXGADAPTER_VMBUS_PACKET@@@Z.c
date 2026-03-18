/*
 * XREFs of ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024EEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F83C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0113088 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C016D720 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSignalFence(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
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
  __int64 v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  PERESOURCE *Global; // rax
  _BYTE v27[40]; // [rsp+20h] [rbp-28h] BYREF
  int v28; // [rsp+58h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v27, *((struct _KTHREAD ***)a1 + 7));
    v6 = *(_DWORD *)(v3 + 28);
    if ( !v6 )
    {
      v7 = *(unsigned int *)(v3 + 24);
      v8 = *((_QWORD *)a1 + 7);
      v9 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 256) )
        goto LABEL_9;
      v10 = *(_QWORD *)(v8 + 240);
      v7 = ((unsigned int)v7 >> 25) & 0x60;
      v8 = *(unsigned int *)(v10 + 16 * v9 + 8);
      if ( (_BYTE)v7 != (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60) || (v8 & 0x2000) != 0 || (v8 & 0x1F) == 0 )
        goto LABEL_9;
      v8 &= 0x1Fu;
      if ( (_BYTE)v8 != 13 )
      {
        v11 = WdLogNewEntry5_WdError(v8, v7);
        *(_QWORD *)(v11 + 24) = 267LL;
        WdLogEvent5_WdError(v11);
LABEL_9:
        v12 = WdLogNewEntry5_WdError(v8, v7);
        v13 = *(unsigned int *)(v3 + 24);
LABEL_24:
        *(_QWORD *)(v12 + 24) = v13;
        WdLogEvent5_WdError(v12);
        v28 = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
LABEL_25:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v28, 4u);
        LOBYTE(v2) = 1;
        return v2;
      }
      v14 = *(_QWORD *)(v10 + 16LL * (unsigned int)v9);
      if ( !v14 || *(_DWORD *)v14 != 11 && *(_DWORD *)v14 != 8 )
        goto LABEL_9;
      v15 = *(volatile signed __int32 **)(v14 + 8);
      if ( !v15 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v8, v7);
        *(_QWORD *)(v16 + 24) = 6424LL;
        WdLogEvent5_WdAssertion(v16);
      }
LABEL_28:
      _InterlockedIncrement(v15 + 6);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
      v28 = DXGSYNCOBJECT::SignalFence((__int64)v15, *(_QWORD *)(v3 + 32), 0, 0);
      if ( v28 < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v23, v22);
        *(_QWORD *)(v24 + 24) = v28;
        WdLogEvent5_WdError(v24);
      }
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v23, v22);
      DXGGLOBAL::DestroySyncObject(Global, (struct DXGSYNCOBJECT *)v15, 0);
      goto LABEL_25;
    }
    if ( v6 != 1 )
    {
      v12 = WdLogNewEntry5_WdError(v5, v4);
      v13 = *(int *)(v3 + 28);
      goto LABEL_24;
    }
    v17 = *(unsigned int *)(v3 + 24);
    v18 = *((_QWORD *)a1 + 7);
    v19 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < *(_DWORD *)(v18 + 256) )
    {
      v20 = *(_QWORD *)(v18 + 240);
      v17 = ((unsigned int)v17 >> 25) & 0x60;
      v18 = *(unsigned int *)(v20 + 16 * v19 + 8);
      if ( (_BYTE)v17 == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60) && (v18 & 0x2000) == 0 && (v18 & 0x1F) != 0 )
      {
        v18 &= 0x1Fu;
        if ( (_BYTE)v18 == 8 )
        {
          v15 = *(volatile signed __int32 **)(v20 + 16LL * (unsigned int)v19);
          if ( v15 )
            goto LABEL_28;
        }
        else
        {
          v21 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v21 + 24) = 267LL;
          WdLogEvent5_WdError(v21);
        }
      }
    }
    v12 = WdLogNewEntry5_WdError(v18, v17);
    v13 = *(unsigned int *)(v3 + 24);
    *(_QWORD *)(v12 + 32) = 6419LL;
    goto LABEL_24;
  }
  return v2;
}
