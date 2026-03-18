/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0190E30
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0190D90 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1280 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D131C (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B6A8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C018E38C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0190CD0 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0191B5C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_LL @ 0x1C019C350 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataWithHistory(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        int *a7)
{
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edx
  PDEVICE_OBJECT v15; // rcx
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct CPointerInputFrame *FrameById; // r12
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int HistoryCount; // eax
  int v30; // ecx
  int v31; // r8d
  unsigned int PointerRawData; // r14d
  _UNKNOWN **v33; // rdx
  PDEVICE_OBJECT v34; // rcx
  int v35; // r9d
  unsigned int v36; // r15d
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  const struct CPointerInputFrame *PreviousFrameByDevice; // r13
  __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // edx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  int v52; // [rsp+20h] [rbp-98h]
  size_t Size; // [rsp+40h] [rbp-78h]
  int *v54; // [rsp+48h] [rbp-70h]
  CInpLockGuard *v55[7]; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v58; // [rsp+E8h] [rbp+30h]
  int *v59; // [rsp+F0h] [rbp+38h]

  v9 = a2;
  Size = a6;
  v54 = &a7[Size];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      133,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v55, (struct CInpLockGuard *)(this + 5), (void *)v9);
  if ( a6 != a4 * a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  if ( a6 < a4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v10,
      7,
      134,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v15 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_22;
    v16 = 135;
LABEL_21:
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(v15->DeviceExtension, v14, 7, v16, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
LABEL_22:
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v55);
    return 0LL;
  }
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v10,
      7,
      136,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v15 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_22;
    v16 = 137;
    goto LABEL_21;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v9 + 28));
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    LOBYTE(v17) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v17,
      7,
      138,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v15 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_22;
    v16 = 139;
    goto LABEL_21;
  }
  v23 = *(unsigned int *)(v9 + 32);
  if ( (unsigned int)v23 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
    v23 = *(unsigned int *)(v9 + 32);
  }
  v24 = *((_QWORD *)FrameById + 17) + 480 * v23;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27, v28);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v24);
  v58 = HistoryCount;
  if ( a3 == 1 || a3 == HistoryCount )
  {
    PointerRawData = 1;
  }
  else
  {
    PointerRawData = 0;
    v33 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    LOBYTE(v33) = 3;
    WPP_RECORDER_SF_LL(v30, (_DWORD)v33, v31, 140, v52, a3, HistoryCount);
  }
  v33 = &WPP_RECORDER_INITIALIZED;
LABEL_33:
  if ( *((void **)FrameById + 8) == TouchExtensibility::hDeviceUser )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v33) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v33,
        7,
        141,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
    memset(a7, 0, Size * 4);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    v34 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_65;
    v35 = 143;
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         (PERESOURCE *)this,
                         FrameById,
                         *(_DWORD *)(v24 + 156),
                         *(_WORD *)(v24 + 162),
                         a4,
                         a5,
                         a7);
      if ( !PointerRawData && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v33) = 3;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          (_DWORD)v33,
          7,
          144,
          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      }
      if ( PointerRawData )
      {
        v59 = &a7[a4];
        if ( a3 > 1 )
        {
          v36 = *(_DWORD *)(v24 + 344);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, FrameById);
          do
          {
            if ( !PreviousFrameByDevice || v58 <= 1 )
              break;
            if ( v36 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v33, v38, v39);
            v41 = *((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v36;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v41) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
            v46 = a4;
            if ( &v59[a4] > v54 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v46) = 3;
                WPP_RECORDER_SF_(
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  v46,
                  7,
                  145,
                  (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
              }
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 (PERESOURCE *)this,
                                 PreviousFrameByDevice,
                                 *(_DWORD *)(v41 + 156),
                                 *(_WORD *)(v41 + 162),
                                 a4,
                                 a5,
                                 v59);
              if ( PointerRawData )
                v59 += a4;
            }
            v47 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v41);
            v51 = v58 - 1;
            if ( v47 != (_DWORD)v51 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v48, v49, v50);
            v58 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v41);
            v36 = *(_DWORD *)(v41 + 344);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                      (CTouchProcessor *)this,
                                      PreviousFrameByDevice);
          }
          while ( PointerRawData );
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    v34 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_65;
    v35 = 146;
  }
  LOBYTE(v33) = 5;
  WPP_RECORDER_SF_(v34->DeviceExtension, (_DWORD)v33, 7, v35, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
LABEL_65:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v55);
  return PointerRawData;
}
