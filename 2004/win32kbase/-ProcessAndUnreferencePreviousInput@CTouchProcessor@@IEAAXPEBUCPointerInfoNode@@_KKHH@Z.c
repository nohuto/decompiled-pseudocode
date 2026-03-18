/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0196FC8
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01998E4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0049A20 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01830B0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0183428 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C018FE88 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0190498 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0198B80 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019CF68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v10; // rdx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  int v13; // ebx
  const struct CPointerInputFrame *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rdx
  int v19; // eax
  __m128i *v20; // rax
  int v21; // ebx
  CInputDest *v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // di
  __m128i *v29; // rax
  CInputDest *v30; // rax
  int v31; // [rsp+20h] [rbp-E0h]
  _BYTE v33[128]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v34[8]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v35[8]; // [rsp+150h] [rbp+50h] BYREF

  v6 = 0;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      199,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  memset(v33, 0, 113);
  if ( (*((_DWORD *)v8 + 45) & 1) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        7,
        200,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 201;
LABEL_48:
          LOBYTE(v10) = 5;
          WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
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
    v18 = (_DWORD *)(*((_QWORD *)v14 + 17) + 480LL * a3[8]);
    if ( (*v18 & 0x80u) == 0 )
    {
      v13 = 1;
      *v18 |= 0x80u;
    }
    CTouchProcessor::UnreferenceFrame(this, v14);
    if ( v13 )
    {
      v19 = *(_DWORD *)v8;
      if ( (*(_DWORD *)v8 & 0x1000) == 0 )
      {
        if ( (v19 & 8) != 0 )
        {
          if ( (v19 & 0x400) != 0 )
          {
            v20 = CInputDest::CInputDest(v34, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
            v6 = 1;
          }
          else
          {
            v20 = (__m128i *)CInputDest::CInputDest(
                               (CInputDest *)v35,
                               (const struct CPointerInfoNode *)((char *)v8 + 24));
            v6 = 2;
          }
          CInputDest::operator=((__int64)v33, (__int64)v20);
          if ( (v6 & 2) != 0 )
          {
            v6 &= ~2u;
            CInputDest::SetEmpty((CInputDest *)v35);
          }
          if ( (v6 & 1) != 0 )
          {
            v6 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v34);
          }
          v21 = -__CFSHR__(*(_DWORD *)v8, 7);
          v22 = CInputDest::CInputDest((CInputDest *)v34, (const struct CInputDest *)v33);
          v31 = v21;
          v23 = a4;
          CTouchProcessor::GenerateWindowLeaveMessage((PDEVICE_OBJECT)this, (unsigned __int64)a3, v22, a4, v31, a5, a6);
          v19 = *(_DWORD *)v8;
        }
        else
        {
          v23 = a4;
        }
        if ( (v19 & 0x40) != 0 )
        {
          if ( (v19 & 0x400) != 0
            && *((_DWORD *)v8 + 111)
            && !CInputDest::IsEqualByWindowHandle((__int64)v8 + 352, *((_QWORD *)v8 + 24), 0) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26, v27);
          }
          if ( (*(_DWORD *)v8 & 0x400) != 0 )
          {
            v28 = v6 | 4;
            v29 = CInputDest::CInputDest(v35, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
          }
          else
          {
            v28 = v6 | 8;
            v29 = (__m128i *)CInputDest::CInputDest(
                               (CInputDest *)v34,
                               (const struct CPointerInfoNode *)((char *)v8 + 24));
          }
          CInputDest::operator=((__int64)v33, (__int64)v29);
          if ( (v28 & 8) != 0 )
          {
            v28 &= ~8u;
            CInputDest::SetEmpty((CInputDest *)v34);
          }
          if ( (v28 & 4) != 0 )
            CInputDest::SetEmpty((CInputDest *)v35);
          v30 = CInputDest::CInputDest((CInputDest *)v34, (const struct CInputDest *)v33);
          CTouchProcessor::GenerateRoutedAwayMessages((PDEVICE_OBJECT)this, (unsigned __int64)a3, v30, v23, a5, a6);
        }
      }
      CTouchProcessor::UnreferenceMsgData(this, a3, 1LL);
    }
    else
    {
LABEL_43:
      if ( (a3[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v10, v16, v17);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 204;
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
      202,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
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
  CInputDest::SetEmpty((CInputDest *)v33);
}
