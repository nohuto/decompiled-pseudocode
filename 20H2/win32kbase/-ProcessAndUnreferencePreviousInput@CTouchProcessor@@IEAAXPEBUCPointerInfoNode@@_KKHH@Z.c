/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0194A98
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01973B4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00294B0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0180B70 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0180EE8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C018D968 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C018DF78 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0196650 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A750 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AA68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessAndUnreferencePreviousInput(
        CTouchProcessor *this,
        const struct CPointerInfoNode *a2,
        unsigned int *a3,
        __int64 a4,
        int a5,
        int a6)
{
  char v6; // di
  const struct CPointerInfoNode *v8; // rsi
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  int v12; // ebx
  const struct CPointerInputFrame *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  int v16; // eax
  __m128i *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  CInputDest *v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // di
  __m128i *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  CInputDest *v37; // rax
  int v38; // [rsp+20h] [rbp-E0h]
  unsigned int v39; // [rsp+40h] [rbp-C0h]
  _BYTE v40[128]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v41[8]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v42[8]; // [rsp+150h] [rbp+50h] BYREF

  v39 = a4;
  v6 = 0;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      198,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  memset(v40, 0, 113);
  if ( (*((_DWORD *)v8 + 45) & 1) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        7,
        199,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v11 = 200;
LABEL_48:
          LOBYTE(a2) = 5;
          WPP_RECORDER_SF_(
            v10->DeviceExtension,
            (_DWORD)a2,
            7,
            v11,
            (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
        }
      }
    }
  }
  else if ( a3 )
  {
    v12 = 0;
    v13 = CTouchProcessor::ReferenceFrame(this, a3[7]);
    if ( !v13 )
      goto LABEL_43;
    v15 = (_DWORD *)(*((_QWORD *)v13 + 17) + 480LL * a3[8]);
    if ( (*v15 & 0x80u) == 0 )
    {
      v12 = 1;
      *v15 |= 0x80u;
    }
    CTouchProcessor::UnreferenceFrame(this, v13);
    if ( v12 )
    {
      v16 = *(_DWORD *)v8;
      if ( (*(_DWORD *)v8 & 0x1000) == 0 )
      {
        if ( (v16 & 8) != 0 )
        {
          if ( (v16 & 0x400) != 0 )
          {
            v17 = CInputDest::CInputDest(v41, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
            v6 = 1;
          }
          else
          {
            v17 = (__m128i *)CInputDest::CInputDest(
                               (CInputDest *)v42,
                               (const struct CPointerInfoNode *)((char *)v8 + 24));
            v6 = 2;
          }
          CInputDest::operator=((__int64)v40, (__int64)v17, v18, v19);
          if ( (v6 & 2) != 0 )
          {
            v6 &= ~2u;
            CInputDest::SetEmpty((CInputDest *)v42, v20, v21, v22);
          }
          if ( (v6 & 1) != 0 )
          {
            v6 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v41, v20, v21, v22);
          }
          v23 = -__CFSHR__(*(_DWORD *)v8, 7);
          v24 = CInputDest::CInputDest((CInputDest *)v41, (const struct CInputDest *)v40);
          v38 = v23;
          v25 = v39;
          CTouchProcessor::GenerateWindowLeaveMessage((PDEVICE_OBJECT)this, (__int64)a3, v24, v39, v38, a5, a6);
          v16 = *(_DWORD *)v8;
        }
        else
        {
          v25 = v39;
        }
        if ( (v16 & 0x40) != 0 )
        {
          if ( (v16 & 0x400) != 0
            && *((_DWORD *)v8 + 111)
            && !CInputDest::IsEqualByWindowHandle((__int64)v8 + 352, *((_QWORD *)v8 + 24), 0) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
          }
          if ( (*(_DWORD *)v8 & 0x400) != 0 )
          {
            v30 = v6 | 4;
            v31 = CInputDest::CInputDest(v42, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
          }
          else
          {
            v30 = v6 | 8;
            v31 = (__m128i *)CInputDest::CInputDest(
                               (CInputDest *)v41,
                               (const struct CPointerInfoNode *)((char *)v8 + 24));
          }
          CInputDest::operator=((__int64)v40, (__int64)v31, v32, v33);
          if ( (v30 & 8) != 0 )
          {
            v30 &= ~8u;
            CInputDest::SetEmpty((CInputDest *)v41, v34, v35, v36);
          }
          if ( (v30 & 4) != 0 )
            CInputDest::SetEmpty((CInputDest *)v42, v34, v35, v36);
          v37 = CInputDest::CInputDest((CInputDest *)v41, (const struct CInputDest *)v40);
          CTouchProcessor::GenerateRoutedAwayMessages((PDEVICE_OBJECT)this, (__int64)a3, v37, v25, a5, a6);
        }
      }
      CTouchProcessor::UnreferenceMsgData(this, a3, 1LL);
    }
    else
    {
LABEL_43:
      if ( (a3[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, a2, a3, a4);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 203;
        goto LABEL_48;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      7,
      201,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 202;
        goto LABEL_48;
      }
    }
  }
  CInputDest::SetEmpty((CInputDest *)v40, (__int64)a2, (__int64)a3, a4);
}
