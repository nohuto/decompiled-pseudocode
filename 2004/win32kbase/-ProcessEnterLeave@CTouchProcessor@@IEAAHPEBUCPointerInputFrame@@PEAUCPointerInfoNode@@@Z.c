/*
 * XREFs of ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01974E4
 * Callers:
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0197F84 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0198480 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01998E4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C007471C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01830B0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018E054 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0194EC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0194F44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_qdqd @ 0x1C019F00C (WPP_RECORDER_SF_qdqd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v21; // edx
  int v22; // edx
  PDEVICE_OBJECT v23; // rcx
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  int v30; // edx
  __m128i *v31; // rax
  __m128i *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  int v40; // ecx
  int v41; // r9d
  bool v42; // cf
  __int64 v43; // rax
  int v45; // [rsp+20h] [rbp-E0h]
  unsigned int v46[28]; // [rsp+50h] [rbp-B0h] BYREF
  char v47; // [rsp+C0h] [rbp-40h]
  _BYTE v48[128]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v49[8]; // [rsp+150h] [rbp+50h] BYREF
  __m128i v50[8]; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  v7 = 0LL;
  memset(v48, 0, 113);
  memset(v46, 0, sizeof(v46));
  v47 = 0;
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
        176,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
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
          177,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v24 = 178;
LABEL_45:
            LOBYTE(v22) = 5;
            WPP_RECORDER_SF_(
              v23->DeviceExtension,
              v22,
              7,
              v24,
              (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
            goto LABEL_75;
          }
        }
      }
      goto LABEL_75;
    }
LABEL_37:
    if ( (*(_DWORD *)a3 & 0x400) != 0 )
    {
      v32 = CInputDest::CInputDest(v50, *((_QWORD *)a3 + 24), *((_DWORD *)a3 + 111), 1);
      CInputDest::operator=((__int64)v48, v32);
      CInputDest::SetEmpty((CInputDest *)v50);
    }
    else
    {
      CInputDest::operator=((__int64)v48, (__int64)a3 + 24);
    }
    if ( CInputDest::operator==(v46, (__int64)v48, v33, v34) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v35) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v35,
          7,
          181,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v24 = 182;
            goto LABEL_45;
          }
        }
      }
      goto LABEL_75;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v35) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v35,
        7,
        183,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
    if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
      && ((v39 = *((_DWORD *)a3 + 45), (v39 & 4) != 0) || (v39 & 0x40000) != 0)
      && (v39 & 0x10000) == 0 )
    {
      *(_DWORD *)a3 |= 0x40u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      if ( v7 )
        v40 = -__CFSHR__(*(_DWORD *)v7, 6);
      else
        v40 = 0;
      v41 = 185;
      v42 = __CFSHR__(*(_DWORD *)a3, 7);
    }
    else
    {
      *(_DWORD *)a3 |= 8u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x10u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      if ( v7 )
        v40 = -__CFSHR__(*(_DWORD *)v7, 5);
      else
        v40 = 0;
      v41 = 184;
      v42 = __CFSHR__(*(_DWORD *)a3, 4);
    }
    WPP_RECORDER_SF_qdqd(v40, v35, v37, v41, v45, (char)a3, -v42, (char)v7, v40);
LABEL_67:
    if ( v7 )
    {
      v43 = *((unsigned int *)v7 + 2);
      if ( (unsigned int)v43 >= *((_DWORD *)a2 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
        v43 = *((unsigned int *)v7 + 2);
      }
      *(_DWORD *)(160 * v43 + *((_QWORD *)a2 + 18) + 140) &= ~1u;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v35) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v35,
        7,
        186,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
    v3 = 1;
    goto LABEL_75;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v16, a2, v14, v15) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27, v28);
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
        v31 = CInputDest::CInputDest(v49, *((_QWORD *)v7 + 24), *((_DWORD *)v7 + 111), 1);
        CInputDest::operator=((__int64)v46, v31);
        CInputDest::SetEmpty((CInputDest *)v49);
      }
      else
      {
        CInputDest::operator=((__int64)v46, (__int64)v7 + 24);
      }
    }
    goto LABEL_37;
  }
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
    goto LABEL_37;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v30) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v30,
      7,
      179,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids,
      *((unsigned __int16 *)a3 + 86));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v24 = 180;
        goto LABEL_45;
      }
    }
  }
LABEL_75:
  CInputDest::SetEmpty((CInputDest *)v46);
  CInputDest::SetEmpty((CInputDest *)v48);
  return v3;
}
