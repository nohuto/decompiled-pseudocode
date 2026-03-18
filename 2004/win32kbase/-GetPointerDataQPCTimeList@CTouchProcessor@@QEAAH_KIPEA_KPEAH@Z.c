/*
 * XREFs of ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C01911E0
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0193BCC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1390 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018DBC8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01908AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C019408C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        struct _KTHREAD **this,
        int *a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  int *v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  __int64 v15; // rcx
  struct CPointerInputFrame *FrameById; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int HistoryCount; // ebp
  unsigned int v25; // ebx
  unsigned int v26; // r14d
  unsigned int v27; // edi
  __int64 v28; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  unsigned int v43; // eax
  _BYTE v45[40]; // [rsp+30h] [rbp-68h] BYREF
  CInpLockGuard *v46; // [rsp+58h] [rbp-40h]
  int v47; // [rsp+60h] [rbp-38h]

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      148,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v45, (struct CInpLockGuard *)(this + 5), v7);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  if ( !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v14 = 149;
LABEL_28:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v13->DeviceExtension, v9, 7, v14, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
LABEL_29:
    v25 = 0;
    goto LABEL_44;
  }
  FrameById = CTouchProcessor::FindFrameById(this, v7[7]);
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v14 = 150;
    goto LABEL_28;
  }
  v19 = (unsigned int)v7[8];
  if ( (unsigned int)v19 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v9, v17, v18);
    v19 = (unsigned int)v7[8];
  }
  v20 = *((_QWORD *)FrameById + 17) + 480 * v19;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v20) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v9, v22, v23);
  if ( a5 && *a5 && (*(_DWORD *)(v20 + 180) & 0x400000) == 0 )
  {
    *a5 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v14 = 151;
    goto LABEL_28;
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v20);
  if ( a3 > HistoryCount )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v14 = 152;
    goto LABEL_28;
  }
  v25 = 1;
  *a4 = *(_QWORD *)(v20 + 248);
  v26 = 1;
  if ( a3 > 1 )
  {
    v27 = *(_DWORD *)(v20 + 344);
    PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, FrameById);
    do
    {
      if ( !PreviousFrameByDevice || HistoryCount <= 1 )
        break;
      if ( v27 >= *((_DWORD *)PreviousFrameByDevice + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v9, v30, v31);
      v32 = *((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v27;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v32) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
      v37 = v26++;
      a4[v37] = *(_QWORD *)(v32 + 248);
      v38 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v32);
      v42 = HistoryCount - 1;
      if ( v38 != (_DWORD)v42 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v39, v40, v41);
      v43 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v32);
      v27 = *(_DWORD *)(v32 + 344);
      HistoryCount = v43;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, PreviousFrameByDevice);
    }
    while ( v26 < a3 );
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      7,
      153,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
LABEL_44:
  if ( !v47 )
    CInpLockGuard::UnLock((PERESOURCE *)v46, (struct CRefUnRefPointerMsgId *)v45);
  return v25;
}
