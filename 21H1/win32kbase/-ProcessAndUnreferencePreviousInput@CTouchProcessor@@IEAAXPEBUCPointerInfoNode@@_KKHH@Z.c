/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C019CCB8
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019F5D4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C005D3F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0188DB0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0189128 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0195B88 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0196198 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2CC8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessAndUnreferencePreviousInput(
        CTouchProcessor *this,
        const struct CPointerInfoNode *a2,
        unsigned int *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  char v6; // di
  const struct CPointerInfoNode *v8; // rsi
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  int v13; // ebx
  const struct CPointerInputFrame *v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  int v17; // eax
  __m128i *v18; // rax
  int v19; // ebx
  CInputDest *v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  char v23; // di
  __m128i *v24; // rax
  CInputDest *v25; // rax
  int v26; // [rsp+20h] [rbp-E0h]
  _BYTE v28[128]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v29[8]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v30[8]; // [rsp+150h] [rbp+50h] BYREF

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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  memset(v28, 0, 113);
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
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 200;
LABEL_48:
          LOBYTE(v10) = 5;
          WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
        }
      }
    }
  }
  else if ( a3 )
  {
    v13 = 0;
    v14 = CTouchProcessor::ReferenceFrame(this, a3[7]);
    if ( !v14 )
      goto LABEL_43;
    v16 = (_DWORD *)(*((_QWORD *)v14 + 17) + 480LL * a3[8]);
    if ( (*v16 & 0x80u) == 0 )
    {
      v13 = 1;
      *v16 |= 0x80u;
    }
    CTouchProcessor::UnreferenceFrame(this, v14);
    if ( v13 )
    {
      v17 = *(_DWORD *)v8;
      if ( (*(_DWORD *)v8 & 0x1000) == 0 )
      {
        if ( (v17 & 8) != 0 )
        {
          if ( (v17 & 0x400) != 0 )
          {
            v18 = CInputDest::CInputDest(v29, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
            v6 = 1;
          }
          else
          {
            v18 = (__m128i *)CInputDest::CInputDest(
                               (CInputDest *)v30,
                               (const struct CPointerInfoNode *)((char *)v8 + 24));
            v6 = 2;
          }
          CInputDest::operator=((__int64)v28, (__int64)v18);
          if ( (v6 & 2) != 0 )
          {
            v6 &= ~2u;
            CInputDest::SetEmpty((CInputDest *)v30);
          }
          if ( (v6 & 1) != 0 )
          {
            v6 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v29);
          }
          v19 = -__CFSHR__(*(_DWORD *)v8, 7);
          v20 = CInputDest::CInputDest((CInputDest *)v29, (const struct CInputDest *)v28);
          v26 = v19;
          v21 = a4;
          CTouchProcessor::GenerateWindowLeaveMessage((PDEVICE_OBJECT)this, (unsigned __int64)a3, v20, a4, v26, a5, a6);
          v17 = *(_DWORD *)v8;
        }
        else
        {
          v21 = a4;
        }
        if ( (v17 & 0x40) != 0 )
        {
          if ( (v17 & 0x400) != 0
            && *((_DWORD *)v8 + 111)
            && !CInputDest::IsEqualByWindowHandle((__int64)v8 + 352, *((_QWORD *)v8 + 24), 0) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
          }
          if ( (*(_DWORD *)v8 & 0x400) != 0 )
          {
            v23 = v6 | 4;
            v24 = CInputDest::CInputDest(v30, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
          }
          else
          {
            v23 = v6 | 8;
            v24 = (__m128i *)CInputDest::CInputDest(
                               (CInputDest *)v29,
                               (const struct CPointerInfoNode *)((char *)v8 + 24));
          }
          CInputDest::operator=((__int64)v28, (__int64)v24);
          if ( (v23 & 8) != 0 )
          {
            v23 &= ~8u;
            CInputDest::SetEmpty((CInputDest *)v29);
          }
          if ( (v23 & 4) != 0 )
            CInputDest::SetEmpty((CInputDest *)v30);
          v25 = CInputDest::CInputDest((CInputDest *)v29, (const struct CInputDest *)v28);
          CTouchProcessor::GenerateRoutedAwayMessages((PDEVICE_OBJECT)this, (unsigned __int64)a3, v25, v21, a5, a6);
        }
      }
      CTouchProcessor::UnreferenceMsgData(this, a3, 1LL);
    }
    else
    {
LABEL_43:
      if ( (a3[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 203;
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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 202;
        goto LABEL_48;
      }
    }
  }
  CInputDest::SetEmpty((CInputDest *)v28);
}
