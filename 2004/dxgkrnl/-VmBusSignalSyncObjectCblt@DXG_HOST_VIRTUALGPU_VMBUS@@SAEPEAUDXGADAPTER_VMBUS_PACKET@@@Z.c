/*
 * XREFs of ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9F60
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00043E4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007000 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B104 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0039D88 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F7C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D6EA0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C00D6EC4 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D7070 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FAFA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026EE9C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0291D9C (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObjectCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // di
  __int64 v5; // rax
  unsigned int *v6; // rax
  __int64 v7; // rdx
  unsigned int *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // r13
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r12d
  unsigned int v18; // r14d
  __int64 Pool2; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  const unsigned int *v25; // r15
  const UINT64 *v26; // r14
  char v27; // r12
  __int64 v28; // r13
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // r9d
  unsigned int v34; // r11d
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // r15
  UINT v45; // eax
  struct _KTHREAD **v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct DXGDEVICE *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // r9
  int v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v54; // [rsp+64h] [rbp-9Ch]
  struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *v55; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v56[8]; // [rsp+70h] [rbp-90h] BYREF
  struct DXGDEVICE *v57[2]; // [rsp+78h] [rbp-88h] BYREF
  _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v58; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v59[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v60[160]; // [rsp+C0h] [rbp-40h] BYREF

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v59,
    (struct _KTHREAD **)(*(_QWORD *)(v1 + 0x50) + 232LL));
  v4 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 80) + 165LL) )
  {
    v53 = -1073741811;
    v54 = 0;
    v6 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((v1 + 40) & -(__int64)(v1 != 0));
    v8 = v6;
    if ( !v6 )
      goto LABEL_65;
    v55 = 0LL;
    v9 = v6[6];
    if ( !(_DWORD)v9 && (v6[7] & 2) == 0 || (unsigned int)v9 > 0xFFFF )
    {
      v10 = WdLogNewEntry5_WdError(v9, v7);
      v11 = v8[6];
LABEL_59:
      *(_QWORD *)(v10 + 24) = v11;
      goto LABEL_60;
    }
    v12 = v6[12];
    if ( !(_DWORD)v12 || (v6[7] & 2) != 0 )
    {
      v15 = v6[8];
      v13 = 0;
      if ( !v15 || v15 > 0xFFFF )
      {
        v10 = WdLogNewEntry5_WdError(v9, v12);
        v11 = v8[8];
        goto LABEL_59;
      }
    }
    else
    {
      v13 = 1;
      if ( v6[8] )
      {
        v14 = WdLogNewEntry5_WdError(v9, v12);
        *(_QWORD *)(v14 + 24) = 1082LL;
LABEL_12:
        v10 = v14;
LABEL_60:
        WdLogEvent5_WdError(v10);
        goto LABEL_61;
      }
      v54 = v6[12];
      v15 = 0;
    }
    v16 = *(unsigned int *)(v1 + 128);
    v17 = 8 * v9;
    v18 = 4 * (v9 + v15) + 56;
    if ( (unsigned int)v16 < v18 )
      goto LABEL_61;
    if ( (v8[7] & 2) != 0 )
    {
      if ( !*((_QWORD *)v8 + 6) )
      {
        v14 = WdLogNewEntry5_WdError(v9, v16);
        *(_QWORD *)(v14 + 24) = 1108LL;
        goto LABEL_12;
      }
      Pool2 = ExAllocatePool2(64LL, 56LL, 1265072196LL);
      v55 = (struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)Pool2;
      if ( !Pool2 )
      {
        v23 = WdLogNewEntry5_WdLowResource(v20, 0LL, v21, v22);
        *(_QWORD *)(v23 + 24) = 1114LL;
        WdLogEvent5_WdLowResource(v23);
        v53 = -1073741801;
        goto LABEL_62;
      }
      *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(*(_QWORD *)(v1 + 80) + 104LL) + 128LL;
      *((_BYTE *)v55 + 16) = 1;
      *((_BYTE *)v55 + 19) = 1;
      *((_QWORD *)v55 + 1) = *((_QWORD *)v8 + 6);
      DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::AcquireReference(v55);
      v9 = v8[6];
      LODWORD(v16) = *(_DWORD *)(v1 + 128);
    }
    v24 = (unsigned int)v16 - v18;
    v25 = &v8[(unsigned int)v9 + 14];
    if ( (unsigned int)v24 >= v17 )
      v26 = (const UINT64 *)&v25[v8[8]];
    else
      v26 = 0LL;
    v27 = 0;
    if ( v13 )
    {
      v44 = v8[12];
      v58.ObjectCount = v8[6];
      v45 = v8[7];
      v58.ObjectHandleArray = v8 + 14;
      v46 = *(struct _KTHREAD ***)(v1 + 88);
      v58.Flags.Value = v45;
      *((_DWORD *)&v58.Flags + 1) = 0;
      v58.hDevice = v44;
      v58.FenceValueArray = v26;
      v57[0] = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v56, (unsigned int)v44, v46, v57);
      v49 = v57[0];
      if ( v57[0] )
      {
        DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v57, v57[0]);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v60, (__int64)v49, 0, v51, 0);
        v53 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v60, 0LL);
        if ( v53 >= 0 )
          v53 = SignalSynchronizationObjectFromCpu(&v58, *(struct DXGPROCESS **)(v1 + 88), v49);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v60);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v57);
      }
      else
      {
        v50 = WdLogNewEntry5_WdError(v48, v47);
        *(_QWORD *)(v50 + 24) = v44;
        *(_QWORD *)(v50 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v50);
      }
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v56);
LABEL_61:
      if ( v53 >= 0 )
      {
LABEL_64:
        VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), &v53, 4u);
        v4 = 1;
        goto LABEL_65;
      }
LABEL_62:
      HandleAsyncCommandError((_QWORD *)v1, (unsigned int)v53, v54, 0);
      if ( v55 )
        DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::ReleaseReference(v55);
      goto LABEL_64;
    }
    v28 = *(_QWORD *)(v1 + 88);
    if ( !v28 )
    {
      v29 = WdLogNewEntry5_WdError(v9, v24);
      *(_QWORD *)(v29 + 24) = PsGetCurrentProcess();
      v30 = v29;
LABEL_29:
      WdLogEvent5_WdError(v30);
      goto LABEL_62;
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)&v58,
      *(struct _KTHREAD ***)(v1 + 88));
    v33 = *v25;
    v34 = *(_DWORD *)(v28 + 256);
    v35 = (*v25 >> 6) & 0xFFFFFF;
    if ( v35 < v34 )
    {
      v57[0] = *(struct DXGDEVICE **)(v28 + 240);
      v31 = *((unsigned int *)v57[0] + 4 * v35 + 2);
      v32 = (v33 >> 25) & 0x60;
      if ( ((v33 >> 25) & 0x60) == (*((_BYTE *)v57[0] + 16 * v35 + 8) & 0x60)
        && (v31 & 0x2000) == 0
        && (v31 & 0x1F) != 0 )
      {
        v31 &= 0x1Fu;
        if ( (_BYTE)v31 == 7 )
        {
          v36 = *((_QWORD *)v57[0] + 2 * v35);
          if ( v36 )
          {
            v54 = *(_DWORD *)(*(_QWORD *)(v36 + 16) + 436LL);
            goto LABEL_46;
          }
        }
      }
      if ( v35 < v34 )
      {
        v31 = v35;
        v37 = *(_QWORD *)(v28 + 240);
        v32 = *(unsigned int *)(v37 + 16LL * (unsigned int)v31 + 8);
        if ( ((v33 >> 25) & 0x60) == (*(_BYTE *)(v37 + 16LL * (unsigned int)v31 + 8) & 0x60)
          && (v32 & 0x2000) == 0
          && (v32 & 0x1F) != 0 )
        {
          v31 *= 2LL;
          v32 &= 0x1Fu;
          if ( (_BYTE)v32 == 15 )
          {
            v40 = *(_QWORD *)(v37 + 8 * v31);
            if ( v40 )
            {
              v27 = 1;
              v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 16) + 16LL) + 436LL);
LABEL_46:
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v58);
              if ( v27 )
              {
                if ( !v26 )
                {
                  v30 = WdLogNewEntry5_WdError(v42, v41);
                  *(_QWORD *)(v30 + 24) = 1200LL;
                  goto LABEL_29;
                }
                v43 = SubmitSignalSyncObjectsToHwQueue(
                        v8[6],
                        v8 + 14,
                        (struct _D3DDDICB_SIGNALFLAGS)v8[7],
                        v8[8],
                        v25,
                        v26,
                        *(struct DXGPROCESS **)(v1 + 88),
                        0,
                        0);
              }
              else
              {
                v43 = SignalSynchronizationObjectInternal(
                        v8[6],
                        v8 + 14,
                        (struct _D3DDDICB_SIGNALFLAGS)v8[7],
                        v8[8],
                        v25,
                        v26,
                        *((_QWORD *)v8 + 5),
                        (void *const *)&v55,
                        *(struct DXGPROCESS **)(v1 + 88),
                        0,
                        0);
              }
              v53 = v43;
              goto LABEL_61;
            }
          }
          else
          {
            v38 = WdLogNewEntry5_WdError(v32, v31);
            *(_QWORD *)(v38 + 24) = 267LL;
            WdLogEvent5_WdError(v38);
          }
        }
      }
    }
    v39 = WdLogNewEntry5_WdError(v32, v31);
    *(_QWORD *)(v39 + 24) = *v25;
    WdLogEvent5_WdError(v39);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v58);
    goto LABEL_61;
  }
  v5 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v5 + 24) = 1065LL;
  WdLogEvent5_WdError(v5);
LABEL_65:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v59);
  return v4;
}
