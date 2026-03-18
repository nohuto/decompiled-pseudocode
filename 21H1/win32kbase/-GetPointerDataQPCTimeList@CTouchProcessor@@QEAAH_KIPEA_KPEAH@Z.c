/*
 * XREFs of ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C0196EE0
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01998CC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0AE0 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01938C8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01965AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0199D8C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        struct _KTHREAD **this,
        int *a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  int *v7; // rbx
  int v9; // edx
  __int64 v10; // rcx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  struct CPointerInputFrame *FrameById; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned int HistoryCount; // ebp
  unsigned int v19; // ebx
  unsigned int v20; // r14d
  unsigned int v21; // edi
  __int64 v22; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rsi
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  _BYTE v31[40]; // [rsp+30h] [rbp-68h] BYREF
  CInpLockGuard *v32; // [rsp+58h] [rbp-40h]
  int v33; // [rsp+60h] [rbp-38h]

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      147,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v31, (struct CInpLockGuard *)(this + 5), v7);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  if ( !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v12 = 148;
LABEL_28:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v11->DeviceExtension, v9, 7, v12, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
LABEL_29:
    v19 = 0;
    goto LABEL_44;
  }
  FrameById = CTouchProcessor::FindFrameById(this, v7[7]);
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v12 = 149;
    goto LABEL_28;
  }
  v15 = (unsigned int)v7[8];
  if ( (unsigned int)v15 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    v15 = (unsigned int)v7[8];
  }
  v16 = *((_QWORD *)FrameById + 17) + 480 * v15;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
  if ( a5 && *a5 && (*(_DWORD *)(v16 + 180) & 0x400000) == 0 )
  {
    *a5 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v12 = 150;
    goto LABEL_28;
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v16);
  if ( a3 > HistoryCount )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v12 = 151;
    goto LABEL_28;
  }
  v19 = 1;
  *a4 = *(_QWORD *)(v16 + 248);
  v20 = 1;
  if ( a3 > 1 )
  {
    v21 = *(_DWORD *)(v16 + 344);
    PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, FrameById);
    do
    {
      if ( !PreviousFrameByDevice || HistoryCount <= 1 )
        break;
      if ( v21 >= *((_DWORD *)PreviousFrameByDevice + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
      v24 = *((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v21;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v24) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      v26 = v20++;
      a4[v26] = *(_QWORD *)(v24 + 248);
      v27 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v24);
      v28 = HistoryCount - 1;
      if ( v27 != (_DWORD)v28 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
      v29 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v24);
      v21 = *(_DWORD *)(v24 + 344);
      HistoryCount = v29;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, PreviousFrameByDevice);
    }
    while ( v20 < a3 );
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      7,
      152,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
LABEL_44:
  if ( !v33 )
    CInpLockGuard::UnLock((PERESOURCE *)v32, (struct CRefUnRefPointerMsgId *)v31);
  return v19;
}
