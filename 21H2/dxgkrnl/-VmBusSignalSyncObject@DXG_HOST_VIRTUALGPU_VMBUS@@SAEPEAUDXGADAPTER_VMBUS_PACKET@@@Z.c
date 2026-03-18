/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0381650
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009864 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004B9B0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004BA80 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0310230 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C034166C (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C0364C78 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // di
  unsigned int *v4; // rax
  __int64 v5; // r9
  unsigned int *v6; // rbx
  __int64 v7; // rcx
  char v8; // r13
  __int64 v9; // rax
  const wchar_t *v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // r15d
  __int64 Pool2; // rax
  __int64 v15; // rdx
  unsigned int *v16; // r12
  unsigned __int64 *v17; // r15
  __int64 v18; // r13
  __int64 CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned int v25; // r8d
  unsigned int v26; // r11d
  unsigned int v27; // edx
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // r9
  __int64 v34; // rax
  char v35; // r13
  int v36; // eax
  int v37; // eax
  __int64 v38; // r12
  UINT v39; // eax
  struct _KTHREAD **v40; // r8
  struct DXGDEVICE *v41; // rbx
  struct DXGDEVICE *v42; // rax
  __int64 v43; // r9
  int v45; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-98h]
  struct DXGDEVICE *v47; // [rsp+78h] [rbp-90h] BYREF
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v48; // [rsp+80h] [rbp-88h] BYREF
  struct DXGDEVICE *v49; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v50[24]; // [rsp+90h] [rbp-78h] BYREF
  _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v51; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v52[8]; // [rsp+C8h] [rbp-40h] BYREF
  DXGPUSHLOCK *v53; // [rsp+D0h] [rbp-38h]
  int v54; // [rsp+D8h] [rbp-30h]
  _BYTE v55[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v56[64]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v57[88]; // [rsp+130h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v53);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v54 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v45 = -1073741811;
    LODWORD(v46) = 0;
    v4 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v6 = v4;
    if ( !v4 )
      goto LABEL_65;
    v48 = 0LL;
    v7 = v4[6];
    if ( (_DWORD)v7 )
    {
      if ( (unsigned int)v7 <= 0xFFFF )
      {
LABEL_6:
        if ( v4[12] && (v4[7] & 2) == 0 )
        {
          v8 = 1;
          if ( v4[8] )
          {
            WdLogSingleEntry1(2LL, 3811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid context count for signal from CPU",
              3811LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_61;
          }
          LODWORD(v46) = v4[12];
          v11 = 0;
LABEL_15:
          LODWORD(v47) = 8 * v7;
          v12 = *((_DWORD *)a1 + 36);
          v13 = 4 * (v7 + v11) + 56;
          if ( v12 < v13 )
            goto LABEL_61;
          if ( (v6[7] & 2) != 0 )
          {
            if ( !*((_QWORD *)v6 + 6) )
            {
              WdLogSingleEntry1(2LL, 3837LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid CPU event pointer",
                3837LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_61;
            }
            Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL, v5);
            v48 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2;
            if ( !Pool2 )
            {
              WdLogSingleEntry1(6LL, 3843LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                -1,
                (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
                3843LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v45 = -1073741801;
              goto LABEL_62;
            }
            *(_BYTE *)(Pool2 + 16) = 1;
            *(_QWORD *)v48 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
            *((_QWORD *)v48 + 1) = *((_QWORD *)v6 + 6);
            *((_BYTE *)v48 + 19) = (*(_DWORD *)(*((_QWORD *)a1 + 11) + 424LL) & 0x10) != 0;
            DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference(v48);
            v7 = v6[6];
            v12 = *((_DWORD *)a1 + 36);
          }
          v15 = v12 - v13;
          v16 = &v6[(unsigned int)v7 + 14];
          if ( (unsigned int)v15 >= (unsigned int)v47 )
            v17 = (unsigned __int64 *)&v16[v6[8]];
          else
            v17 = 0LL;
          if ( !v8 )
          {
            v18 = *((_QWORD *)a1 + 11);
            if ( !v18 )
            {
              CurrentProcess = PsGetCurrentProcess(v7, v15, v6 + 14, v5);
              WdLogSingleEntry1(2LL, CurrentProcess);
              v24 = PsGetCurrentProcess(v21, v20, v22, v23);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Unexpected Process: 0x%I64x",
                v24,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_62;
            }
            DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
              (DXGHANDLETABLELOCKSHARED *)v50,
              *((struct DXGPROCESS **)a1 + 11));
            v25 = *v16;
            v26 = *(_DWORD *)(v18 + 296);
            v27 = (*v16 >> 6) & 0xFFFFFF;
            if ( v27 >= v26 )
              goto LABEL_39;
            v49 = *(struct DXGDEVICE **)(v18 + 280);
            v28 = *((_DWORD *)v49 + 4 * v27 + 2);
            if ( ((v25 >> 25) & 0x60) == (*((_BYTE *)v49 + 16 * v27 + 8) & 0x60)
              && (v28 & 0x2000) == 0
              && (v28 & 0x1F) == 7 )
            {
              v29 = *((_QWORD *)v49 + 2 * v27);
              if ( v29 )
              {
                v35 = 0;
                v36 = *(_DWORD *)(*(_QWORD *)(v29 + 16) + 436LL);
                goto LABEL_43;
              }
              if ( v27 >= v26 )
              {
LABEL_39:
                WdLogSingleEntry1(2LL, *v16);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Invalid context handle: 0x%I64x",
                  *v16,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
                goto LABEL_61;
              }
            }
            v30 = v27;
            v31 = *(_QWORD *)(v18 + 280);
            v32 = *(_DWORD *)(v31 + 16LL * (unsigned int)v30 + 8);
            if ( ((v25 >> 25) & 0x60) != (*(_BYTE *)(v31 + 16LL * (unsigned int)v30 + 8) & 0x60)
              || (v32 & 0x2000) != 0
              || (v32 & 0x1F) == 0 )
            {
              goto LABEL_39;
            }
            v33 = 2 * v30;
            if ( (v32 & 0x1F) != 0xF )
            {
              WdLogSingleEntry1(2LL, 267LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
              goto LABEL_39;
            }
            v34 = *(_QWORD *)(v31 + 8 * v33);
            if ( !v34 )
              goto LABEL_39;
            v35 = 1;
            v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 436LL);
LABEL_43:
            LODWORD(v46) = v36;
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
            if ( v35 )
            {
              if ( !v17 )
              {
                WdLogSingleEntry1(2LL, 3936LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Fence value array is NULL for submit signal to HwQueue",
                  3936LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_62;
              }
              v37 = SubmitSignalSyncObjectsToHwQueue(
                      v6[6],
                      v6 + 14,
                      v6[7],
                      v6[8],
                      v16,
                      v17,
                      *((DXGSYNCOBJECT ***)a1 + 11),
                      0,
                      0);
            }
            else
            {
              v37 = SignalSynchronizationObjectInternal(
                      v6[6],
                      v6 + 14,
                      (struct _D3DDDICB_SIGNALFLAGS)v6[7],
                      v6[8],
                      v16,
                      v17,
                      *((_QWORD *)v6 + 5),
                      (void **)&v48,
                      *((struct DXGPROCESS **)a1 + 11),
                      0,
                      0,
                      0);
            }
            v45 = v37;
            goto LABEL_61;
          }
          if ( !v17 )
          {
            WdLogSingleEntry1(2LL, 3900LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fence value array is NULL for signal from CPU",
              3900LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_62;
          }
          v38 = v6[12];
          v51.ObjectCount = v6[6];
          v39 = v6[7];
          v51.ObjectHandleArray = v6 + 14;
          v40 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
          v51.Flags.Value = v39;
          *((_DWORD *)&v51.Flags + 1) = 0;
          v51.hDevice = v38;
          v51.FenceValueArray = v17;
          v49 = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47, v38, v40, &v49);
          v41 = v49;
          if ( v49 )
          {
            DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v50, v49);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v41, 0, v43, 0);
            v45 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55, 0LL);
            if ( v45 >= 0 )
              v45 = SignalSynchronizationObjectFromCpu(&v51, *((struct DXGPROCESS **)a1 + 11), v41);
            COREACCESS::~COREACCESS((COREACCESS *)v57);
            COREACCESS::~COREACCESS((COREACCESS *)v56);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v50);
            v42 = v47;
            if ( !v47 )
            {
LABEL_61:
              if ( v45 >= 0 )
              {
LABEL_64:
                VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v45, 4u);
                v3 = 1;
                goto LABEL_65;
              }
LABEL_62:
              HandleAsyncCommandError((__int64 *)a1, v45, v46, 0);
              if ( v48 )
                DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(v48);
              goto LABEL_64;
            }
          }
          else
          {
            WdLogSingleEntry2(2LL, (unsigned int)v38, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
              v38,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            v42 = v47;
            if ( !v47 )
              goto LABEL_62;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
          goto LABEL_61;
        }
        v11 = v4[8];
        v8 = 0;
        if ( v11 && v11 <= 0xFFFF )
          goto LABEL_15;
        WdLogSingleEntry1(2LL, v6[8]);
        v9 = v6[8];
        v10 = L"Invalid context count: 0x%I64x";
LABEL_60:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_61;
      }
    }
    else if ( (v4[7] & 2) != 0 )
    {
      goto LABEL_6;
    }
    WdLogSingleEntry1(2LL, v7);
    v9 = v6[6];
    v10 = L"Invalid sync object count: 0x%I64x";
    goto LABEL_60;
  }
  WdLogSingleEntry1(2LL, 3794LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    3794LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_65:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
  return v3;
}
