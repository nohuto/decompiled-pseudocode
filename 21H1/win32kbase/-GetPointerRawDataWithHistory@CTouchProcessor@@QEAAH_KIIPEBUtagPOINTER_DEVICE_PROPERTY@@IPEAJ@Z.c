/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0199060
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0198FB8 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0AE0 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D0B7C (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01938C8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01965AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0198EF8 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0199D8C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01A45B0 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  int v15; // edx
  __int64 v16; // rcx
  struct CPointerInputFrame *FrameById; // r12
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  unsigned int HistoryCount; // eax
  int v23; // ecx
  int v24; // r8d
  unsigned int PointerRawData; // r14d
  _UNKNOWN **v26; // rdx
  PDEVICE_OBJECT v27; // rcx
  int v28; // r9d
  unsigned int v29; // r15d
  __int64 v30; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // r13
  __int64 v32; // r15
  __int64 v33; // rcx
  unsigned int v34; // edx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // [rsp+20h] [rbp-98h]
  size_t Size; // [rsp+40h] [rbp-78h]
  int *v39; // [rsp+48h] [rbp-70h]
  CInpLockGuard *v40[7]; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v43; // [rsp+E8h] [rbp+30h]
  int *v44; // [rsp+F0h] [rbp+38h]

  v9 = a2;
  Size = a6;
  v39 = &a7[Size];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      133,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v40, (struct CInpLockGuard *)(this + 5), (void *)v9);
  if ( a6 != a4 * a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_22;
    v14 = 135;
LABEL_21:
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(v13->DeviceExtension, v12, 7, v14, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
LABEL_22:
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v40);
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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_22;
    v14 = 137;
    goto LABEL_21;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v9 + 28));
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    LOBYTE(v15) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v15,
      7,
      138,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_22;
    v14 = 139;
    goto LABEL_21;
  }
  v19 = *(unsigned int *)(v9 + 32);
  if ( (unsigned int)v19 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
    v19 = *(unsigned int *)(v9 + 32);
  }
  v20 = *((_QWORD *)FrameById + 17) + 480 * v19;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v20) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v20);
  v43 = HistoryCount;
  if ( a3 == 1 || a3 == HistoryCount )
  {
    PointerRawData = 1;
  }
  else
  {
    PointerRawData = 0;
    v26 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    LOBYTE(v26) = 3;
    WPP_RECORDER_SF_LL(v23, (_DWORD)v26, v24, 140, v37, a3, HistoryCount);
  }
  v26 = &WPP_RECORDER_INITIALIZED;
LABEL_33:
  if ( *((void **)FrameById + 8) == TouchExtensibility::hDeviceUser )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v26) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v26,
        7,
        141,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
    memset(a7, 0, Size * 4);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    v27 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_65;
    v28 = 143;
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         (PERESOURCE *)this,
                         FrameById,
                         *(_DWORD *)(v20 + 156),
                         *(_WORD *)(v20 + 162),
                         a4,
                         a5,
                         a7);
      if ( !PointerRawData && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 3;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          (_DWORD)v26,
          7,
          144,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
      if ( PointerRawData )
      {
        v44 = &a7[a4];
        if ( a3 > 1 )
        {
          v29 = *(_DWORD *)(v20 + 344);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, FrameById);
          do
          {
            if ( !PreviousFrameByDevice || v43 <= 1 )
              break;
            if ( v29 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
            v32 = *((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v29;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v32) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
            v34 = a4;
            if ( &v44[a4] > v39 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v34) = 3;
                WPP_RECORDER_SF_(
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  v34,
                  7,
                  145,
                  (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
              }
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 (PERESOURCE *)this,
                                 PreviousFrameByDevice,
                                 *(_DWORD *)(v32 + 156),
                                 *(_WORD *)(v32 + 162),
                                 a4,
                                 a5,
                                 v44);
              if ( PointerRawData )
                v44 += a4;
            }
            v35 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v32);
            v36 = v43 - 1;
            if ( v35 != (_DWORD)v36 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
            v43 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v32);
            v29 = *(_DWORD *)(v32 + 344);
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
    v27 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_65;
    v28 = 146;
  }
  LOBYTE(v26) = 5;
  WPP_RECORDER_SF_(v27->DeviceExtension, (_DWORD)v26, 7, v28, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
LABEL_65:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v40);
  return PointerRawData;
}
