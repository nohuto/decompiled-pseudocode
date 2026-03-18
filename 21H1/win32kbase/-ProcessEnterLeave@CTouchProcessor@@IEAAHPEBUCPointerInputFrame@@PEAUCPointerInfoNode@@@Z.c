/*
 * XREFs of ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019D1D4
 * Callers:
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C019DC74 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019E170 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019F5D4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00717D8 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0188DB0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0193D54 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C019ABC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_qdqd @ 0x1C01A4D6C (WPP_RECORDER_SF_qdqd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ProcessEnterLeave(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v3; // ebx
  struct CPointerInfoNode *v7; // rdi
  int v8; // edx
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // rcx
  CTouchProcessor *v11; // rcx
  __int64 v12; // rcx
  int v13; // edx
  int v14; // edx
  PDEVICE_OBJECT v15; // rcx
  int v16; // r9d
  __int64 v17; // rcx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  int v19; // edx
  __m128i *v20; // rax
  __m128i *v21; // rax
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // eax
  int v26; // ecx
  int v27; // r9d
  bool v28; // cf
  __int64 v29; // rax
  int v31; // [rsp+20h] [rbp-E0h]
  unsigned int v32[28]; // [rsp+50h] [rbp-B0h] BYREF
  char v33; // [rsp+C0h] [rbp-40h]
  _BYTE v34[128]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v35[8]; // [rsp+150h] [rbp+50h] BYREF
  __m128i v36[8]; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  v7 = 0LL;
  memset(v34, 0, 113);
  memset(v32, 0, sizeof(v32));
  v33 = 0;
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
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  v11 = (CTouchProcessor *)*(unsigned int *)a3;
  if ( (*(_DWORD *)a3 & 0x400) == 0 && (*(_DWORD *)a3 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    v11 = (CTouchProcessor *)*(unsigned int *)a3;
  }
  if ( ((unsigned __int16)v11 & 0x400) == 0 && !*((_DWORD *)a3 + 6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  if ( !a2 )
  {
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v13,
          7,
          176,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v16 = 177;
LABEL_45:
            LOBYTE(v14) = 5;
            WPP_RECORDER_SF_(
              v15->DeviceExtension,
              v14,
              7,
              v16,
              (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
            goto LABEL_75;
          }
        }
      }
      goto LABEL_75;
    }
LABEL_37:
    if ( (*(_DWORD *)a3 & 0x400) != 0 )
    {
      v21 = CInputDest::CInputDest(v36, *((_QWORD *)a3 + 24), *((_DWORD *)a3 + 111), 1);
      CInputDest::operator=((__int64)v34, v21);
      CInputDest::SetEmpty((CInputDest *)v36);
    }
    else
    {
      CInputDest::operator=((__int64)v34, (__int64)a3 + 24);
    }
    if ( CInputDest::operator==(v32, (__int64)v34) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v22,
          7,
          180,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v16 = 181;
            goto LABEL_45;
          }
        }
      }
      goto LABEL_75;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v22,
        7,
        182,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
    if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
      && ((v25 = *((_DWORD *)a3 + 45), (v25 & 4) != 0) || (v25 & 0x40000) != 0)
      && (v25 & 0x10000) == 0 )
    {
      *(_DWORD *)a3 |= 0x40u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      if ( v7 )
        v26 = -__CFSHR__(*(_DWORD *)v7, 6);
      else
        v26 = 0;
      v27 = 184;
      v28 = __CFSHR__(*(_DWORD *)a3, 7);
    }
    else
    {
      *(_DWORD *)a3 |= 8u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x10u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      if ( v7 )
        v26 = -__CFSHR__(*(_DWORD *)v7, 5);
      else
        v26 = 0;
      v27 = 183;
      v28 = __CFSHR__(*(_DWORD *)a3, 4);
    }
    WPP_RECORDER_SF_qdqd(v26, v22, v24, v27, v31, (char)a3, -v28, (char)v7, v26);
LABEL_67:
    if ( v7 )
    {
      v29 = *((unsigned int *)v7 + 2);
      if ( (unsigned int)v29 >= *((_DWORD *)a2 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
        v29 = *((unsigned int *)v7 + 2);
      }
      *(_DWORD *)(160 * v29 + *((_QWORD *)a2 + 18) + 140) &= ~1u;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v22) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v22,
        7,
        185,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
    v3 = 1;
    goto LABEL_75;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v11, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
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
        v20 = CInputDest::CInputDest(v35, *((_QWORD *)v7 + 24), *((_DWORD *)v7 + 111), 1);
        CInputDest::operator=((__int64)v32, v20);
        CInputDest::SetEmpty((CInputDest *)v35);
      }
      else
      {
        CInputDest::operator=((__int64)v32, (__int64)v7 + 24);
      }
    }
    goto LABEL_37;
  }
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
    goto LABEL_37;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v19,
      7,
      178,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
      *((unsigned __int16 *)a3 + 86));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = 179;
        goto LABEL_45;
      }
    }
  }
LABEL_75:
  CInputDest::SetEmpty((CInputDest *)v32);
  CInputDest::SetEmpty((CInputDest *)v34);
  return v3;
}
