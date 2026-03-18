/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EE14 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E854 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FC050 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026A98C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C028D8F8 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
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
  unsigned int v17; // r12d
  unsigned int v18; // r14d
  _QWORD *PoolWithTag; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int *v26; // r15
  unsigned __int64 *v27; // r14
  char v28; // r12
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // r9d
  unsigned int v37; // r11d
  unsigned int v38; // r8d
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // r15
  UINT v46; // eax
  struct _KTHREAD **v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct DXGDEVICE *v50; // rbx
  __int64 v51; // rax
  struct DXGDEVICE *v52; // rax
  __int64 v53; // r9
  __int64 v55; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGDEVICE *v56; // [rsp+70h] [rbp-98h] BYREF
  struct DXGDEVICE *v57; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  __int64 v59; // [rsp+88h] [rbp-80h] BYREF
  char v60; // [rsp+90h] [rbp-78h]
  _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v61; // [rsp+98h] [rbp-70h] BYREF
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
    LODWORD(v55) = -1073741811;
    v7 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v9 = v7;
    if ( !v7 )
      goto LABEL_69;
    P = 0LL;
    v10 = v7[6];
    if ( !(_DWORD)v10 && (v7[7] & 2) == 0 || (v8 = 0xFFFFLL, (unsigned int)v10 > 0xFFFF) )
    {
      v11 = WdLogNewEntry5_WdError(v10, v8);
      v12 = v9[6];
LABEL_63:
      *(_QWORD *)(v11 + 24) = v12;
      goto LABEL_64;
    }
    if ( !v7[12] || (v7[7] & 2) != 0 )
    {
      v15 = v7[8];
      v13 = 0;
      if ( !v15 || v15 > 0xFFFF )
      {
        v11 = WdLogNewEntry5_WdError(v10, 0xFFFFLL);
        v12 = v9[8];
        goto LABEL_63;
      }
    }
    else
    {
      v13 = 1;
      if ( v7[8] )
      {
        v14 = WdLogNewEntry5_WdError(v10, 0xFFFFLL);
        *(_QWORD *)(v14 + 24) = 3349LL;
LABEL_12:
        v11 = v14;
LABEL_64:
        WdLogEvent5_WdError(v11);
        goto LABEL_65;
      }
      v15 = 0;
    }
    v16 = *((unsigned int *)a1 + 22);
    v17 = 8 * v10;
    v18 = 4 * (v10 + v15) + 56;
    if ( (unsigned int)v16 < v18 )
      goto LABEL_65;
    if ( (v9[7] & 2) != 0 )
    {
      if ( !*((_QWORD *)v9 + 6) )
      {
        v14 = WdLogNewEntry5_WdError(v10, v16);
        *(_QWORD *)(v14 + 24) = 3374LL;
        goto LABEL_12;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v24 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
        *(_QWORD *)(v24 + 24) = 3380LL;
        WdLogEvent5_WdLowResource(v24);
        LODWORD(v55) = -1073741801;
        goto LABEL_66;
      }
      *(_OWORD *)PoolWithTag = 0LL;
      PoolWithTag[2] = 0LL;
      *((_BYTE *)P + 16) = 1;
      *(_QWORD *)P = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 104LL) + 128LL);
      *((_QWORD *)P + 1) = *((_QWORD *)v9 + 6);
      v10 = v9[6];
      LODWORD(v16) = *((_DWORD *)a1 + 22);
    }
    v25 = (unsigned int)v16 - v18;
    v26 = &v9[(unsigned int)v10 + 14];
    if ( (unsigned int)v25 >= v17 )
      v27 = (unsigned __int64 *)&v26[v9[8]];
    else
      v27 = 0LL;
    v28 = 0;
    if ( !v13 )
    {
      v29 = *((_QWORD *)a1 + 6);
      if ( !v29 )
      {
        v30 = WdLogNewEntry5_WdError(v10, v25);
        *(_QWORD *)(v30 + 24) = PsGetCurrentProcess(v32, v31);
        v33 = v30;
LABEL_29:
        WdLogEvent5_WdError(v33);
        goto LABEL_66;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v65,
        *((struct _KTHREAD ***)a1 + 6));
      v36 = *v26;
      v37 = *(_DWORD *)(v29 + 256);
      v38 = (*v26 >> 6) & 0xFFFFFF;
      if ( v38 < v37 )
      {
        v56 = *(struct DXGDEVICE **)(v29 + 240);
        v34 = *((unsigned int *)v56 + 4 * v38 + 2);
        v35 = (v36 >> 25) & 0x60;
        if ( ((v36 >> 25) & 0x60) != (*((_BYTE *)v56 + 16 * v38 + 8) & 0x60)
          || (v34 & 0x2000) != 0
          || (v34 & 0x1F) == 0
          || (v34 &= 0x1Fu, (_BYTE)v34 != 7)
          || !*((_QWORD *)v56 + 2 * v38) )
        {
          if ( v38 >= v37 )
            goto LABEL_42;
          v34 = v38;
          v39 = *(_QWORD *)(v29 + 240);
          v35 = *(unsigned int *)(v39 + 16LL * (unsigned int)v34 + 8);
          if ( ((v36 >> 25) & 0x60) != (*(_BYTE *)(v39 + 16LL * (unsigned int)v34 + 8) & 0x60)
            || (v35 & 0x2000) != 0
            || (v35 & 0x1F) == 0 )
          {
            goto LABEL_42;
          }
          v34 *= 2LL;
          v35 &= 0x1Fu;
          if ( (_BYTE)v35 != 15 )
          {
            v40 = WdLogNewEntry5_WdError(v35, v34);
            *(_QWORD *)(v40 + 24) = 267LL;
            WdLogEvent5_WdError(v40);
            goto LABEL_42;
          }
          if ( !*(_QWORD *)(v39 + 8 * v34) )
            goto LABEL_42;
          v28 = 1;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v65);
        if ( v28 )
        {
          if ( !v27 )
          {
            v33 = WdLogNewEntry5_WdError(v43, v42);
            *(_QWORD *)(v33 + 24) = 3459LL;
            goto LABEL_29;
          }
          v44 = SubmitSignalSyncObjectsToHwQueue(
                  v9[6],
                  v9 + 14,
                  (struct _D3DDDICB_SIGNALFLAGS)v9[7],
                  v9[8],
                  v26,
                  v27,
                  *((struct DXGPROCESS **)a1 + 6),
                  0,
                  0);
        }
        else
        {
          v44 = SignalSynchronizationObjectInternal(
                  v9[6],
                  v9 + 14,
                  (struct _D3DDDICB_SIGNALFLAGS)v9[7],
                  v9[8],
                  v26,
                  v27,
                  *((_QWORD *)v9 + 5),
                  &P,
                  *((struct DXGPROCESS **)a1 + 6),
                  0,
                  0);
        }
        LODWORD(v55) = v44;
        goto LABEL_65;
      }
LABEL_42:
      v41 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v41 + 24) = *v26;
      WdLogEvent5_WdError(v41);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v65);
      goto LABEL_65;
    }
    v45 = v9[12];
    v46 = v9[6];
    v61.ObjectHandleArray = v9 + 14;
    v47 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
    *(_QWORD *)&v61.Flags.0 = 0LL;
    v61.hDevice = v45;
    v61.ObjectCount = v46;
    v61.FenceValueArray = v27;
    v56 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v57, (unsigned int)v45, v47, &v56);
    v50 = v56;
    if ( v56 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v59, v56);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, (__int64)v50, 0, v53, 0);
      LODWORD(v55) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v66, 0LL);
      if ( (int)v55 >= 0 )
        LODWORD(v55) = SignalSynchronizationObjectFromCpu(&v61, *((struct DXGPROCESS **)a1 + 6), v50);
      COREACCESS::~COREACCESS((COREACCESS *)v68);
      COREACCESS::~COREACCESS((COREACCESS *)v67);
      if ( v59 && v60 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v59 + 136));
        KeLeaveCriticalRegion();
      }
      v52 = v57;
      if ( !v57 )
      {
LABEL_65:
        if ( (int)v55 >= 0 )
        {
LABEL_68:
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v55, 4u);
          v5 = 1;
          goto LABEL_69;
        }
LABEL_66:
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_68;
      }
    }
    else
    {
      v51 = WdLogNewEntry5_WdError(v49, v48);
      *(_QWORD *)(v51 + 24) = v45;
      *(_QWORD *)(v51 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v51);
      v52 = v57;
      if ( !v57 )
        goto LABEL_66;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
    goto LABEL_65;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 3334LL;
  WdLogEvent5_WdError(v6);
LABEL_69:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v62);
  return v5;
}
