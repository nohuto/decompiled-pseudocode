/*
 * XREFs of ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C019C474
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C019DB1C (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C019E9CC (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 * Callees:
 *     _HMObjectFromHandle @ 0x1C000F2B0 (_HMObjectFromHandle.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00658A4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C012E150 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C012E190 (EtwTraceEndPointerFrameCreation.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0193620 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0193880 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01945E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C019ABC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019BD4C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019E170 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C019EC74 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?Set@tagCHitTestState@@QEAAXPEAUCPointerInfoNode@@@Z @ 0x1C019F46C (-Set@tagCHitTestState@@QEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C01A1D28 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01A2630 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::PopulateReferencedInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        unsigned int a3,
        struct RIMCOMPLETEFRAME *a4)
{
  int v7; // edx
  unsigned int v8; // r13d
  __int64 v9; // rax
  unsigned int v10; // esi
  struct CPointerInfoNode *i; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // esi
  struct CPointerInfoNode *j; // rbx
  unsigned __int64 v16; // rcx
  struct tagCHitTestState *v17; // r9
  struct CPointerInputFrame *v18; // rax
  __int64 v19; // rcx
  const struct CPointerInputFrame *v20; // r15
  CPointerInfoNode *v21; // rsi
  _DWORD *v22; // r14
  unsigned __int64 Queue; // rbx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct CPointerQFrame *v27; // rax
  __int64 v28; // rcx
  struct CPointerQFrame *v29; // rbx
  int v30; // eax
  int v31; // r8d
  CTouchProcessor *v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // ebx
  int v35; // edx
  struct CPointerInputFrame *v36; // rbx
  _DWORD v38[28]; // [rsp+30h] [rbp-D0h] BYREF
  char v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+A1h] [rbp-5Fh]
  __int16 v41; // [rsp+A5h] [rbp-5Bh]
  char v42; // [rsp+A7h] [rbp-59h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  _BYTE v44[128]; // [rsp+B0h] [rbp-50h] BYREF

  v40 = 0;
  v41 = 0;
  v42 = 0;
  memset(v38, 0, sizeof(v38));
  v8 = 0;
  v39 = 0;
  v43 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      7,
      46,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  *((_DWORD *)a2 + 30) |= 1u;
  if ( (*((_DWORD *)a2 + 30) & 0x100) != 0 )
  {
    v9 = *((unsigned int *)a2 + 12);
    v10 = 0;
    for ( i = (struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
          v10 < (unsigned int)v9;
          i = (struct CPointerInfoNode *)((char *)i + 480) )
    {
      v12 = *((_QWORD *)a2 + 17) + 480 * v9;
      if ( (unsigned __int64)i >= v12 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
      tagCHitTestState::Set((tagCHitTestState *)v38, i);
      if ( v38[0] )
        break;
      v9 = *((unsigned int *)a2 + 12);
      ++v10;
    }
  }
  v13 = *((unsigned int *)a2 + 12);
  v14 = 0;
  for ( j = (struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
        v14 < (unsigned int)v13;
        j = (struct CPointerInfoNode *)((char *)j + 480) )
  {
    v16 = *((_QWORD *)a2 + 17) + 480 * v13;
    if ( (unsigned __int64)j >= v16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
    if ( (*(_DWORD *)j & 0x1000) != 0 )
    {
      InputTraceLogging::Pointer::DropInput();
      if ( (*(_DWORD *)j & 0x1000) != 0 )
        goto LABEL_21;
    }
    v17 = (struct tagCHitTestState *)v38;
    if ( !v38[0] )
      v17 = 0LL;
    if ( !(unsigned int)CTouchProcessor::PopulatePointerInfoNode(this, a2, j, v17, a3) )
    {
LABEL_21:
      CTouchProcessor::FreePointerInfoNodeInt(this, a2, v14);
    }
    else if ( (*((_DWORD *)a2 + 30) & 0x100) != 0 && !v38[0] )
    {
      tagCHitTestState::Set((tagCHitTestState *)v38, j);
    }
    v13 = *((unsigned int *)a2 + 12);
    ++v14;
  }
  v18 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  v19 = *((unsigned int *)a2 + 12);
  *((_DWORD *)a2 + 30) &= ~1u;
  v20 = v18;
  v21 = (CPointerInfoNode *)*((_QWORD *)a2 + 17);
  if ( (_DWORD)v19 )
  {
    v22 = (_DWORD *)((char *)v21 + 352);
    do
    {
      if ( (unsigned __int64)v21 >= *((_QWORD *)a2 + 17) + 480 * v19 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
      if ( (*(_DWORD *)v21 & 0x1000) == 0 && (unsigned int)CPointerInfoNode::IsValid(v21) )
      {
        memset(v44, 0, 113);
        if ( CPointerInfoNode::IsForManipulationThread(v21) )
        {
          Queue = -1LL;
        }
        else
        {
          if ( v22[23] )
          {
            v24 = *(_QWORD *)(HMObjectFromHandle(*((_QWORD *)v22 - 20)) + 16);
            if ( CInputDest::GetQueue((CInputDest *)v22, 2) != *(_QWORD *)(v24 + 424) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
          }
          Queue = CInputDest::GetQueue((CInputDest *)v22, 2);
          CInputDest::operator=((__int64)v44, (__int64)v22);
          if ( !Queue )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
        }
        v27 = CTouchProcessor::SetupQFrame(
                (CTouchProcessor *)(v20 != 0LL),
                a2,
                Queue,
                (const struct CInputDest *)v44,
                v20 != 0LL);
        v29 = v27;
        if ( !v20 )
        {
          v28 = *((unsigned int *)v27 + 35);
          if ( (v28 & 2) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
        }
        v30 = *(_DWORD *)v29;
        if ( *(_DWORD *)v29 == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
          v30 = *(_DWORD *)v29;
        }
        *(v22 - 86) = v30;
        ++*((_DWORD *)v29 + 34);
        CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, v29, v20, v21);
        CInputDest::SetEmpty((CInputDest *)v44);
      }
      v19 = *((unsigned int *)a2 + 12);
      v21 = (CPointerInfoNode *)((char *)v21 + 480);
      v22 += 120;
      ++v8;
    }
    while ( v8 < (unsigned int)v19 );
  }
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a2, v20, 0LL);
  EtwTraceEndPointerFrameCommit(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), v31);
  EtwTraceEndPointerFrameCreation(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), 0);
  if ( v20 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v20);
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v32, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
  v34 = *((_DWORD *)a2 + 10);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, a2);
  v36 = CTouchProcessor::FindAndReferenceFrameById(this, v34);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v35) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v35,
      7,
      47,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInputDest::SetEmpty((CInputDest *)v38);
  return v36;
}
