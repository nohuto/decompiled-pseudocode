/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019BD4C
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C019C474 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C005D3F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C00635EC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00717D8 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C018E3B8 (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0193620 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C019644C (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C019ABC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C019B2FC (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C01A1E74 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01A3024 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 *     WPP_RECORDER_SF_HL @ 0x1C01A42E4 (WPP_RECORDER_SF_HL.c)
 *     WPP_RECORDER_SF_L @ 0x1C01A43BC (WPP_RECORDER_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C01CDF5C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01D1584 (ApiSetGetPTPShellTarget.c)
 *     ApiSetInputTransformOnInput @ 0x1C01D1E0C (ApiSetInputTransformOnInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3,
        struct tagCHitTestState *a4,
        unsigned int a5)
{
  __int64 v9; // rcx
  unsigned int v10; // edi
  void *v11; // rdx
  _WORD *v12; // r13
  unsigned __int16 updated; // ax
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  char v17; // r14
  unsigned int v18; // ecx
  int v19; // r15d
  CInputDest *v20; // rax
  int v21; // r12d
  unsigned int v22; // eax
  _OWORD *PTPShellTarget; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // r8d
  int v34; // r11d
  int v35; // ecx
  unsigned int v36; // eax
  __int128 v37; // xmm1
  __int64 InputDelegate; // rax
  __int64 v39; // rdx
  int v40; // edx
  int v42; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v43[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v44; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v45; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v46[7]; // [rsp+60h] [rbp-A0h] BYREF
  char v47; // [rsp+D0h] [rbp-30h]
  _OWORD v48[7]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v49[7]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v50[7]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v51[112]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v52[113]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v53; // [rsp+311h] [rbp+211h]
  __int16 v54; // [rsp+315h] [rbp+215h]
  char v55; // [rsp+317h] [rbp+217h]
  _BYTE v56[128]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v57[128]; // [rsp+3A0h] [rbp+2A0h] BYREF

  memset(v46, 0, sizeof(v46));
  v10 = 0;
  v45 = 0;
  v47 = 0;
  v43[0] = 0;
  v44 = 0;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  if ( (*((_DWORD *)a2 + 30) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  v11 = &WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v11,
      7,
      48,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    v11 = &WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids;
  }
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 45) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v11,
        7,
        49,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
        *((_DWORD *)a3 + 43));
    }
    *((_DWORD *)a3 + 43) = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v11,
        7,
        50,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
LABEL_31:
    InputTraceLogging::Pointer::DropInput();
    goto LABEL_76;
  }
  v12 = (_WORD *)((char *)a3 + 160);
  this[2] = *(struct _KTHREAD **)(*((_QWORD *)a2 + 19) + 228LL);
  updated = CTouchProcessor::UpdateActivePointer(
              (CTouchProcessor *)this,
              a2,
              (struct CPointerInfoNode *)((char *)a3 + 160),
              a4,
              (struct CInputDest *)v46,
              &v44,
              v43,
              &v45,
              a5,
              *((_WORD *)a3 + 86));
  if ( updated )
  {
    if ( !LODWORD(v46[0]) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_HL(updated, v14, v15, 53, v42, updated, *v12);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v16) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v16,
              7,
              54,
              (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
          }
        }
      }
      goto LABEL_31;
    }
    v17 = v43[0];
    v18 = *(_DWORD *)a3 & 0xFFFFFFFB | (v43[0] >> 2) & 4;
    *(_DWORD *)a3 = v18;
    if ( (v18 & 4) != 0 )
    {
      v53 = 0;
      v54 = 0;
      v55 = 0;
      memset(v52, 0, sizeof(v52));
      v19 = 1;
      v20 = (CInputDest *)v52;
      v21 = 0;
    }
    else
    {
      v20 = CInputDest::CInputDest((CInputDest *)v57, (const struct CInputDest *)v46);
      v19 = 0;
      v21 = 2;
    }
    CInputDest::operator=((__int64)a3 + 24, v20);
    if ( v21 )
      CInputDest::SetEmpty((CInputDest *)v57);
    if ( v19 )
      CInputDest::SetEmpty((CInputDest *)v52);
    *((_DWORD *)a3 + 36) = 0;
    if ( CInputDest::IsCompositionInput((CInputDest *)v46) )
    {
      *(_DWORD *)a3 |= 0x400u;
      *((_DWORD *)a3 + 1) |= 0x80u;
    }
    if ( v17 < 0 && gptiManipulationThread )
    {
      v22 = v45;
      *((_DWORD *)a3 + 1) |= 0x100u;
      *((_DWORD *)a3 + 87) = v22;
    }
    if ( (unsigned int)CPointerInfoNode::IsTouchpad(a3) )
    {
      PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v51);
      v24 = PTPShellTarget[1];
      v48[0] = *PTPShellTarget;
      v25 = PTPShellTarget[2];
      v48[1] = v24;
      v26 = PTPShellTarget[3];
      v48[2] = v25;
      v27 = PTPShellTarget[4];
      v48[3] = v26;
      v28 = PTPShellTarget[5];
      v48[4] = v27;
      v29 = PTPShellTarget[6];
      v48[5] = v28;
      v48[6] = v29;
      CInputDest::CInputDest((CInputDest *)v56, (const struct tagINPUTDEST *)v48);
      if ( CInputDest::operator==((unsigned int *)v46, (__int64)v56) )
      {
        if ( *((_DWORD *)a3 + 42) != 5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
        *(_DWORD *)a3 |= 0x500u;
        *((_DWORD *)a3 + 36) = 1;
      }
      CInputDest::SetEmpty((CInputDest *)v56);
    }
    if ( (v17 & 0x20) != 0 )
    {
      v31 = *(_DWORD *)a3 | 0x500;
      *((_DWORD *)a3 + 36) = 1;
      *(_DWORD *)a3 = v31;
      if ( (v17 & 0x40) != 0 )
        *(_DWORD *)a3 = v31 | 0x800;
    }
    CInputDest::operator=((__int64)a3 + 352, (__int64)v46);
    *((_QWORD *)a3 + 24) = CInputDest::GetWindowHandle((CInputDest *)v46);
    *((_DWORD *)a3 + 44) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a3 + 59) = 1;
    *((_DWORD *)a3 + 84) = CPointerInfoNode::ShouldForegroundActivate(a3) == 0;
    if ( (v17 & 1) != 0 )
      *((_DWORD *)a3 + 45) |= 1u;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v17 & 4) << 14) | ((v17 & 2) << 14);
    *((_DWORD *)a3 + 45) &= 0x7FE1F7u;
    v32 = (unsigned int)(*((_DWORD *)a3 + 42) - 2);
    if ( *((_DWORD *)a3 + 42) != 2 )
    {
      v32 = (unsigned int)(*((_DWORD *)a3 + 42) - 3);
      if ( *((_DWORD *)a3 + 42) == 3 )
      {
        *((_DWORD *)a3 + 66) &= 7u;
        *((_DWORD *)a3 + 67) &= 0xFu;
LABEL_59:
        *((_DWORD *)a3 + 64) = CTouchProcessor::GetButtonChange(v32, v44, *((_DWORD *)a3 + 45) & 0x1F0);
        if ( (v34 & 1) != 0 || (v34 & 0x20000) == 0 || (v35 = 1, (v34 & 2) == 0) )
          v35 = 0;
        v36 = v35 | *(_DWORD *)a3 & 0xFFFFFFFE;
        *(_DWORD *)a3 = v36;
        if ( v44 != v33 )
          *(_DWORD *)a3 = v36 & 0xFFFFFFFE;
        v37 = v46[5];
        if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v46[5], 12)) )
        {
          v49[0] = v46[0];
          v49[1] = v46[1];
          v49[2] = v46[2];
          v49[3] = v46[3];
          v49[4] = v46[4];
          v49[6] = v46[6];
          v49[5] = v46[5];
          InputDelegate = ApiSetEditionGetInputDelegate(v49);
          v37 = v46[5];
          if ( InputDelegate )
          {
            if ( (*((_DWORD *)a3 + 1) & 0x100) == 0 )
              *(_DWORD *)a3 |= 0x100000u;
          }
        }
        *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v17 & 8) << 11);
        if ( !CPointerInfoNode::IsForManipulationThread(a3) )
        {
          v39 = *((_QWORD *)a3 + 31);
          v50[0] = v46[0];
          v50[1] = v46[1];
          v50[2] = v46[2];
          v50[3] = v46[3];
          v50[4] = v46[4];
          v50[6] = v46[6];
          v50[5] = v37;
          if ( (unsigned int)ApiSetInputTransformOnInput(v50, v39, (char *)a3 + 160) )
            *((_DWORD *)a3 + 45) |= 0x400000u;
        }
        InputTraceLogging::Pointer::AssignPointerId(a2, (struct CPointerInfoNode *)((char *)a3 + 160));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v40) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v40,
            7,
            55,
            (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
        }
        v10 = 1;
        goto LABEL_76;
      }
      if ( *((_DWORD *)a3 + 42) != 5 )
        goto LABEL_59;
    }
    *((_DWORD *)a3 + 67) &= 7u;
    *((_DWORD *)a3 + 66) = 0;
    goto LABEL_59;
  }
  if ( (*((_DWORD *)a3 + 45) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 24) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_76;
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_L(updated, v14, 7, 51, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids, *v12);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      7,
      52,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
LABEL_76:
  CInputDest::SetEmpty((CInputDest *)v46);
  return v10;
}
