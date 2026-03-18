/*
 * XREFs of ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C0377DE4
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C017C6C0 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     McTemplateK0xqqxx_EtwWriteTransfer @ 0x1C005EDC0 (McTemplateK0xqqxx_EtwWriteTransfer.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1C033D6F4 (-FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_GETDEVICESTATE *a4)
{
  unsigned int v8; // r14d
  __int64 v9; // rsi
  int v10; // ebx
  int HostProcess; // eax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  unsigned int *v25; // [rsp+20h] [rbp-E0h]
  unsigned int *v26; // [rsp+28h] [rbp-D8h]
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v28[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int128 v32; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+90h] [rbp-70h]
  __int128 v34; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v35; // [rsp+1B0h] [rbp+B0h]
  __int128 v36; // [rsp+1C0h] [rbp+C0h]
  __int64 v37; // [rsp+1D0h] [rbp+D0h]
  int v38; // [rsp+1D8h] [rbp+D8h]
  int v39; // [rsp+1DCh] [rbp+DCh]

  v8 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 450);
  v32 = 0LL;
  v29 = 0LL;
  v30 = 0;
  v33 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v32, this, 0x58u, 0LL, 0LL, 0LL);
  v9 = v32;
  if ( (_QWORD)v32 )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_BYTE *)(v9 + 12) = 0;
    *(_DWORD *)(v9 + 12) &= 0x1FFu;
    *(_DWORD *)(v9 + 8) = HostProcess;
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 16) = 28LL;
    *(_QWORD *)(v9 + 80) = 0LL;
    v28[0] = 64;
    *(_OWORD *)(v9 + 24) = *(_OWORD *)&a4->hDevice;
    *(_OWORD *)(v9 + 40) = *(_OWORD *)(&a4->PresentQueueState + 1);
    *(_OWORD *)(v9 + 56) = *(_OWORD *)(&a4->PresentQueueState + 3);
    *(_QWORD *)(v9 + 72) = *((_QWORD *)&a4->PresentQueueState + 5);
    *(_DWORD *)(v9 + 24) = *((_DWORD *)a3 + 110);
    if ( v8 >= 0x20 && *(_DWORD *)(v9 + 28) == 4 )
    {
      Global = DXGGLOBAL_GetGlobal();
      if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
                  (struct _KTHREAD **)Global + 38108,
                  *(_DWORD *)(v9 + 32),
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v29) >= 0
        && v29 == *(_QWORD *)(*((_QWORD *)this + 9) + 4444LL) )
      {
        if ( v8 >= 0x23 )
        {
          if ( *((_QWORD *)DXGGLOBAL_GetGlobal() + 222) )
          {
            if ( *(_DWORD *)(v9 + 32) < 0x10u )
            {
              v13 = DXGGLOBAL_GetGlobal();
              v14 = 32LL * *(unsigned int *)(v9 + 32);
              v15 = *((_QWORD *)v13 + 222);
              do
              {
                _InterlockedExchange((volatile __int32 *)&v27, *(_DWORD *)(v14 + v15 + 8));
                v16 = v27;
                _InterlockedExchange64(&v31, *(_QWORD *)(v14 + v15 + 16));
                v17 = (unsigned int)_InterlockedExchange((volatile __int32 *)&v27, *(_DWORD *)(v14 + v15 + 8));
              }
              while ( v27 != (_DWORD)v16 );
              if ( v31 )
              {
                v10 = 0;
                v18 = *(_OWORD *)&a4->hDevice;
                v39 = 0;
                v19 = *(_OWORD *)(&a4->PresentQueueState + 1);
                v34 = v18;
                v20 = *(_OWORD *)(&a4->PresentQueueState + 3);
                v35 = v19;
                *(_QWORD *)&v19 = *((_QWORD *)&a4->PresentQueueState + 5);
                *(_QWORD *)&v36 = __PAIR64__(DWORD1(v20), v27);
                HIDWORD(v37) = DWORD1(v19);
                *((_QWORD *)&v36 + 1) = v31;
                v35 = 0uLL;
                LODWORD(v37) = 0;
                v38 = 0;
                goto LABEL_18;
              }
            }
          }
        }
        v21 = v30;
        *(_QWORD *)(v9 + 80) |= 1uLL;
        *(_DWORD *)(v9 + 32) = v21;
      }
    }
    v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v32, &v34, v28);
    if ( v10 < 0 )
      goto LABEL_31;
    v10 = -1073741823;
    if ( v28[0] < 0x40 )
      goto LABEL_31;
    v10 = v38;
LABEL_18:
    v22 = v35;
    *(_OWORD *)&a4->hDevice = v34;
    v23 = v36;
    *(_OWORD *)(&a4->PresentQueueState + 1) = v22;
    *(_QWORD *)&v22 = v37;
    *(_OWORD *)(&a4->PresentQueueState + 3) = v23;
    *((_QWORD *)&a4->PresentQueueState + 5) = v22;
    if ( v8 < 0x20 || *(_DWORD *)(v9 + 28) != 4 )
      goto LABEL_30;
    *(_QWORD *)v28 = 0LL;
    if ( v10 >= 0 )
    {
      if ( !*((_QWORD *)&v36 + 1) )
      {
LABEL_24:
        v17 = *((_QWORD *)&v35 + 1);
        if ( *((_QWORD *)&v35 + 1) )
        {
          v10 = RtlConvertHostPerfCounterToPerfCounter(*((_QWORD *)&v35 + 1), -1LL, v28);
          if ( v10 >= 0 )
            a4->PresentStateDWM.PresentStatsDWM.PresentQPCTime.QuadPart = *(_QWORD *)v28;
        }
        goto LABEL_27;
      }
      v10 = RtlConvertHostPerfCounterToPerfCounter(*((_QWORD *)&v36 + 1), -1LL, v28);
      if ( v10 >= 0 )
      {
        a4->PresentState.PresentStats.SyncGPUTime.QuadPart = *(_QWORD *)v28;
        goto LABEL_24;
      }
    }
LABEL_27:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      LODWORD(v26) = a4->PresentState.PresentStats.SyncQPCTime.LowPart;
      LODWORD(v25) = v30;
      McTemplateK0xqqxx_EtwWriteTransfer(
        v17,
        v16,
        v14,
        v29,
        v25,
        v26,
        a4->PresentState.PresentStats.SyncGPUTime.QuadPart,
        *((_QWORD *)&v36 + 1));
    }
LABEL_30:
    if ( v10 >= 0 )
      goto LABEL_32;
LABEL_31:
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendGetDeviceState failed: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
    a4->PresentState.VidPnSourceId = 4;
    v10 = 0;
    goto LABEL_32;
  }
  v10 = -1073741801;
LABEL_32:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v32);
  return (unsigned int)v10;
}
