/*
 * XREFs of ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18017E1F4
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x180016DB0 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800DF980 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18017C5D8 (-Insert@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV-$ComPtr@VCManipulatio.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18017D174 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x18017E4E0 (-QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x18017E588 (-QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x18017EC70 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x1801813A4 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18026BB8C (-IsVailContainer@@YA_NXZ.c)
 */

__int64 __fastcall CManipulationManager::ProcessManipulationThreadCallbackInput(
        struct tagMANIPULATION_INPUT_INFO *a1,
        CManipulationManager *this)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r15d
  int v6; // eax
  __int64 v7; // rcx
  struct CManipulationFrame *v8; // rbx
  LARGE_INTEGER v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // [rsp+28h] [rbp-18h]
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-10h] BYREF
  struct CManipulationFrame *v19; // [rsp+80h] [rbp+40h] BYREF
  struct CManipulationFrame *v20; // [rsp+90h] [rbp+50h] BYREF
  struct CManipulationFrame *v21; // [rsp+98h] [rbp+58h] BYREF

  v19 = 0LL;
  if ( !a1 )
    goto LABEL_22;
  v4 = *((_QWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 42);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &MANIPULATION_FRAME_RECEIVED,
      v5,
      *((_DWORD *)a1 + 37));
  InputTraceLogging::GestureTargeting::QueueFrame(v4, *(_QWORD *)a1, v5, *((_DWORD *)a1 + 37));
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v19);
  v6 = CManipulationFrame::Create(a1, &v19);
  if ( v6 < 0 )
  {
    v17 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x16Du);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    v8 = v19;
    v9 = PerformanceCount;
    *(LARGE_INTEGER *)((char *)v8 + (IsVailContainer() ? 0x48 : 0) + 72) = v9;
    InputTraceLogging::TelemetryDebug::GestureTargeting::QueueFrame((struct CManipulationFrame *)((char *)v8 + 32));
    v21 = v8;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v21);
    v20 = v8;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v20);
    v12 = CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(v11, v10, (__int64 *)&v20);
    Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v21);
    if ( v12 < 0 )
    {
      v17 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x175u);
    }
    else
    {
      if ( GetCurrentThreadId() == CManipulationManager::s_dwManipulationThreadId && this )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
          McTemplateU0qq_EventWriteTransfer(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_FRAME_QUEUED,
            v5,
            *((_DWORD *)a1 + 37));
        CManipulationManager::OnInput(this);
        goto LABEL_22;
      }
      if ( SetEvent(qword_1803D3070) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
          McTemplateU0qq_EventWriteTransfer(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_FRAME_QUEUED,
            v5,
            *((_DWORD *)a1 + 37));
        goto LABEL_22;
      }
      CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(&CManipulationManager::s_InputQueue, &v20, 0LL, 0LL);
      Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v20);
    }
  }
  AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
  dword_1803D73E8 = GetCurrentThreadId();
  v14 = 0LL;
  v15 = *((unsigned int *)a1 + 37);
  if ( (_DWORD)v15 )
  {
    do
    {
      CManipulationManager::s_rgPointerIds[v14] = *((_DWORD *)a1 + 60 * (unsigned int)v14 + 41);
      v14 = (unsigned int)(v14 + 1);
      v15 = *((unsigned int *)a1 + 37);
    }
    while ( (unsigned int)v14 < (unsigned int)v15 );
  }
  if ( (*((_DWORD *)a1 + 43) & 0x180000) == 0 )
    SetManipulationInputTarget(*((unsigned int *)a1 + 42), 0LL, v15, CManipulationManager::s_rgPointerIds, a1, v17);
  dword_1803D73E8 = 0;
  ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
LABEL_22:
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v19);
  return 1LL;
}
