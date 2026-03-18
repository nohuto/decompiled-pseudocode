/*
 * XREFs of ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0194FB4
 * Callers:
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0195A54 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0195F50 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01973B4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00553BC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0180B70 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018BB34 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0192990 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0192A14 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_qdqd @ 0x1C019CB0C (WPP_RECORDER_SF_qdqd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ProcessEnterLeave(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v3; // ebx
  struct CPointerInfoNode *v7; // rdi
  __int64 v8; // rdx
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  CTouchProcessor *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PDEVICE_OBJECT v24; // rcx
  int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __m128i *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128i *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  int v42; // eax
  int v43; // ecx
  int v44; // r9d
  bool v45; // cf
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v51; // [rsp+20h] [rbp-E0h]
  unsigned int v52[28]; // [rsp+50h] [rbp-B0h] BYREF
  char v53; // [rsp+C0h] [rbp-40h]
  _BYTE v54[128]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v55[8]; // [rsp+150h] [rbp+50h] BYREF
  __m128i v56[8]; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  v7 = 0LL;
  memset(v54, 0, 113);
  memset(v52, 0, sizeof(v52));
  v53 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v8) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        7,
        175,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
  }
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  v16 = (CTouchProcessor *)*(unsigned int *)a3;
  if ( (*(_DWORD *)a3 & 0x400) == 0 && (*(_DWORD *)a3 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v12, v14, v15);
    v16 = (CTouchProcessor *)*(unsigned int *)a3;
  }
  if ( ((unsigned __int16)v16 & 0x400) == 0 && !*((_DWORD *)a3 + 6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v12, v14, v15);
  if ( !a2 )
  {
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v21,
          7,
          176,
          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v25 = 177;
LABEL_45:
            LOBYTE(v21) = 5;
            WPP_RECORDER_SF_(
              v24->DeviceExtension,
              v21,
              7,
              v25,
              (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
            goto LABEL_75;
          }
        }
      }
      goto LABEL_75;
    }
LABEL_37:
    if ( (*(_DWORD *)a3 & 0x400) != 0 )
    {
      v35 = CInputDest::CInputDest(v56, *((_QWORD *)a3 + 24), *((_DWORD *)a3 + 111), 1);
      CInputDest::operator=((__int64)v54, v35);
      CInputDest::SetEmpty((CInputDest *)v56, v36, v37, v38);
    }
    else
    {
      CInputDest::operator=((__int64)v54, (__int64)a3 + 24, v22, v23);
    }
    if ( CInputDest::operator==(v52, (__int64)v54, v39, v40) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v21,
          7,
          180,
          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v25 = 181;
            goto LABEL_45;
          }
        }
      }
      goto LABEL_75;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v21,
        7,
        182,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
    if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
      && ((v42 = *((_DWORD *)a3 + 45), (v42 & 4) != 0) || (v42 & 0x40000) != 0)
      && (v42 & 0x10000) == 0 )
    {
      *(_DWORD *)a3 |= 0x40u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      if ( v7 )
        v43 = -__CFSHR__(*(_DWORD *)v7, 6);
      else
        v43 = 0;
      v44 = 184;
      v45 = __CFSHR__(*(_DWORD *)a3, 7);
    }
    else
    {
      *(_DWORD *)a3 |= 8u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x10u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      if ( v7 )
        v43 = -__CFSHR__(*(_DWORD *)v7, 5);
      else
        v43 = 0;
      v44 = 183;
      v45 = __CFSHR__(*(_DWORD *)a3, 4);
    }
    WPP_RECORDER_SF_qdqd(v43, v21, v22, v44, v51, (char)a3, -v45, (char)v7, v43);
LABEL_67:
    if ( v7 )
    {
      v46 = *((unsigned int *)v7 + 2);
      if ( (unsigned int)v46 >= *((_DWORD *)a2 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v21, v22, v23);
        v46 = *((unsigned int *)v7 + 2);
      }
      *(_DWORD *)(160 * v46 + *((_QWORD *)a2 + 18) + 140) &= ~1u;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v21) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v21,
        7,
        185,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
    v3 = 1;
    goto LABEL_75;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v16, a2, v14, v15) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, a2, *((_WORD *)a3 + 86), 0LL);
  v7 = ValidNodeInFrame;
  if ( ValidNodeInFrame )
  {
    if ( *(char *)ValidNodeInFrame < 0 )
      v7 = 0LL;
    if ( v7 )
    {
      if ( (*(_DWORD *)v7 & 4) != 0 || (*(_DWORD *)v7 & 0x400) != 0 )
      {
        v31 = CInputDest::CInputDest(v55, *((_QWORD *)v7 + 24), *((_DWORD *)v7 + 111), 1);
        CInputDest::operator=((__int64)v52, v31);
        CInputDest::SetEmpty((CInputDest *)v55, v32, v33, v34);
      }
      else
      {
        CInputDest::operator=((__int64)v52, (__int64)v7 + 24, v22, v23);
      }
    }
    goto LABEL_37;
  }
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
    goto LABEL_37;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v21,
      7,
      178,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids,
      *((unsigned __int16 *)a3 + 86));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v25 = 179;
        goto LABEL_45;
      }
    }
  }
LABEL_75:
  CInputDest::SetEmpty((CInputDest *)v52, v21, v22, v23);
  CInputDest::SetEmpty((CInputDest *)v54, v47, v48, v49);
  return v3;
}
