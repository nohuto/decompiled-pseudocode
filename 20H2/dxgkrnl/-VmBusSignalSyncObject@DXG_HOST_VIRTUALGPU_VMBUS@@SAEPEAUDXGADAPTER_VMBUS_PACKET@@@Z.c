/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024E3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007000 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024978 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F674 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F9F10 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026DEBC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0290DBC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  unsigned int *v7; // rax
  __int64 v8; // rdx
  unsigned int *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // r13
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r14d
  _QWORD *PoolWithTag; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int *v25; // r15
  unsigned __int64 *v26; // r14
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // r9d
  unsigned int v35; // r11d
  unsigned int v36; // r8d
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // r15
  UINT v45; // eax
  struct _KTHREAD **v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct DXGDEVICE *v49; // rbx
  __int64 v50; // rax
  struct DXGDEVICE *v51; // rax
  __int64 v52; // r9
  char v54; // [rsp+68h] [rbp-A0h]
  int v55; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct DXGDEVICE *v56; // [rsp+70h] [rbp-98h] BYREF
  struct DXGDEVICE *v57; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  __int64 v59; // [rsp+88h] [rbp-80h] BYREF
  char v60; // [rsp+90h] [rbp-78h]
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v61; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v62[8]; // [rsp+B8h] [rbp-50h] BYREF
  DXGPUSHLOCK *v63; // [rsp+C0h] [rbp-48h]
  int v64; // [rsp+C8h] [rbp-40h]
  _BYTE v65[24]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v66[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v67[64]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v68[88]; // [rsp+130h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v63);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v64 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v55 = -1073741811;
    v7 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v9 = v7;
    if ( !v7 )
      goto LABEL_74;
    P = 0LL;
    v10 = v7[6];
    if ( !(_DWORD)v10 && (v7[7] & 2) == 0 || (v8 = 0xFFFFLL, (unsigned int)v10 > 0xFFFF) )
    {
      v11 = WdLogNewEntry5_WdError(v10, v8);
      v12 = v9[6];
LABEL_68:
      *(_QWORD *)(v11 + 24) = v12;
      goto LABEL_69;
    }
    if ( !v7[12] || (v7[7] & 2) != 0 )
    {
      v15 = v7[8];
      v13 = 0;
      if ( !v15 || v15 > 0xFFFF )
      {
        v11 = WdLogNewEntry5_WdError(v10, 0xFFFFLL);
        v12 = v9[8];
        goto LABEL_68;
      }
    }
    else
    {
      v13 = 1;
      if ( v7[8] )
      {
        v14 = WdLogNewEntry5_WdError(v10, 0xFFFFLL);
        *(_QWORD *)(v14 + 24) = 3439LL;
LABEL_12:
        v11 = v14;
LABEL_69:
        WdLogEvent5_WdError(v11);
        goto LABEL_70;
      }
      v15 = 0;
    }
    LODWORD(v56) = 8 * v10;
    v16 = *((unsigned int *)a1 + 22);
    v17 = 4 * (v10 + v15) + 56;
    if ( (unsigned int)v16 < v17 )
      goto LABEL_70;
    if ( (v9[7] & 2) != 0 )
    {
      if ( !*((_QWORD *)v9 + 6) )
      {
        v14 = WdLogNewEntry5_WdError(v10, v16);
        *(_QWORD *)(v14 + 24) = 3464LL;
        goto LABEL_12;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v23 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
        *(_QWORD *)(v23 + 24) = 3470LL;
        WdLogEvent5_WdLowResource(v23);
        v55 = -1073741801;
        goto LABEL_71;
      }
      *(_OWORD *)PoolWithTag = 0LL;
      PoolWithTag[2] = 0LL;
      *((_BYTE *)P + 16) = 1;
      *(_QWORD *)P = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 104LL) + 128LL);
      *((_QWORD *)P + 1) = *((_QWORD *)v9 + 6);
      v10 = v9[6];
      LODWORD(v16) = *((_DWORD *)a1 + 22);
    }
    v24 = (unsigned int)v16 - v17;
    v25 = &v9[(unsigned int)v10 + 14];
    if ( (unsigned int)v24 >= (unsigned int)v56 )
      v26 = (unsigned __int64 *)&v25[v9[8]];
    else
      v26 = 0LL;
    v54 = 0;
    if ( !v13 )
    {
      v27 = *((_QWORD *)a1 + 6);
      if ( !v27 )
      {
        v28 = WdLogNewEntry5_WdError(v10, v24);
        *(_QWORD *)(v28 + 24) = PsGetCurrentProcess(v30, v29);
        v31 = v28;
LABEL_29:
        WdLogEvent5_WdError(v31);
        goto LABEL_71;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v65,
        *((struct _KTHREAD ***)a1 + 6));
      v34 = *v25;
      v35 = *(_DWORD *)(v27 + 256);
      v36 = (*v25 >> 6) & 0xFFFFFF;
      if ( v36 >= v35 )
      {
LABEL_42:
        v39 = WdLogNewEntry5_WdError(v33, v32);
        *(_QWORD *)(v39 + 24) = *v25;
        WdLogEvent5_WdError(v39);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v65);
        goto LABEL_70;
      }
      v57 = *(struct DXGDEVICE **)(v27 + 240);
      v32 = *((unsigned int *)v57 + 4 * v36 + 2);
      v33 = (v34 >> 25) & 0x60;
      if ( ((v34 >> 25) & 0x60) != (*((_BYTE *)v57 + 16 * v36 + 8) & 0x60)
        || (v32 & 0x2000) != 0
        || (v32 & 0x1F) == 0
        || (v32 &= 0x1Fu, (_BYTE)v32 != 7)
        || !*((_QWORD *)v57 + 2 * v36) )
      {
        if ( v36 >= v35 )
          goto LABEL_42;
        v32 = v36;
        v37 = *(_QWORD *)(v27 + 240);
        v33 = *(unsigned int *)(v37 + 16LL * (unsigned int)v32 + 8);
        if ( ((v34 >> 25) & 0x60) != (*(_BYTE *)(v37 + 16LL * (unsigned int)v32 + 8) & 0x60)
          || (v33 & 0x2000) != 0
          || (v33 & 0x1F) == 0 )
        {
          goto LABEL_42;
        }
        v32 *= 2LL;
        v33 &= 0x1Fu;
        if ( (_BYTE)v33 != 15 )
        {
          v38 = WdLogNewEntry5_WdError(v33, v32);
          *(_QWORD *)(v38 + 24) = 267LL;
          WdLogEvent5_WdError(v38);
          goto LABEL_42;
        }
        if ( !*(_QWORD *)(v37 + 8 * v32) )
          goto LABEL_42;
        v54 = 1;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v65);
      if ( v54 )
      {
        if ( !v26 )
        {
          v42 = WdLogNewEntry5_WdError(v41, v40);
          *(_QWORD *)(v42 + 24) = 3560LL;
LABEL_53:
          v31 = v42;
          goto LABEL_29;
        }
        v43 = SubmitSignalSyncObjectsToHwQueue(
                v9[6],
                v9 + 14,
                (struct _D3DDDICB_SIGNALFLAGS)v9[7],
                v9[8],
                v25,
                v26,
                *((struct DXGPROCESS **)a1 + 6),
                0,
                0);
      }
      else
      {
        v43 = SignalSynchronizationObjectInternal(
                v9[6],
                v9 + 14,
                (struct _D3DDDICB_SIGNALFLAGS)v9[7],
                v9[8],
                v25,
                v26,
                *((_QWORD *)v9 + 5),
                &P,
                *((struct DXGPROCESS **)a1 + 6),
                0,
                0);
      }
      v55 = v43;
      goto LABEL_70;
    }
    if ( !v26 )
    {
      v42 = WdLogNewEntry5_WdError(v10, v24);
      *(_QWORD *)(v42 + 24) = 3521LL;
      goto LABEL_53;
    }
    v44 = v9[12];
    v45 = v9[6];
    v61.hDevice = v9[12];
    *(_QWORD *)&v61.Flags.0 = 0LL;
    v61.ObjectCount = v45;
    v61.ObjectHandleArray = v9 + 14;
    v61.FenceValueArray = v26;
    if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
      v61.Flags.Value = v9[7];
    v46 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
    v57 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v56, (unsigned int)v44, v46, &v57);
    v49 = v57;
    if ( v57 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v59, v57);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, (__int64)v49, 0, v52, 0);
      v55 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v66, 0LL);
      if ( v55 >= 0 )
        v55 = SignalSynchronizationObjectFromCpu(&v61, *((struct DXGPROCESS **)a1 + 6), v49);
      COREACCESS::~COREACCESS((COREACCESS *)v68);
      COREACCESS::~COREACCESS((COREACCESS *)v67);
      if ( v59 && v60 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v59 + 136));
        KeLeaveCriticalRegion();
      }
      v51 = v56;
      if ( !v56 )
      {
LABEL_70:
        if ( v55 >= 0 )
        {
LABEL_73:
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v55, 4u);
          v5 = 1;
          goto LABEL_74;
        }
LABEL_71:
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_73;
      }
    }
    else
    {
      v50 = WdLogNewEntry5_WdError(v48, v47);
      *(_QWORD *)(v50 + 24) = v44;
      *(_QWORD *)(v50 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v50);
      v51 = v56;
      if ( !v56 )
        goto LABEL_71;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v56 + 2), v56);
    goto LABEL_70;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 3424LL;
  WdLogEvent5_WdError(v6);
LABEL_74:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
  return v5;
}
