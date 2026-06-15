/*
 * XREFs of ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800C7AE4
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C76E0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800C7DC0 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002EA90 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800C3370 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x1800C6BE8 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800C7134 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800CB020 (-RemoveAt@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18013DA38 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreamList(CAudioSession *this)
{
  CAudioSession *v1; // rdi
  unsigned int v2; // r14d
  __int64 v3; // r15
  struct _RTL_CRITICAL_SECTION *v4; // r12
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned __int64 i; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  void (*v9)(void); // rax
  void (__fastcall ***v10)(_QWORD, __int64 *); // rax
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // rbx
  __int64 v14; // rcx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp-98h]
  ATL::CAtlException *v16; // [rsp+38h] [rbp-90h] BYREF
  ATL::CAtlException *v17; // [rsp+40h] [rbp-88h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-80h] BYREF
  __int64 v19; // [rsp+50h] [rbp-78h]
  __int64 v20; // [rsp+58h] [rbp-70h]
  int v21; // [rsp+60h] [rbp-68h]
  char v22[96]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v24; // [rsp+E0h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+E8h] [rbp+20h]

  v1 = this;
  v2 = 0;
  v18 = 0LL;
  v3 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v5 = v4;
  v25 = v4;
  for ( i = 0LL; i < *((_QWORD *)v1 + 22); ++i )
  {
    try
    {
      v2 = 0;
      if ( i >= *((_QWORD *)v1 + 22) )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
        &v18,
        (_QWORD *)(*((_QWORD *)v1 + 21) + 8 * i));
    }
    catch ( ATL::CAtlException *v16 )
    {
      v12 = v16;
      if ( *(_DWORD *)v16 == -1073741571 )
        _o__resetstkoflw();
      v1 = this;
      v2 = *(_DWORD *)v12;
      v5 = v25;
      v4 = v15;
    }
    if ( i >= *((_QWORD *)v1 + 22) )
      ATL::AtlThrowImpl(-2147024809);
    v7 = *(_QWORD *)(*((_QWORD *)v1 + 21) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
    v3 = v19;
  }
  if ( v4 )
    LeaveCriticalSection(v5);
  while ( v3 )
  {
    try
    {
      v8 = *v18;
      v24 = *v18;
      v2 = 0;
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt(&v18, 0LL);
    }
    catch ( ATL::CAtlException *v17 )
    {
      v13 = v17;
      if ( *(_DWORD *)v17 == -1073741571 )
        _o__resetstkoflw();
      v1 = this;
      v2 = *(_DWORD *)v13;
      v8 = v24;
    }
    if ( *(_BYTE *)(v8 + 128) )
    {
      if ( *(_BYTE *)(v8 + 224) )
      {
        MicrosoftTelemetryAssertTriggeredArgs(v14, 0LL, 0LL);
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v1 + 8LL))(v1);
        v10 = (void (__fastcall ***)(_QWORD, __int64 *))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                          (__int64)v22,
                                                          (__int64)v1,
                                                          1,
                                                          0,
                                                          v8,
                                                          (__int64)L"CAudioSession::DisconnectStreamList");
        CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v1 + 496), v10);
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v1 + 16LL))(v1);
      }
      (*(void (__fastcall **)(CAudioSession *, __int64, _QWORD))(*(_QWORD *)v1 + 312LL))(v1, v8, 0LL);
      v9 = *(void (**)(void))(*(_QWORD *)(v8 + 8) + 176LL);
    }
    else
    {
      v9 = *(void (**)(void))(*(_QWORD *)(v8 + 8) + 184LL);
    }
    v9();
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
    v3 = v19;
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&v18);
  return v2;
}
