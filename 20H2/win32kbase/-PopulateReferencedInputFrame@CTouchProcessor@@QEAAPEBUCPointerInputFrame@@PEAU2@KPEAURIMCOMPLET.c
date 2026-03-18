/*
 * XREFs of ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0194254
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C01958FC (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C01967AC (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0033D14 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _HMObjectFromHandle @ 0x1C00870D0 (_HMObjectFromHandle.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C0125E10 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C0125E50 (EtwTraceEndPointerFrameCreation.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C018B400 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B660 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C018C3C8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0192990 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0192A14 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0193B2C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0195F50 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0196A54 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?Set@tagCHitTestState@@QEAAXPEAUCPointerInfoNode@@@Z @ 0x1C019724C (-Set@tagCHitTestState@@QEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0199AC8 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019A3D0 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019AA04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::PopulateReferencedInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        unsigned int a3,
        struct RIMCOMPLETEFRAME *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r13d
  __int64 v11; // rax
  unsigned int v12; // esi
  struct CPointerInfoNode *i; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // esi
  struct CPointerInfoNode *j; // rbx
  unsigned __int64 v18; // rcx
  struct tagCHitTestState *v19; // r9
  struct CPointerInputFrame *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  const struct CPointerInputFrame *v25; // r15
  CPointerInfoNode *v26; // rsi
  _DWORD *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 Queue; // rbx
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  struct CPointerQFrame *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  struct CPointerQFrame *v48; // rbx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // r8d
  __int64 v54; // rdx
  CTouchProcessor *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned int v62; // ebx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  struct CPointerInputFrame *v66; // rbx
  __int64 v67; // r8
  __int64 v68; // r9
  _DWORD v70[28]; // [rsp+30h] [rbp-D0h] BYREF
  char v71; // [rsp+A0h] [rbp-60h]
  int v72; // [rsp+A1h] [rbp-5Fh]
  __int16 v73; // [rsp+A5h] [rbp-5Bh]
  char v74; // [rsp+A7h] [rbp-59h]
  __int64 v75; // [rsp+A8h] [rbp-58h]
  _BYTE v76[128]; // [rsp+B0h] [rbp-50h] BYREF

  v72 = 0;
  v73 = 0;
  v74 = 0;
  memset(v70, 0, sizeof(v70));
  v10 = 0;
  v71 = 0;
  v75 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      7,
      46,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  *((_DWORD *)a2 + 30) |= 1u;
  if ( (*((_DWORD *)a2 + 30) & 0x100) != 0 )
  {
    v11 = *((unsigned int *)a2 + 12);
    v12 = 0;
    for ( i = (struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
          v12 < (unsigned int)v11;
          i = (struct CPointerInfoNode *)((char *)i + 480) )
    {
      v14 = *((_QWORD *)a2 + 17) + 480 * v11;
      if ( (unsigned __int64)i >= v14 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v7, v8, v9);
      tagCHitTestState::Set((tagCHitTestState *)v70, i);
      if ( v70[0] )
        break;
      v11 = *((unsigned int *)a2 + 12);
      ++v12;
    }
  }
  v15 = *((unsigned int *)a2 + 12);
  v16 = 0;
  for ( j = (struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
        v16 < (unsigned int)v15;
        j = (struct CPointerInfoNode *)((char *)j + 480) )
  {
    v18 = *((_QWORD *)a2 + 17) + 480 * v15;
    if ( (unsigned __int64)j >= v18 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v7, v8, v9);
    if ( (*(_DWORD *)j & 0x1000) != 0 )
    {
      InputTraceLogging::Pointer::DropInput();
      if ( (*(_DWORD *)j & 0x1000) != 0 )
        goto LABEL_21;
    }
    v19 = (struct tagCHitTestState *)v70;
    if ( !v70[0] )
      v19 = 0LL;
    if ( !(unsigned int)CTouchProcessor::PopulatePointerInfoNode(this, a2, j, v19, a3) )
    {
LABEL_21:
      CTouchProcessor::FreePointerInfoNodeInt(this, a2, v16, v9);
    }
    else if ( (*((_DWORD *)a2 + 30) & 0x100) != 0 && !v70[0] )
    {
      tagCHitTestState::Set((tagCHitTestState *)v70, j);
    }
    v15 = *((unsigned int *)a2 + 12);
    ++v16;
  }
  v20 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  v24 = *((unsigned int *)a2 + 12);
  *((_DWORD *)a2 + 30) &= ~1u;
  v25 = v20;
  v26 = (CPointerInfoNode *)*((_QWORD *)a2 + 17);
  if ( (_DWORD)v24 )
  {
    v27 = (_DWORD *)((char *)v26 + 352);
    do
    {
      if ( (unsigned __int64)v26 >= *((_QWORD *)a2 + 17) + 480 * v24 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v21, v22, v23);
      if ( (*(_DWORD *)v26 & 0x1000) == 0 && (unsigned int)CPointerInfoNode::IsValid(v26) )
      {
        memset(v76, 0, 113);
        if ( CPointerInfoNode::IsForManipulationThread(v26) )
        {
          Queue = -1LL;
        }
        else
        {
          if ( v27[23] )
          {
            v32 = *(_QWORD *)(HMObjectFromHandle(*((_QWORD *)v27 - 20), v28, v29, v30) + 16);
            if ( CInputDest::GetQueue((CInputDest *)v27, 2LL, v33, v34) != *(_QWORD *)(v32 + 432) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v29, v30);
          }
          Queue = CInputDest::GetQueue((CInputDest *)v27, 2LL, v29, v30);
          CInputDest::operator=((__int64)v76, (__int64)v27, v37, v38);
          if ( !Queue )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
        }
        v43 = CTouchProcessor::SetupQFrame(
                (CTouchProcessor *)(v25 != 0LL),
                a2,
                Queue,
                (const struct CInputDest *)v76,
                v25 != 0LL);
        v48 = v43;
        if ( !v25 )
        {
          v45 = *((unsigned int *)v43 + 35);
          if ( (v45 & 2) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46, v47);
        }
        v49 = *(_DWORD *)v48;
        if ( *(_DWORD *)v48 == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46, v47);
          v49 = *(_DWORD *)v48;
        }
        *(v27 - 86) = v49;
        ++*((_DWORD *)v48 + 34);
        CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, v48, v25, v26);
        CInputDest::SetEmpty((CInputDest *)v76, v50, v51, v52);
      }
      v24 = *((unsigned int *)a2 + 12);
      v26 = (CPointerInfoNode *)((char *)v26 + 480);
      v27 += 120;
      ++v10;
    }
    while ( v10 < (unsigned int)v24 );
  }
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a2, v25, 0LL);
  EtwTraceEndPointerFrameCommit(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), v53);
  EtwTraceEndPointerFrameCreation(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), 0);
  if ( v25 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v25);
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v56, v57);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v55, a2, v56, v57) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v60, v61);
  v62 = *((_DWORD *)a2 + 10);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, a2);
  v66 = CTouchProcessor::FindAndReferenceFrameById(this, v62, v63, v64);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v65) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v65,
      7,
      47,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  CInputDest::SetEmpty((CInputDest *)v70, v65, v67, v68);
  return v66;
}
