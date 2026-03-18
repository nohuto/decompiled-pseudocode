/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F490
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
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F7C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FAFA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026EE9C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0291D9C (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
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
  unsigned int v17; // r15d
  _QWORD *PoolWithTag; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int *v25; // r14
  unsigned __int64 *v26; // r15
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
  int v42; // eax
  __int64 v43; // r14
  UINT v44; // eax
  struct _KTHREAD **v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct DXGDEVICE *v48; // rbx
  __int64 v49; // rax
  struct DXGDEVICE *v50; // rax
  __int64 v51; // r9
  char v53; // [rsp+68h] [rbp-A0h]
  int v54; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct DXGDEVICE *v55; // [rsp+70h] [rbp-98h] BYREF
  struct DXGDEVICE *v56; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  __int64 v58; // [rsp+88h] [rbp-80h] BYREF
  char v59; // [rsp+90h] [rbp-78h]
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v60; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v61[8]; // [rsp+B8h] [rbp-50h] BYREF
  DXGPUSHLOCK *v62; // [rsp+C0h] [rbp-48h]
  int v63; // [rsp+C8h] [rbp-40h]
  _BYTE v64[24]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v65[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v66[64]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v67[88]; // [rsp+130h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v62);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v63 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v54 = -1073741811;
    v7 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v9 = v7;
    if ( !v7 )
      goto LABEL_71;
    P = 0LL;
    v10 = v7[6];
    if ( !(_DWORD)v10 && (v7[7] & 2) == 0 || (v8 = 0xFFFFLL, (unsigned int)v10 > 0xFFFF) )
    {
      v11 = WdLogNewEntry5_WdError(v10, v8);
      v12 = v9[6];
LABEL_65:
      *(_QWORD *)(v11 + 24) = v12;
      goto LABEL_66;
    }
    if ( !v7[12] || (v7[7] & 2) != 0 )
    {
      v15 = v7[8];
      v13 = 0;
      if ( !v15 || v15 > 0xFFFF )
      {
        v11 = WdLogNewEntry5_WdError(v10, 0xFFFFLL);
        v12 = v9[8];
        goto LABEL_65;
      }
    }
    else
    {
      v13 = 1;
      if ( v7[8] )
      {
        v14 = WdLogNewEntry5_WdError(v10, 0xFFFFLL);
        *(_QWORD *)(v14 + 24) = 3386LL;
LABEL_12:
        v11 = v14;
LABEL_66:
        WdLogEvent5_WdError(v11);
        goto LABEL_67;
      }
      v15 = 0;
    }
    LODWORD(v55) = 8 * v10;
    v16 = *((unsigned int *)a1 + 22);
    v17 = 4 * (v10 + v15) + 56;
    if ( (unsigned int)v16 < v17 )
      goto LABEL_67;
    if ( (v9[7] & 2) != 0 )
    {
      if ( !*((_QWORD *)v9 + 6) )
      {
        v14 = WdLogNewEntry5_WdError(v10, v16);
        *(_QWORD *)(v14 + 24) = 3411LL;
        goto LABEL_12;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v23 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
        *(_QWORD *)(v23 + 24) = 3417LL;
        WdLogEvent5_WdLowResource(v23);
        v54 = -1073741801;
        goto LABEL_68;
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
    if ( (unsigned int)v24 >= (unsigned int)v55 )
      v26 = (unsigned __int64 *)&v25[v9[8]];
    else
      v26 = 0LL;
    v53 = 0;
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
        goto LABEL_68;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v64,
        *((struct _KTHREAD ***)a1 + 6));
      v34 = *v25;
      v35 = *(_DWORD *)(v27 + 256);
      v36 = (*v25 >> 6) & 0xFFFFFF;
      if ( v36 < v35 )
      {
        v56 = *(struct DXGDEVICE **)(v27 + 240);
        v32 = *((unsigned int *)v56 + 4 * v36 + 2);
        v33 = (v34 >> 25) & 0x60;
        if ( ((v34 >> 25) & 0x60) != (*((_BYTE *)v56 + 16 * v36 + 8) & 0x60)
          || (v32 & 0x2000) != 0
          || (v32 & 0x1F) == 0
          || (v32 &= 0x1Fu, (_BYTE)v32 != 7)
          || !*((_QWORD *)v56 + 2 * v36) )
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
          v53 = 1;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v64);
        if ( v53 )
        {
          if ( !v26 )
          {
            v31 = WdLogNewEntry5_WdError(v41, v40);
            *(_QWORD *)(v31 + 24) = 3500LL;
            goto LABEL_29;
          }
          v42 = SubmitSignalSyncObjectsToHwQueue(
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
          v42 = SignalSynchronizationObjectInternal(
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
        v54 = v42;
        goto LABEL_67;
      }
LABEL_42:
      v39 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v39 + 24) = *v25;
      WdLogEvent5_WdError(v39);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v64);
      goto LABEL_67;
    }
    v43 = v9[12];
    v44 = v9[6];
    v60.hDevice = v9[12];
    *(_QWORD *)&v60.Flags.0 = 0LL;
    v60.ObjectCount = v44;
    v60.ObjectHandleArray = v9 + 14;
    v60.FenceValueArray = v26;
    if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
      v60.Flags.Value = v9[7];
    v45 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
    v56 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v55, (unsigned int)v43, v45, &v56);
    v48 = v56;
    if ( v56 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v58, v56);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v48, 0, v51, 0);
      v54 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65, 0LL);
      if ( v54 >= 0 )
        v54 = SignalSynchronizationObjectFromCpu(&v60, *((struct DXGPROCESS **)a1 + 6), v48);
      COREACCESS::~COREACCESS((COREACCESS *)v67);
      COREACCESS::~COREACCESS((COREACCESS *)v66);
      if ( v58 && v59 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v58 + 136));
        KeLeaveCriticalRegion();
      }
      v50 = v55;
      if ( !v55 )
      {
LABEL_67:
        if ( v54 >= 0 )
        {
LABEL_70:
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v54, 4u);
          v5 = 1;
          goto LABEL_71;
        }
LABEL_68:
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_70;
      }
    }
    else
    {
      v49 = WdLogNewEntry5_WdError(v47, v46);
      *(_QWORD *)(v49 + 24) = v43;
      *(_QWORD *)(v49 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v49);
      v50 = v55;
      if ( !v55 )
        goto LABEL_68;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
    goto LABEL_67;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 3371LL;
  WdLogEvent5_WdError(v6);
LABEL_71:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61);
  return v5;
}
