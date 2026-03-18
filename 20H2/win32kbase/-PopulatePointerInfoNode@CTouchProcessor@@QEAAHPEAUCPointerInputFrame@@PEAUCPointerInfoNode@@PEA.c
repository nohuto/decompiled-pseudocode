/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0193B2C
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0194254 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00294B0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C003339C (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00553BC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0186178 (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C018B400 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C018E22C (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0192990 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C01930E4 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C0199C14 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019ADC4 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 *     WPP_RECORDER_SF_HL @ 0x1C019C084 (WPP_RECORDER_SF_HL.c)
 *     WPP_RECORDER_SF_L @ 0x1C019C15C (WPP_RECORDER_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C01C5C5C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01C9284 (ApiSetGetPTPShellTarget.c)
 *     ApiSetInputTransformOnInput @ 0x1C01C9B0C (ApiSetInputTransformOnInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3,
        struct tagCHitTestState *a4,
        unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  void *v14; // rdx
  _WORD *v15; // r13
  unsigned __int16 updated; // ax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edx
  char v21; // r14
  unsigned int v22; // ecx
  int v23; // r15d
  CInputDest *v24; // rax
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  _OWORD *PTPShellTarget; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rcx
  int v47; // r8d
  int v48; // r11d
  int v49; // ecx
  unsigned int v50; // eax
  __int128 v51; // xmm1
  __int64 InputDelegate; // rax
  __int64 v53; // rdx
  int v55; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v56[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v57; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v58; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v59[7]; // [rsp+60h] [rbp-A0h] BYREF
  char v60; // [rsp+D0h] [rbp-30h]
  _OWORD v61[7]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v62[7]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v63[7]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v64[112]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v65[113]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v66; // [rsp+311h] [rbp+211h]
  __int16 v67; // [rsp+315h] [rbp+215h]
  char v68; // [rsp+317h] [rbp+217h]
  _BYTE v69[128]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v70[128]; // [rsp+3A0h] [rbp+2A0h] BYREF

  memset(v59, 0, sizeof(v59));
  v13 = 0;
  v58 = 0;
  v60 = 0;
  v56[0] = 0;
  v57 = 0;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  if ( (*((_DWORD *)a2 + 30) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  v14 = &WPP_50814762fbc63e38c7e5eacf83347307_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v14,
      7,
      48,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    v14 = &WPP_50814762fbc63e38c7e5eacf83347307_Traceguids;
  }
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 45) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v14,
        7,
        49,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids,
        *((_DWORD *)a3 + 43));
    }
    *((_DWORD *)a3 + 43) = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v14) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v14,
        7,
        50,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
LABEL_31:
    InputTraceLogging::Pointer::DropInput();
    goto LABEL_76;
  }
  v15 = (_WORD *)((char *)a3 + 160);
  this[2] = *(struct _KTHREAD **)(*((_QWORD *)a2 + 19) + 228LL);
  updated = CTouchProcessor::UpdateActivePointer(
              (CTouchProcessor *)this,
              a2,
              (struct CPointerInfoNode *)((char *)a3 + 160),
              a4,
              (struct CInputDest *)v59,
              &v57,
              v56,
              &v58,
              a5,
              *((_WORD *)a3 + 86));
  if ( updated )
  {
    if ( !LODWORD(v59[0]) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_HL(updated, v17, v18, 53, v55, updated, *v15);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v20) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v20,
              7,
              54,
              (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
          }
        }
      }
      goto LABEL_31;
    }
    v21 = v56[0];
    v22 = *(_DWORD *)a3 & 0xFFFFFFFB | (v56[0] >> 2) & 4;
    *(_DWORD *)a3 = v22;
    if ( (v22 & 4) != 0 )
    {
      v66 = 0;
      v67 = 0;
      v68 = 0;
      memset(v65, 0, sizeof(v65));
      v23 = 1;
      v24 = (CInputDest *)v65;
      v25 = 0;
    }
    else
    {
      v24 = CInputDest::CInputDest((CInputDest *)v70, (const struct CInputDest *)v59);
      v23 = 0;
      v25 = 2;
    }
    CInputDest::operator=((__int64)a3 + 24, v24);
    if ( v25 )
      CInputDest::SetEmpty((CInputDest *)v70, v26, v27, v28);
    if ( v23 )
      CInputDest::SetEmpty((CInputDest *)v65, v26, v27, v28);
    *((_DWORD *)a3 + 36) = 0;
    if ( CInputDest::IsCompositionInput((CInputDest *)v59) )
    {
      *(_DWORD *)a3 |= 0x400u;
      *((_DWORD *)a3 + 1) |= 0x80u;
    }
    if ( v21 < 0 && gptiManipulationThread )
    {
      v29 = v58;
      *((_DWORD *)a3 + 1) |= 0x100u;
      *((_DWORD *)a3 + 87) = v29;
    }
    if ( (unsigned int)CPointerInfoNode::IsTouchpad(a3) )
    {
      PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v64);
      v33 = PTPShellTarget[1];
      v61[0] = *PTPShellTarget;
      v34 = PTPShellTarget[2];
      v61[1] = v33;
      v35 = PTPShellTarget[3];
      v61[2] = v34;
      v36 = PTPShellTarget[4];
      v61[3] = v35;
      v37 = PTPShellTarget[5];
      v61[4] = v36;
      v38 = PTPShellTarget[6];
      v61[5] = v37;
      v61[6] = v38;
      CInputDest::CInputDest((CInputDest *)v69, (const struct tagINPUTDEST *)v61);
      if ( CInputDest::operator==((unsigned int *)v59, (__int64)v69, v39, v40) )
      {
        if ( *((_DWORD *)a3 + 42) != 5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43, v44);
        *(_DWORD *)a3 |= 0x500u;
        *((_DWORD *)a3 + 36) = 1;
      }
      CInputDest::SetEmpty((CInputDest *)v69, v41, v43, v44);
    }
    if ( (v21 & 0x20) != 0 )
    {
      v45 = *(_DWORD *)a3 | 0x500;
      *((_DWORD *)a3 + 36) = 1;
      *(_DWORD *)a3 = v45;
      if ( (v21 & 0x40) != 0 )
        *(_DWORD *)a3 = v45 | 0x800;
    }
    CInputDest::operator=((__int64)a3 + 352, (__int64)v59, v30, v31);
    *((_QWORD *)a3 + 24) = CInputDest::GetWindowHandle((CInputDest *)v59);
    *((_DWORD *)a3 + 44) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a3 + 59) = 1;
    *((_DWORD *)a3 + 84) = CPointerInfoNode::ShouldForegroundActivate(a3) == 0;
    if ( (v21 & 1) != 0 )
      *((_DWORD *)a3 + 45) |= 1u;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v21 & 4) << 14) | ((v21 & 2) << 14);
    *((_DWORD *)a3 + 45) &= 0x7FE1F7u;
    v46 = (unsigned int)(*((_DWORD *)a3 + 42) - 2);
    if ( *((_DWORD *)a3 + 42) != 2 )
    {
      v46 = (unsigned int)(*((_DWORD *)a3 + 42) - 3);
      if ( *((_DWORD *)a3 + 42) == 3 )
      {
        *((_DWORD *)a3 + 66) &= 7u;
        *((_DWORD *)a3 + 67) &= 0xFu;
LABEL_59:
        *((_DWORD *)a3 + 64) = CTouchProcessor::GetButtonChange(v46, v57, *((_DWORD *)a3 + 45) & 0x1F0);
        if ( (v48 & 1) != 0 || (v48 & 0x20000) == 0 || (v49 = 1, (v48 & 2) == 0) )
          v49 = 0;
        v50 = v49 | *(_DWORD *)a3 & 0xFFFFFFFE;
        *(_DWORD *)a3 = v50;
        if ( v57 != v47 )
          *(_DWORD *)a3 = v50 & 0xFFFFFFFE;
        v51 = v59[5];
        if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v59[5], 12)) )
        {
          v62[0] = v59[0];
          v62[1] = v59[1];
          v62[2] = v59[2];
          v62[3] = v59[3];
          v62[4] = v59[4];
          v62[6] = v59[6];
          v62[5] = v59[5];
          InputDelegate = ApiSetEditionGetInputDelegate(v62);
          v51 = v59[5];
          if ( InputDelegate )
          {
            if ( (*((_DWORD *)a3 + 1) & 0x100) == 0 )
              *(_DWORD *)a3 |= 0x100000u;
          }
        }
        *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v21 & 8) << 11);
        if ( !CPointerInfoNode::IsForManipulationThread(a3) )
        {
          v53 = *((_QWORD *)a3 + 31);
          v63[0] = v59[0];
          v63[1] = v59[1];
          v63[2] = v59[2];
          v63[3] = v59[3];
          v63[4] = v59[4];
          v63[6] = v59[6];
          v63[5] = v51;
          if ( (unsigned int)ApiSetInputTransformOnInput(v63, v53, (char *)a3 + 160) )
            *((_DWORD *)a3 + 45) |= 0x400000u;
        }
        InputTraceLogging::Pointer::AssignPointerId(a2, (struct CPointerInfoNode *)((char *)a3 + 160));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v17) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            7,
            55,
            (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
        }
        v13 = 1;
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
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_L(updated, v17, 7, 51, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids, *v15);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      7,
      52,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
LABEL_76:
  CInputDest::SetEmpty((CInputDest *)v59, v17, v18, v19);
  return v13;
}
