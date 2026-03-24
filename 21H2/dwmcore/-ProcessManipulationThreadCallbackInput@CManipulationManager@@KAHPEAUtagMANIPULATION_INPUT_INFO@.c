/*
 * XREFs of ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18022648C
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@KAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001C2D0 (-ManipulationThreadCallback@CManipulationManager@@KAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D3644 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1800E6630 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180152A88 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180224D3C (-Insert@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV-$ComPtr@VCManipulatio.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x1802257E4 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x180226748 (-QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x1802334E4 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CManipulationManager::ProcessManipulationThreadCallbackInput(
        struct tagMANIPULATION_INPUT_INFO *a1,
        CManipulationManager *this)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rcx
  struct CManipulationFrame *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  struct CManipulationFrame *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  if ( !a1 )
    return 1LL;
  v4 = *((_QWORD *)a1 + 17);
  v5 = *((_DWORD *)a1 + 16);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &MANIPULATION_FRAME_RECEIVED,
      v5,
      *((_DWORD *)a1 + 11));
  InputTraceLogging::GestureTargeting::QueueFrame(v4, *(_QWORD *)a1, v5, *((_DWORD *)a1 + 11));
  v6 = CManipulationFrame::Create(a1, &v17);
  v8 = v17;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x163u, 0LL);
    goto LABEL_20;
  }
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v17);
  v17 = v8;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v17);
  v12 = CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(v10, v9, (__int64 *)&v17);
  if ( v8 )
    (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0x165u, 0LL);
    goto LABEL_20;
  }
  if ( GetCurrentThreadId() != CManipulationManager::s_dwManipulationThreadId || !this )
  {
    if ( SetEvent(qword_1803474D8) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &MANIPULATION_FRAME_QUEUED,
          v5,
          *((_DWORD *)a1 + 11));
      goto LABEL_25;
    }
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(v13, &v17, 0, 0LL);
    if ( v17 )
      (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v17 + 8LL))(v17);
LABEL_20:
    AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
    dword_180347820 = GetCurrentThreadId();
    v14 = 0LL;
    v15 = *((unsigned int *)a1 + 11);
    if ( (_DWORD)v15 )
    {
      do
      {
        CManipulationManager::s_rgPointerIds[v14] = *((_DWORD *)a1 + 60 * (unsigned int)v14 + 15);
        v14 = (unsigned int)(v14 + 1);
        v15 = *((unsigned int *)a1 + 11);
      }
      while ( (unsigned int)v14 < (unsigned int)v15 );
    }
    if ( (*((_DWORD *)a1 + 17) & 0x180000) == 0 )
      SetManipulationInputTarget(*((unsigned int *)a1 + 16), 0LL, v15, CManipulationManager::s_rgPointerIds);
    dword_180347820 = 0;
    ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
    goto LABEL_25;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &MANIPULATION_FRAME_QUEUED,
      v5,
      *((_DWORD *)a1 + 11));
  CManipulationManager::OnInput(this);
LABEL_25:
  if ( v8 )
    (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v8 + 8LL))(v8);
  return 1LL;
}
