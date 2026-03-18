/*
 * XREFs of ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0196784
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0197E2C (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C0198CDC (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 * Callees:
 *     _HMObjectFromHandle @ 0x1C0023AC0 (_HMObjectFromHandle.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0071274 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C0128160 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C01281A0 (EtwTraceEndPointerFrameCreation.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C018D920 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018DB80 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C018E8E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0194EC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0194F44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019605C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0198480 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0198F84 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?Set@tagCHitTestState@@QEAAXPEAUCPointerInfoNode@@@Z @ 0x1C019977C (-Set@tagCHitTestState@@QEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C019BFC8 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019C8D0 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019CF04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 Queue; // rbx
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  struct CPointerQFrame *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  struct CPointerQFrame *v45; // rbx
  int v46; // eax
  int v47; // r8d
  __int64 v48; // rdx
  CTouchProcessor *v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int v56; // ebx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // edx
  struct CPointerInputFrame *v60; // rbx
  _DWORD v62[28]; // [rsp+30h] [rbp-D0h] BYREF
  char v63; // [rsp+A0h] [rbp-60h]
  int v64; // [rsp+A1h] [rbp-5Fh]
  __int16 v65; // [rsp+A5h] [rbp-5Bh]
  char v66; // [rsp+A7h] [rbp-59h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  _BYTE v68[128]; // [rsp+B0h] [rbp-50h] BYREF

  v64 = 0;
  v65 = 0;
  v66 = 0;
  memset(v62, 0, sizeof(v62));
  v10 = 0;
  v63 = 0;
  v67 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      7,
      46,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
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
      tagCHitTestState::Set((tagCHitTestState *)v62, i);
      if ( v62[0] )
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
    v19 = (struct tagCHitTestState *)v62;
    if ( !v62[0] )
      v19 = 0LL;
    if ( !(unsigned int)CTouchProcessor::PopulatePointerInfoNode(this, a2, j, v19, a3) )
    {
LABEL_21:
      CTouchProcessor::FreePointerInfoNodeInt(this, a2, v16, v9);
    }
    else if ( (*((_DWORD *)a2 + 30) & 0x100) != 0 && !v62[0] )
    {
      tagCHitTestState::Set((tagCHitTestState *)v62, j);
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
        memset(v68, 0, 113);
        if ( CPointerInfoNode::IsForManipulationThread(v26) )
        {
          Queue = -1LL;
        }
        else
        {
          if ( v27[23] )
          {
            v31 = *(_QWORD *)(HMObjectFromHandle(*((_QWORD *)v27 - 20)) + 16);
            if ( CInputDest::GetQueue((CInputDest *)v27, 2LL, v32, v33) != *(_QWORD *)(v31 + 424) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v28, v29);
          }
          Queue = CInputDest::GetQueue((CInputDest *)v27, 2LL, v28, v29);
          CInputDest::operator=((__int64)v68, (__int64)v27);
          if ( !Queue )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
        }
        v40 = CTouchProcessor::SetupQFrame(
                (CTouchProcessor *)(v25 != 0LL),
                a2,
                Queue,
                (const struct CInputDest *)v68,
                v25 != 0LL);
        v45 = v40;
        if ( !v25 )
        {
          v42 = *((unsigned int *)v40 + 35);
          if ( (v42 & 2) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43, v44);
        }
        v46 = *(_DWORD *)v45;
        if ( *(_DWORD *)v45 == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43, v44);
          v46 = *(_DWORD *)v45;
        }
        *(v27 - 86) = v46;
        ++*((_DWORD *)v45 + 34);
        CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, v45, v25, v26);
        CInputDest::SetEmpty((CInputDest *)v68);
      }
      v24 = *((unsigned int *)a2 + 12);
      v26 = (CPointerInfoNode *)((char *)v26 + 480);
      v27 += 120;
      ++v10;
    }
    while ( v10 < (unsigned int)v24 );
  }
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a2, v25, 0LL);
  EtwTraceEndPointerFrameCommit(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), v47);
  EtwTraceEndPointerFrameCreation(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), 0);
  if ( v25 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v25);
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50, v51);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v49, a2, v50, v51) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v54, v55);
  v56 = *((_DWORD *)a2 + 10);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, a2);
  v60 = CTouchProcessor::FindAndReferenceFrameById(this, v56, v57, v58);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v59) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v59,
      7,
      47,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInputDest::SetEmpty((CInputDest *)v62);
  return v60;
}
