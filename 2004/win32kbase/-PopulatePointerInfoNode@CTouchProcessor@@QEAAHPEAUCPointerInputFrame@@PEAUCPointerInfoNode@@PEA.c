/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019605C
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0196784 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0049A20 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C006E4BC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C007471C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01886B8 (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C018D920 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C019074C (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0194EC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C0195614 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C019C114 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019D2C4 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 *     WPP_RECORDER_SF_HL @ 0x1C019E584 (WPP_RECORDER_SF_HL.c)
 *     WPP_RECORDER_SF_L @ 0x1C019E65C (WPP_RECORDER_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C01C7FDC (ApiSetEditionGetInputDelegate.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01CB604 (ApiSetGetPTPShellTarget.c)
 *     ApiSetInputTransformOnInput @ 0x1C01CBE8C (ApiSetInputTransformOnInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  char v20; // r14
  unsigned int v21; // ecx
  int v22; // r15d
  CInputDest *v23; // rax
  int v24; // r12d
  unsigned int v25; // eax
  _OWORD *PTPShellTarget; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // r11d
  int v43; // ecx
  unsigned int v44; // eax
  __int128 v45; // xmm1
  __int64 InputDelegate; // rax
  __int64 v47; // rdx
  int v48; // edx
  int v50; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v51[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v52; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v53; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v54[7]; // [rsp+60h] [rbp-A0h] BYREF
  char v55; // [rsp+D0h] [rbp-30h]
  _OWORD v56[7]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v57[7]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v58[7]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v59[112]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v60[113]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v61; // [rsp+311h] [rbp+211h]
  __int16 v62; // [rsp+315h] [rbp+215h]
  char v63; // [rsp+317h] [rbp+217h]
  _BYTE v64[128]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v65[128]; // [rsp+3A0h] [rbp+2A0h] BYREF

  memset(v54, 0, sizeof(v54));
  v13 = 0;
  v53 = 0;
  v55 = 0;
  v51[0] = 0;
  v52 = 0;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  if ( (*((_DWORD *)a2 + 30) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  v14 = &WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v14,
      7,
      48,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    v14 = &WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids;
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
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids,
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
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
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
              (struct CInputDest *)v54,
              &v52,
              v51,
              &v53,
              a5,
              *((_WORD *)a3 + 86));
  if ( updated )
  {
    if ( !LODWORD(v54[0]) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_HL(updated, v17, v18, 53, v50, updated, *v15);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v19) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v19,
              7,
              54,
              (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
          }
        }
      }
      goto LABEL_31;
    }
    v20 = v51[0];
    v21 = *(_DWORD *)a3 & 0xFFFFFFFB | (v51[0] >> 2) & 4;
    *(_DWORD *)a3 = v21;
    if ( (v21 & 4) != 0 )
    {
      v61 = 0;
      v62 = 0;
      v63 = 0;
      memset(v60, 0, sizeof(v60));
      v22 = 1;
      v23 = (CInputDest *)v60;
      v24 = 0;
    }
    else
    {
      v23 = CInputDest::CInputDest((CInputDest *)v65, (const struct CInputDest *)v54);
      v22 = 0;
      v24 = 2;
    }
    CInputDest::operator=((__int64)a3 + 24, v23);
    if ( v24 )
      CInputDest::SetEmpty((CInputDest *)v65);
    if ( v22 )
      CInputDest::SetEmpty((CInputDest *)v60);
    *((_DWORD *)a3 + 36) = 0;
    if ( CInputDest::IsCompositionInput((CInputDest *)v54) )
    {
      *(_DWORD *)a3 |= 0x400u;
      *((_DWORD *)a3 + 1) |= 0x80u;
    }
    if ( v20 < 0 && gptiManipulationThread )
    {
      v25 = v53;
      *((_DWORD *)a3 + 1) |= 0x100u;
      *((_DWORD *)a3 + 87) = v25;
    }
    if ( (unsigned int)CPointerInfoNode::IsTouchpad(a3) )
    {
      PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v59);
      v27 = PTPShellTarget[1];
      v56[0] = *PTPShellTarget;
      v28 = PTPShellTarget[2];
      v56[1] = v27;
      v29 = PTPShellTarget[3];
      v56[2] = v28;
      v30 = PTPShellTarget[4];
      v56[3] = v29;
      v31 = PTPShellTarget[5];
      v56[4] = v30;
      v32 = PTPShellTarget[6];
      v56[5] = v31;
      v56[6] = v32;
      CInputDest::CInputDest((CInputDest *)v64, (const struct tagINPUTDEST *)v56);
      if ( CInputDest::operator==((unsigned int *)v54, (__int64)v64, v33, v34) )
      {
        if ( *((_DWORD *)a3 + 42) != 5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
        *(_DWORD *)a3 |= 0x500u;
        *((_DWORD *)a3 + 36) = 1;
      }
      CInputDest::SetEmpty((CInputDest *)v64);
    }
    if ( (v20 & 0x20) != 0 )
    {
      v39 = *(_DWORD *)a3 | 0x500;
      *((_DWORD *)a3 + 36) = 1;
      *(_DWORD *)a3 = v39;
      if ( (v20 & 0x40) != 0 )
        *(_DWORD *)a3 = v39 | 0x800;
    }
    CInputDest::operator=((__int64)a3 + 352, (__int64)v54);
    *((_QWORD *)a3 + 24) = CInputDest::GetWindowHandle((CInputDest *)v54);
    *((_DWORD *)a3 + 44) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a3 + 59) = 1;
    *((_DWORD *)a3 + 84) = CPointerInfoNode::ShouldForegroundActivate(a3) == 0;
    if ( (v20 & 1) != 0 )
      *((_DWORD *)a3 + 45) |= 1u;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v20 & 4) << 14) | ((v20 & 2) << 14);
    *((_DWORD *)a3 + 45) &= 0x7FE1F7u;
    v40 = (unsigned int)(*((_DWORD *)a3 + 42) - 2);
    if ( *((_DWORD *)a3 + 42) != 2 )
    {
      v40 = (unsigned int)(*((_DWORD *)a3 + 42) - 3);
      if ( *((_DWORD *)a3 + 42) == 3 )
      {
        *((_DWORD *)a3 + 66) &= 7u;
        *((_DWORD *)a3 + 67) &= 0xFu;
LABEL_59:
        *((_DWORD *)a3 + 64) = CTouchProcessor::GetButtonChange(v40, v52, *((_DWORD *)a3 + 45) & 0x1F0);
        if ( (v42 & 1) != 0 || (v42 & 0x20000) == 0 || (v43 = 1, (v42 & 2) == 0) )
          v43 = 0;
        v44 = v43 | *(_DWORD *)a3 & 0xFFFFFFFE;
        *(_DWORD *)a3 = v44;
        if ( v52 != v41 )
          *(_DWORD *)a3 = v44 & 0xFFFFFFFE;
        v45 = v54[5];
        if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v54[5], 12)) )
        {
          v57[0] = v54[0];
          v57[1] = v54[1];
          v57[2] = v54[2];
          v57[3] = v54[3];
          v57[4] = v54[4];
          v57[6] = v54[6];
          v57[5] = v54[5];
          InputDelegate = ApiSetEditionGetInputDelegate(v57);
          v45 = v54[5];
          if ( InputDelegate )
          {
            if ( (*((_DWORD *)a3 + 1) & 0x100) == 0 )
              *(_DWORD *)a3 |= 0x100000u;
          }
        }
        *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v20 & 8) << 11);
        if ( !CPointerInfoNode::IsForManipulationThread(a3) )
        {
          v47 = *((_QWORD *)a3 + 31);
          v58[0] = v54[0];
          v58[1] = v54[1];
          v58[2] = v54[2];
          v58[3] = v54[3];
          v58[4] = v54[4];
          v58[6] = v54[6];
          v58[5] = v45;
          if ( (unsigned int)ApiSetInputTransformOnInput(v58, v47, (char *)a3 + 160) )
            *((_DWORD *)a3 + 45) |= 0x400000u;
        }
        InputTraceLogging::Pointer::AssignPointerId(a2, (struct CPointerInfoNode *)((char *)a3 + 160));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v48) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v48,
            7,
            55,
            (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
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
    WPP_RECORDER_SF_L(updated, v17, 7, 51, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids, *v15);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      7,
      52,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
LABEL_76:
  CInputDest::SetEmpty((CInputDest *)v54);
  return v13;
}
